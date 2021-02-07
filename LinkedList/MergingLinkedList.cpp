///Adding Two sorted Linked List!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F1 = NULL, *F2 = NULL, *T = NULL;
void Merging(struct Node* p, struct Node* q);
void Display(struct Node* p);
int main()
{
    Node* S1 = NULL;
    Node* T1 = NULL;
    Node* Fo1 = NULL;

    F1 = new Node;
    S1 = new Node;
    T1 = new Node;
    Fo1 = new Node;

    F1 -> data = 2;
    F1 -> next = S1;

    S1 -> data = 4;
    S1 -> next = T1;

    T1 -> data = 6;
    T1 -> next = Fo1;

    Fo1 -> data = 8;
    Fo1 -> next = NULL;

    Node* S2 = NULL;
    Node* T2 = NULL;

    F2 = new Node;
    S2 = new Node;
    T2 = new Node;

    F2 -> data = 3;
    F2 -> next = S2;

    S2 -> data = 5;
    S2 -> next = T2;

    T2 -> data = 10;
    T2 -> next = NULL;

     Display(F1);
     cout<<endl;
      Display(F2);
      cout<<endl;

    Merging(F1,F2);
    Display(T);

}



void Merging(struct Node* p, struct Node* q)
{
    Node* L;
    if(p -> data < q -> data)
    {
        T = L = p;
        p = p -> next;
        T -> next = NULL;
    }
    else
    {
        T = L = q;
        q = q -> next;
        T -> next = NULL;
    }

    while(p != NULL && q != NULL)
    {
        if(p -> data < q -> data)
        {
            L -> next = p;
            L = p;
            p = p -> next;
            L -> next = NULL;
        }
        else
        {
            L -> next = q;
            L = q;
            q = q -> next;
            L -> next = NULL;
        }
    }
    if(p != NULL)
    {
        L -> next = p;
    }
    if(q)
    {
        L -> next = q;
    }
}
void Display(struct Node* p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}


