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
    int t;cin>>t;
    while(t--){
        int n,b;cin>>n>>b;
        int a[n];
        unordered_set<int>se;
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        bool res=false;
        for(int i=0;i<n;i++){
            int x=a[i];
            if(se.count(x-b) || se.count(x+b)){
                res=true;
                break;
            }
            se.insert(x);
        }
        cout<<(res?1:0)<<'\n';
    }
    return 0;
}
/* ...find difference is equal to x... */
// int l=0,r=n-1;
// while(l<r){
//     if(a[l]==a[r]+x)
//     count++;
//     else if (a[l]<a[r]+x)
//     l++;
//     else
//     r++;
// }