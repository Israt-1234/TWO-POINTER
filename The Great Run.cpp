#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define yes cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int r=0;
        int ans=INT_MIN;
       for(int i=0;i<=n-k;i++){
          int j=i;
          int sum=0;
          while(j<(i+k)){
            sum+=a[j];
            j++;
          }
          if(sum>ans)
          ans=sum;
        }
        cout<<ans<<'\n';
    }
    return 0;
}