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


//Create two arrays to track maximums and minimums before and after the i-th element
// prefix and suffix arrays
void solve(){
    int n;
    cin>>n;
    vector<int>v(n),mx(n),mn(n);
    int ans=0;

    for(auto &i:v)cin>>i;
    mx[0]=v[0],mn[n-1]=v[n-1];
    for(int i=1;i<n;i++){
        mx[i]=max(mx[i-1],v[i]);
        mn[n-i-1]=min(mn[n-i],v[n-i-1]);
    }

    for(int i=1;i<n-1;i++){
        if(v[i]>=mx[i-1] && v[i]<mn[i+1])ans++;
    }
    if(v[0]==mn[0])ans++;
    if(v[n-1]==mx[n-1])ans++;
    cout<<ans;
}
int main(){
    solve();
}
