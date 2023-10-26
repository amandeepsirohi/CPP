#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
void add(vector<int> arr[] , int i, int j)
{
    arr[i].push_back(j);
    arr[j].push_back(i);
}
void print(vector<int> adj[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {   cout << i << "->" << " ";
        for(auto x : adj[i])
        {
            cout <<x << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "enter number of vertices ";
    int v;
    cin >> v;
    vector<int> adj[v+1];

    add(adj , 1 , 2);
    add(adj , 2 ,3);
    add(adj , 1, 4);
    
    print(adj , v + 1);
}