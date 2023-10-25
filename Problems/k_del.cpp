#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node{
        int data;
         Node *next;
    public:
        Node(int x)
        {
            data = x;
            next = NULL;
        }
};

void print(Node *root)
{
    if(root == NULL) return;
    Node *curr = root;
    while(curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;
    return;
}

Node *k_del(Node *root , int k)
{   if(root == NULL) return NULL;
    Node *gg = new Node(0);
    gg->next = root;
    Node *a = gg , *b = gg;
    for(int i =1 ; i <= k ; i++)
    {
        if(a == NULL)
        {
            cout << "K out of range" << endl;
            return NULL;
        }
        a= a->next;
    }
    while(a->next != NULL)
    {
        a= a->next;
        b = b->next;
    }
    b->next = b->next->next;
    return gg->next;
}

int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    cout << "enter k ";
    int k;
    cin >> k;
    print(root);
    root = k_del(root , k);
    print(root);
}