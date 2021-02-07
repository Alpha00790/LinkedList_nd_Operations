//Insertion in sorted linked list!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

}*F = NULL;
void inxertsorted(struct Node* p, int x);
void Display(struct Node *p);
int main()
{
    Node *S = NULL;
    Node *T = NULL;

    F = new Node;
    S = new Node;
    T = new Node;

    F -> data = 5;
    F -> next = S;

    S -> data = 8;
    S -> next = T;

    T -> data = 10;
    T -> next = NULL;

    inxertsorted(F,15);
     Display(F);
}

void inxertsorted(struct Node* p, int x)
{
    Node *t, *q = NULL;
    t = new Node;
    t -> data = x;
    t -> next = NULL;

    if(F == NULL)
    {
        F = t;
    }
    else
    {
        while(p && p->data<x)
        {
            q = p;
            p = p -> next;
        }
        if(p == F)
        {
            t->next = F;
            F = t;
        }
        else
        {
            t->next = q -> next;
            q -> next = t;
        }
    }
}
void Display(struct Node *p){
    while( p != NULL){
        cout<<p->data<<" ";
        p = p -> next;
    }
}
