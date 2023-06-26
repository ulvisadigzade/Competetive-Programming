#include <bits/stdc++.h>
using namespace std;


int solve(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return solve(n-1)+solve(n-2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    cout<<solve(n);
}
