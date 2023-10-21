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
        Node()
        {
            data = 0;
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
Node* add(Node *num1 , Node *num2)
{
    Node *gg = new Node();
    Node *temp = gg;
    int carry = 0 , sum = 0;
    while(num1 || num2 || carry)
    {
        sum = 0;
        if(num1 != NULL)
        {
            sum += (num1->data);
            num1 = num1->next;
        }
        if(num2 != NULL)
        {
            sum += (num2->data);
            num2 = num2->next;
        }
        sum += carry;
        carry = sum / 10;
        Node *aa = new Node(sum % 10);
        temp->next = aa;
        temp = temp->next;
    }
    return gg->next;
}
int main()
{
    Node *root1 = new Node(0);
    root1->next = new Node(22);
    root1->next->next = new Node(33);
    Node *root2 = new Node(1);
    root2->next = new Node(2);
    root2->next->next = new Node(3);
    Node* sum = add(root1 , root2);
    print(sum);
}