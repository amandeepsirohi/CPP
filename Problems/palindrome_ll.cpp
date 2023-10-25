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
    Node *rev(Node* head)
    {
        Node *curr = head , *prev = NULL , *nn = head->next;
        while(curr != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = nn;
            if(nn!= NULL) nn = nn->next;
        }
        return prev;
    }
    bool isPalindrome(Node* head) {
        if(head == NULL || head->next == NULL) return true;
        Node *slow = head , *fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast= fast->next->next;
        }
        slow->next = rev(slow->next);
        slow = slow->next;
        Node *dummy = head;
        while(slow != NULL)
        {   cout << slow->data << " " << dummy->data << endl;
            if(dummy->data != slow->data) return false;
            slow = slow->next;
            dummy = dummy->next;
        }
        return true;
    }
int main()
{
    Node *root = new Node(1);
    root->next = new Node(2);
    root->next->next = new Node(3);
    root->next->next->next = new Node(3);
     root->next->next->next->next = new Node(1);
    cout << isPalindrome(root);
}