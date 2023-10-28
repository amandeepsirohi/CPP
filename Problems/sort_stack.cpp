#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
void insert(stack<int> &s , int temp)
{
    if(s.size() == 0 || s.top() < temp)
    {
        s.push(temp);
        return;
    }
    int k = s.top();
    s.pop();
    insert(s , temp);
    s.push(k);
}
void sort(stack<int> s)
{
    if(s.size() == 1) return;
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s , temp);
}
int main()
{
    stack<int> s;
    for(int i = 5 ; i >= 1 ; i--)
    {
        s.push(i);
    }
    while(s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    sort(s);
    while(s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
}