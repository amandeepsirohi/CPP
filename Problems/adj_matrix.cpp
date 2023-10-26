#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
const int k = 4;
class graph{
    private:
        int ** adj;
    public:
        graph(int k)
        {   adj = new int * [k+1];
            for(int i = 0 ; i< k +1 ; i++)
            {
                adj[i] = new int [k +1];
            }
            for(int i = 0 ; i < k + 1 ; i++)
            {
                for(int j = 0 ; j < k + 1 ; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        void set_val(int i , int j , int w)
        {
            adj[i][j] = w;
            adj[j][i] = w;
        }
        void remove_val(int i , int j)
        {
            adj[i][j] = 0;
            adj[j][i] = 0;
        }
        void see_val()
        {
            for(int i = 0 ; i < k +1 ; i++)
            {
                for(int j = 0 ;  k + 1; j++)
                {
                    cout << adj[i][j] << " ";
                }
                cout << endl;
            }
        }
        ~graph(){
            for(int i = 0 ; i < k + 1 ; i++)
            {
                delete adj[i];
            }
            delete adj;
        }
};
int main()
{
    graph gg(4);
    // gg.set_val(1 , 2 , 88);
    gg.see_val();
}