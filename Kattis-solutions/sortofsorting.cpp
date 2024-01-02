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


// NO NEED TO IMPLEMENT SPECIAL ALGORITHM
// JUST USE (STABLE_SORT) FUNCTION AND CUSTOM COMPARATOR
bool cmp(string i1,string i2){
    if(i1.substr(0,2)!=i2.substr(0,2))return i1.substr(0,2)<i2.substr(0,2);
}
int main(){
    int t;
    while(cin>>t && t!=0){
        vector<string>v(t);
        for(auto &i:v)cin>>i;
        
        stable_sort(all(v),cmp);

        for(auto &i:v)cout<<i<<"\n";
        cout<<"\n";
    }
}
