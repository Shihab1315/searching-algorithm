
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    // lower bound
    int index = (lower_bound(arr, arr + n, x) - arr);
   // int lower_bound_value = arr[index]; // make sure index in a range
    cout << "Index:" << index-1 << '\n';
    //cout << "lower bound Value:"<<lower_bound_value<< '\n';

    //upper bound
    int index1 = (upper_bound(arr, arr + n, x) - arr);
   // int upper_bound_value1 = arr[index]; // make sure index in a range
    cout << "Index:" << index1 << '\n';
    //cout << "Upper bound Value:" << upper_bound_value1 << '\n';
    return 0;
}