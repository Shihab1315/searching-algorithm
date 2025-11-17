
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
   //first occurance
   while(left<=right){
    ll mid=(left+right)/2;
    if(arr[mid]==x){
       ans=mid;
       right=mid-1;
    }
     if(arr[mid]<x){
        left=mid+1;
     }if(arr[mid]>x){
        right=mid-1;
     }
   }
//last occurance
     ll st=0,end=n-1;
     int find=-1;
    while(st<=end){
    ll mid=(st+end)/2;
    if(arr[mid]==x){
        find=mid;
        st=mid+1;
    }
     if(arr[mid]<x){
        st=mid+1;
     }if(arr[mid]>x){
        end=mid-1;
     }
    }
   
    cout<<find-ans+1<<endl;
    return 0;
}