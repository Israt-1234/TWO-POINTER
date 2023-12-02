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
    int n,k;cin>>n>>k;
     int a[n],b[k];
     vector<int>v;
     for(int i=0;i<n;i++){
     cin>>a[i];
     }
     for(int i=0;i<k;i++)
     cin>>b[i];

     int i=0,j=0; int count =0;
    while(j<n and i<k){
        if(a[j]<b[i]){
            count++;
            j++;
           // cout<<b[i]<<" "<<a[j]<<endl;
        }
        else{
        v.push_back(count);
        i++;

        }
    }
    while(i<k){
        v.push_back(count);
        i++;
        }

    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;

    return 0;
}

/* different apporoch */

// vector<int>res(k);
// int i=0;
// for(int j=0;j<k;j++){
//  while(i<n && a[i]<b[j])
//  i++;
//
//  res[j]=i;
// }
// for(auto x:res){

// }