#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node{
    int data;
    Node *next;
    public:
        Node ()
        {
            data = 0;
            next = NULL;
        }
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
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node * delete_k(Node *head , int k)
{
    if(head == NULL) return head;
    Node *gg = new Node();
    gg->next = head;
    Node *p1 = gg , *p2 = gg;
    for(int i = 0 ; i <= k; i++)
    {   if(p1 == NULL) return gg->next;
        p1 = p1->next;
    }
    while(p1->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    p2->next = p2->next->next;
    return gg->next;

}
int main()
{
  Node* root = new Node(11);
  root->next = new Node(22);
  root->next->next = new Node(33);
   root->next->next->next = new Node(333);
  print(root);
  int k;
  cin >> k;
  root = delete_k(root , k);
  print(root);  
}