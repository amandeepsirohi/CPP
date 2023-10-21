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
Node *merge(Node *first , Node *second)
{
    if(first == NULL && second == NULL) return NULL;
    if(first == NULL && second != NULL) return second;
    if(second == NULL && first != NULL) return first;
    if(first->data > second->data) swap(first , second);
    Node *res = first;
     while(first != NULL && second != NULL) {
 
            Node* temp = NULL;

            while(first != NULL && first->data <= second->data) {

                temp = first;
                first = first->next;
            }
            temp->next = second;
            std::swap(first,second);
        }
    return res;
}
int main()
{
    Node *root1 = new Node(0);
    root1->next = new Node(22);
    root1->next->next = new Node(33);
    Node *root2 = new Node(1);
    root2->next = new Node(2);
    root2->next->next = new Node(3);
    Node *gg = merge(root1 , root2);
    print(gg);
}