#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;
void inxertF(int x);
void Display(struct Node* p);
int main()
{
    inxertF(10);
    inxertF(20);
    Display(F);
}
void inxertF(int x)
{
    Node *t;
    t = new Node;
    t -> data = x;
    t -> next = F;
    F = t;
}
void Display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
