
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
    bool ft = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            ft = true;
            break;
        }
        else
        {
            continue;
        }
    }
    if (ft)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}