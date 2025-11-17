
#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int st = 0, end = n;
    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    if (arr[st] == target)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    cout<<st<<endl;

    return 0;
}