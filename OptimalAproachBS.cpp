#include <iostream>
using namespace std;

int n, x;
int arr[100005];

bool pred(int mid){
	if(arr[mid]>=x) return 1;
	return 0;
}

int main() {
	
	cin>>n>>x;
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int left=0, right=n-1;
	int ans = -1;
	
	while(left<=right){
		int mid=(left+right)/2;
		
		if(pred(mid)){
			ans = arr[mid];
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}