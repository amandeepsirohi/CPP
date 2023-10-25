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
int mid(Node *root)
{
    if(root == NULL) return -1;
    if(root->next == NULL) return root->data;
    Node *slow = root , *fast = root;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    cout << mid(root);
}