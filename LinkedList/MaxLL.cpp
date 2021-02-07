//Maximum in linked list;
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
int maxed(struct Node *p);
int main()
{
    struct Node *F = NULL;
    struct Node *S = NULL;
    struct Node *T = NULL;
    struct Node *Fo = NULL;

    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;

    F -> data = 5;
    F -> next = S;

    S -> data = 4;
    S -> next = T;

    T -> data = 9;
    T -> next = Fo;

    Fo -> data = 2;
    Fo -> next = NULL;

    cout<<maxed(F);
}
int maxed(struct Node *p)
{
    int maxi = INT32_MIN;
    while(p)
    {
        if(p -> data>maxi)
            maxi = p -> data;
        p = p -> next;
    }

    return maxi;
}
