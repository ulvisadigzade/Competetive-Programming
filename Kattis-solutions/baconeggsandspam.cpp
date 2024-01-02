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

void solve(){
    int t;
    while(cin>>t && t!=0){
        cin>>ws;
        string s,tmp;
        map<string,vector<string>>v;
        for(int r=0;r<t;r++){
            getline(cin,s);
            s+=' ';
            vector<string>wrd;
            for(auto &i:s){
                if(i==' '){
                    wrd.pb(tmp);
                    tmp.clear();
                }else{
                    tmp+=i;
                }
            }

            for(int i=1;i<wrd.size();i++){
                v[wrd[i]].pb(wrd[0]);
            }

        }
            for(auto &i:v){
                cout<<i.first<<" ";
                sort(all(i.second));
                for(auto j:i.second)cout<<j<<" ";
                cout<<"\n";
            }
            cout<<"\n";
    }
}
int main(){
    solve();
}
