#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main()
{   int count = 0;
    cout << "enter number of bulbs ";
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i % j == 0) count += 1;
        }
        if(count % 2 != 0)
        {
            cout << "bulb " << i << " will be on after " << n << " switch presses " << endl;
        }
        else{
            cout << "bulb " << i << " will be off after " << n << " switch presses " << endl;
        }
        count = 0;
    }
}