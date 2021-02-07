#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*F = NULL;
void inxert(int pos, int x);
void Display(struct Node *p);

int main()

{
    int x,y;
    for(int i = 0 ; i < 5; i++){
        cin>>x>>y;
        inxert(x,y);
    }
    Display(F);
}
void inxert(int pos, int x)
{
    Node *t, *p;
    if(pos == 0)
    {
        t = new Node;
        t -> data = x;
        t -> next = F;
        F = t;
    }
    else if(pos > 0)
    {
        p = F;
        for(int i = 0; i< pos - 1 && p; i++)
            p = p -> next;
            if(p)
            {
                t = new Node;
                t-> data = x;
                t -> next = p -> next;
                p -> next = t;
            }
    }
}
void Display(struct Node *p){
    while( p != NULL){
        cout<<p->data<<" ";
        p = p -> next;
    }
}

