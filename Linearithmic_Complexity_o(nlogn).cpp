#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)           //o(n)
    {
        for(int j=1;j<=n;j*=2)      //o(logn)
        {
            cout << "Hello Siraji" << endl;
        }
    }
    return 0;
}