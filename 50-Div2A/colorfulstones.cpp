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


//Just to what problem says
//https://codeforces.com/contest/265/problem/A

void solve(){
    string a,b;
    int cr=0;
    cin>>a>>b;
    for(int i=0;i<b.size();i++){
        if(a[cr]==b[i])cr++;
    }
    cout<<cr+1;
}
int main(){
    solve();
}
