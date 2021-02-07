///Adding Two Linked List!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F1 = NULL, *F2 = NULL;
void appending(struct Node* p1, struct Node* p2);
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

    F2 -> data = 10;
    F2 -> next = S2;

    S2 -> data = 4;
    S2 -> next = T2;

    T2 -> data = 6;
    T2 -> next = NULL;

     Display(F1);
     cout<<endl;
      Display(F2);
      cout<<endl;

    appending(F1, F2);
    Display(F1);

}

void appending(struct Node*p , struct Node* q)
{
    p = F1;
    while(p -> next != NULL)
    {
        p = p -> next;
    }
    p -> next = q;

    q = NULL;

}
void Display(struct Node* p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}

