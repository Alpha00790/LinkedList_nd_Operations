//searching element in linked list!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*F = NULL;

int searxh(struct Node *p, int key);
int main()
{
    struct Node *S = NULL;
    struct Node *T = NULL;

    F = new Node;
    S = new Node;
    T = new Node;

    F -> data = 10;
    F -> next = S;

    S -> data = 50;
    S -> next = T;

    T -> data = 25;
    T -> next = NULL;


    searxh(F, 25)? printf("Yes") : printf("No");
}
int searxh(struct Node *p, int key)
{
    struct  Node *q;
    while(p)
    {
        q = p;
        if(p -> data == key){
            q -> next = p -> next;
            p -> next = F;
            F = p;
            return true;
        }
        p = p -> next;
    }
    return false;
}
