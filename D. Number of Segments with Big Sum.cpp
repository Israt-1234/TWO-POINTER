#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; ll s; cin>>n>>s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=0;
    ll sum=0;
    int r=1;
    for(int l=1;l<=n;l++){
        while(r<=n and sum+a[r]<s){
            sum+=a[r];
            r++;
        }
       // if(sum>=s)
        ans+=n-r+1;
        sum-=a[l];
    }
    cout<<ans<<endl;
    return 0;
}

