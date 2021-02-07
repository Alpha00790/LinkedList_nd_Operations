///Checking if the linked list is Linear or Looped!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;
int isLoop(Node *F);
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
    Fo -> next = S;

    isLoop(F)==1?cout<<"LOOP":cout<<"LINEAR";

}
int isLoop(Node *F)
{
    Node *p, *q;
    p = q = F;

    do
    {
        p = p -> next;
        q = q -> next;
        q = q!=NULL ? q -> next : NULL;
    }while(p && q && p != q);
    return p==q ? true:false;
}
