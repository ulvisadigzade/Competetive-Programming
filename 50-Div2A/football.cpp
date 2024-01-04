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


//Brute force

void solve(){
    int n,mx=0;
    cin>>n;
    map<string,int>v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        mx=max(mx,++v[s]);
    }   

    for(auto &i:v){
        if(i.second==mx){
            cout<<i.first;
            return;
        }
    }
}
int main(){
    solve();
}
