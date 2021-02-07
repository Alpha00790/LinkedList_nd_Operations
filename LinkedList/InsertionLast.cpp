#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL, *L = NULL;
void inxertF(int x);
void inxertL(int x);
void Display(struct Node* p);
int main()
{


    inxertL(10);
    inxertF(20);
    inxertF(50);
    inxertL(90);

    Display(F);
}
void inxertF(int x)
{
    Node *t;
    t = new Node;
    t -> data = x;
    t -> next = NULL;
    if(F != NULL)
    {
        t -> next = F;
    }
    F = t;
}
void inxertL(int x)
{
    Node *t = new Node;
    t -> data = x;
    t -> next = NULL;
    if(F == NULL)
    {
        F=L=t;
    }
    else
    {
        L -> next = t;
        L = t;
    }
}
void Display(struct Node* p)
{
    while(p)
    {
        cout<<p -> data<<" ";
        p = p -> next;
    }
}
