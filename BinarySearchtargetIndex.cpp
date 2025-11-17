
#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
   ll n,x;
   cin>>n>>x;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ll left=0,right=n-1;
  int ans=-1;
   while(left<=right){
    ll mid=(left+right)/2;
     if(arr[mid]==x){
        ans=mid;
        break;
     }else if(arr[mid]<x){
        left=mid+1;
     }else{
        right=mid-1;
     }
   }
   cout<<ans<<'\n';
    return 0;
}
