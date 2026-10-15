#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)                       // o(n)
    {
        for(int j=1;j<=n;j++)                   // o(n)
        {
            cout << "Rifat Siraji" << endl;
        }                                       // o(n*n)
    }                                           // o(n^2)
    return 0;
}