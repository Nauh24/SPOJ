#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[k];
    system("pause");
}