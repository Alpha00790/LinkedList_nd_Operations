///Deletion of any element from List expect the first!!!!
///Trying to implement the fist deletion.
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void Deletion(struct Node* p, int x);
void Display(struct Node* p);
int main()
{
    struct Node *F = NULL;
    struct Node *S = NULL;
    struct Node *T = NULL;
    struct Node *Fo = NULL;
    struct Node *Fif = NULL;
    struct Node *Si = NULL;
    struct Node *Se = NULL;
    struct Node *E = NULL;


    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;
    Fif = new Node;
    Si = new Node;
    Se = new Node;
    E = new Node;


    F -> data = 10;
    F -> next = S;

    S -> data = 20;
    S -> next = T;

    T -> data = 30;
    T -> next = Fo;

    Fo -> data = 50;
    Fo -> next = Fif;

    Fif -> data = 60;
    Fif -> next = Si;

    Si -> data = 70;
    Si -> next = Se;

    Se -> data = 80;
    Se -> next = E;

    E -> data = 90;
    E -> next = NULL;

    Deletion(F, 50);
    Deletion(F, 70);
    Deletion(F, 90);
    Display(F);
}
void Deletion(struct Node *p, int x)
{
    Node* q = NULL;
    while(p && p->data!= x)
    {
        q = p;
        p = p->next;
    }
    q -> next = p -> next;
    x = p -> data;
    cout<<"Deleted element : "<<x<<endl;
    delete p;
}
void Display(struct Node* p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p -> next;

    }
}
