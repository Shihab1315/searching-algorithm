
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
    cin>>x;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  
   cout<<binary_search(arr,arr+n,x)<<"\n";
    return 0;
}