//Abdul Bari sir + Geek For Geeks!!!!
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
int sum(struct Node *p);
int main()
{
    struct Node *F = NULL;
    struct Node *S = NULL;
    struct Node *T = NULL;

    F = new Node;
    S = new Node;
    T = new Node;

    F -> data = 5;
    F -> next = S;

    S -> data = 10;
    S -> next = T;

    T -> data = 30;
    T -> next = NULL;

    cout<<sum(F);
}

int sum(struct Node *p){
    int add = 0;
    while(p){
        add = add + p -> data;
        p = p -> next;
    }
    return add;
}
