#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n],b[n];
        unordered_set<int>set1,set2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            set1.insert(a[i]);
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
            set2.insert(b[i]);
        }
        ll r=0;
        ll count=0;
       for(auto x:set1){
        if(set2.find(x)!=set2.end())
        count++;
       }
        cout<<count<<endl;
    }
    return 0;
}

/* .... different apporach .... */

// int ans=0,i=0,j=0;
// while(i<n && j<n){
//     if(a[i]==b[j])
//     ans++,i++,j++;
//     else if(a[i]<b[i])
//     i++;
//     else
//     j--;
// }