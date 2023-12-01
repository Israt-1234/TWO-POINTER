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
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
       
        vector<int>v;
        int count=1;

        if(n==1){
            cout<<1<<" "<<1<<'\n';
        }
        else{
          for(int i=0;i<n-1;i++){
         if(a[i+1]-a[i]<=2)
            count++;
          
         else{
          v.push_back(count);
          count=1;
          }
        }
        v.push_back(count);
        cout<<*min_element(v.begin(),v.end())<<" "<<*max_element(v.begin(),v.end())<<endl;
     }
 
    }
    return 0;
}