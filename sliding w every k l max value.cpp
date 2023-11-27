
#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
struct ds{
  multiset<int>se;

   void insert(int x){
   se.insert(x);
   }
   void erase(int x){
   se.erase(se.find(x));
   }
   int get_max(){
   return *(--se.end());
   }

}ds;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n ,k; cin>>n>>k;
 //  ds window;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  for(int i=1;i<=n;i++){
   ds.insert(a[i]);
    if(i>=k){
        cout<<ds.get_max()<<" ";
        ds.erase(a[i-k+1]);
    }
  }
  return 0;
}
