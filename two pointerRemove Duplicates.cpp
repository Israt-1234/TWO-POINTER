#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<YES<<endl
#define yes cout<<NO<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
       ll n; cin>>n;
       ll a[n];
       set<ll>set1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            set1.insert(a[i]);
        }
        cout<<set1.size()<<'\n';
        //sort(set1.begin(),set1.end());
        for(auto x: set1){
            cout<<x<<" ";
        }
        cout<<'\n';

    }
    return 0;
}