#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//finding gcd;
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>=b)
        return gcd(a%b,b);
    if(a<b)
        return gcd(a,b%a);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b;

    cin>>a>>b; 
    //finding lcd;
    cout<<(a*b)/gcd(a,b);
}
