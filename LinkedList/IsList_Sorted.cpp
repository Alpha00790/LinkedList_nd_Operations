#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
int isSorted(struct Node *p);
int main()
{
    struct Node *F = NULL;
    struct Node *S = NULL;
    struct Node *T = NULL;
    struct Node *Fo = NULL;
    struct Node *Fif = NULL;

    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;
    Fif = new Node;

    F -> data = 10;
    F -> next = S;

    S -> data = 20;
    S -> next = T;

    T -> data = 30;
    T -> next = Fo;

    Fo -> data = 100;
    Fo -> next = Fif;

    Fif -> data = 60;
    Fif -> next = NULL;

    isSorted(F);
}

int isSorted(struct Node *p)
{
    int x = INT32_MIN;
    while(p!= NULL)
    {
        if(p->data < x)
        {
            cout<<"Not Sorted";
            return 0;
        }
        x = p -> data;
        p = p-> next;
    }
    cout<<"Sorted";
    return 0;
}
