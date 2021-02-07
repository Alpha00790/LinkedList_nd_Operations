#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;
void Revv(struct Node* p);
void Display(struct Node* p);
int main()
{
    Node* S = NULL;
    Node* T = NULL;
    Node* Fo = NULL;

    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;

    F -> data = 5;
    F -> next = S;

    S -> data = 10;
    S -> next = T;

    T -> data = 15;
    T -> next = Fo;

    Fo -> data = 20;
    Fo -> next = NULL;

    Display(F);
    cout<<endl;
    Revv(F);
    cout<<endl;
    Display(F);
}
void Revv(struct Node* p)
{
    p = F;
    Node* q = NULL;
    Node* r = NULL;

    while(p != NULL)
    {
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }

    F = q;
}
void Display(struct Node* p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}
