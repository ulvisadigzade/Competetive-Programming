#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return solve(x*x,n/2);
    else 
        return x*solve(x,n-1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,n;
    cin>>x>>n;

    cout<<solve(x,n);
}
