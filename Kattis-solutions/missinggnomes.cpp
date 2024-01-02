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


//Sort not used elements in decreasing order and print them if they are smaller than i-th used element

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1),f(k),s;

    for(int i=0;i<k;i++){
        int l;
        cin>>l;
        v[l]=1;
        f[i]=l;
    }

    for(int i=1;i<=n;i++){
        if(!v[i])s.pb(i);
    }
    sort(allr(s));

    for(auto &i:f){
        while(!s.empty() && s.back()<i){
            cout<<s.back()<<"\n";
            s.pop_back();
        }
        cout<<i<<"\n";
    }
    while(!s.empty()){
        cout<<s.back()<<"\n";
        s.pop_back();
    }
}
int main(){
    solve();
}
