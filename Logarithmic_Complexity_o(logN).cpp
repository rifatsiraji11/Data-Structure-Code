#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                      // o(1)
    cin >> n;                   // o(10)
    for(int i=1;i<=n;i*=2)      // o(log n)
    {
        cout << i << endl;
    }
    return 0;                   // o(1)
}