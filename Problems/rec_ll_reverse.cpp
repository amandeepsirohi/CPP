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
void print(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr  = curr->next;
    }
    
}
Node *rev(Node *head)
{
    if(head == NULL || head->next == NULL) return head;
    Node *gg = rev(head->next);
    head->next->next = head;
    head->next = NULL;
    return gg;
}
int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    print(root);
    cout << endl;
    root = rev(root);
    cout << endl;
    print(root);
}