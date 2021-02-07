//Geek For Geeks Thanks!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void print(struct Node *p);
int main()
{
    struct Node *F = NULL;
    struct Node *S = NULL;
    struct Node *T = NULL;
    struct Node *Fo = NULL;

    //Now memory Allocation in heap using pointer!!!!Or something like that.
    F = new Node;
    S = new Node;
    T = new Node;
    Fo = new Node;

    F -> data = 10;
    F -> next = S;

    S -> data = 20;
    S -> next = T;

    T -> data = 30;
    T -> next = Fo;

    Fo -> data = 40;
    Fo -> next = NULL;

    print(F);

    return 0;
}
void print(struct Node *p){
    while( p != NULL){
        cout<<p->data<<" ";
        p = p -> next;
    }
}

