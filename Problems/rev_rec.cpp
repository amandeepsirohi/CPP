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
    Node *curr = root;
    while(curr!= NULL)
    {
        cout <<  curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;;
    return;
}

Node *rev(Node *root)
{   if(root == NULL || root->next == NULL)
    {
        return root;
    }
    Node *gg = rev(root->next);
    root->next->next = root;
    root->next = NULL;
    return gg;
}

int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    root->next->next->next = new Node(44);
    print(root);
    root = rev(root);
    print(root);
}