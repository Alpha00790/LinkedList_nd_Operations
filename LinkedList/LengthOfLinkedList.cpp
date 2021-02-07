//Idea generated from geek for geeks.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
int number(struct Node *p);
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

    F -> data = 1;
    F -> next = S;

    S -> data = 1;
    S -> next = T;

    T -> data = 1;
    T -> next = Fo;

    Fo -> data = 1;
    Fo -> next = NULL;

    cout<<number(F);

    return 0;
}
int number(struct Node *p){
    int sum = 0;
    while( p != NULL){
        sum++;
        p = p -> next;
    }

    return sum;

}
