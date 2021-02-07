#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;
void RemoveDuplicate(struct Node *p);
void Display(struct Node *p);

int main()
{
    Node* S = NULL;
    Node* T = NULL;
    Node* Fo = NULL;
    Node* Fi = NULL;
    Node* Si = NULL;

    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;
    Fi = new Node;
    Si = new Node;

    F -> data = 3;
    F -> next = S;

    S -> data = 5;
    S -> next = T;

    T -> data = 5;
    T -> next = Fo;

    Fo -> data = 8;
    Fo -> next = Fi;

    Fi -> data = 8;
    Fi -> next = Si;

    Si -> data = 8;
    Si -> next =  NULL;



    Display(F);
    cout<<endl;
    RemoveDuplicate(F);
    cout<<endl;
    Display(F);
}
void RemoveDuplicate(struct Node *p)
{
    p = NULL;
    Node *q = NULL;
    q = new Node;
    p = F;
    q = F -> next;

    while(q != NULL)
    {
        if(p -> data != q -> data)
        {
            p = q;
            q = q -> next;
        }
        else
        {
            p -> next = q -> next;
            delete q;
            q = p -> next;
        }
    }

}
void Display(struct Node *p)
{
    while(p)
    {
        cout<<p -> data<<" ";
        p = p -> next;
    }
}
