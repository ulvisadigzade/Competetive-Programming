#include<bits/stdc++.h>
using namespace std;
        
#define ll long long
#define ld long double
#define start ios::sync_with_stdio(0);cin.tie(0);  
#define stp fixed<<setprecision 
#define eb emplace_back 
#define pb push_back
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
const int mx=2e9;
const int md=998244353;
int dx[8] = {1,0,-1,0,-1,1,-1,1};
int dy[8] = {0,1,0,-1,-1,1,1,-1};


//b>a,gcd(a,b)=gcd(a,b-a)
//https://codeforces.com/problemset/problem/389/A

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int ans=v[0];
    for(auto &i:v)ans=__gcd(ans,i);
    cout<<ans*n;
}
int main(){
    solve();
}
