//normal function using
//sort must
// o(n)
#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int x, int n)
{
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[n-1]==x){
            cout<<"YES"<<'\n';
            return 0 ;
        }
        else
        {
            if((a[i]+a[n-1])>x) n--;
                else
                i++;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int n;
    cin>>n; int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x; cin>>x;
    solve(a ,x,n);
}

//different way
// using bool function--------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int val1,val2;
bool solve(int a[], int x, int n)
{
    int i=0,j=n-1;
    while(i<j){
      int sum=a[i]+a[j];
      if(sum==x)                             // return true;
        //whose number are sum print them
      {
          val1=a[i];
          val2=a[j];
          return true;
      }
      else if(sum>x) j--;
      else i++;
    }
    return false;
}

int main()
{
    int n;
    cin>>n; int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x; cin>>x;
    bool ans =solve(a ,x,n);
    if(ans==true){
        cout<<"YES"<<'\n';
        cout<<val1<<' '<<val2<<'\n';
    }
    else  cout<<"NO"<<'\n';

    return 0;

}
