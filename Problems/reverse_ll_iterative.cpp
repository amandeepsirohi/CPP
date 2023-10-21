#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node {
        int data;
        Node *next = NULL;
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
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node* rev(Node *head)
{   if(head == NULL && head->next == NULL) return head;
    Node *prev = NULL;
    Node *curr = head;
    Node *nn = head->next;
    while(curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = nn;
        if(nn != NULL) nn = nn->next;
    }
    return prev;
}
int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    print(root);
    root = rev(root);
    print(root);
}