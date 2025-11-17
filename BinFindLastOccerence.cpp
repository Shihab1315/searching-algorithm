
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
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cin>>x;
   ll left=0,right=n-1;
   int ans=-1;
   while(left<=right){
    ll mid=(left+right)/2;
    if(arr[mid]==x){
        ans=mid;
        left=mid+1;
    }
     if(arr[mid]<x){
        left=mid+1;
     }if(arr[mid]>x){
        right=mid-1;
     }
   }
   //another way
   
   // ll left=0,right=n;
   
   // while(left<right){
   //  ll mid=(left+right)/2;
   //   if(arr[mid]<=x){
   //      left=mid+1;
   //   }else{
   //      right=mid;
   //   }
   // }
   // cout<<left-1<<'\n';
   cout<<ans<<'\n';
    return 0;
}
