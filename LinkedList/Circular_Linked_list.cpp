#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;
void DisplayCLL(struct Node *p);
int main()
{
    Node* S = NULL;
    Node* T = NULL;
    Node* Fo = NULL;

    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;

    F -> data = 8;
    F -> next = S;

    S -> data = 3;
    S -> next = T;

    T -> data = 9;
    T -> next = Fo;

    Fo -> data = 6;
    Fo -> next = F;

    DisplayCLL(F);
}
void DisplayCLL(Node* p)
{
    do
    {
        cout<<p->data<<" ";
        p = p -> next;
    }while(p!=F);
}
