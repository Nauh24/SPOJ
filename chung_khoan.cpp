#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    int t = 0;
    while (1)
    {
        t++;
        int n;
        int k1, k2;
        cin >> n >> k1 >> k2;
        if (n == 0 && k1 == 0 && k2 == 0)
            break;
        vector<pair<int, int>> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        vector<int> v1, v2;
        sort(v.begin(), v.end(), cmp1);
        for (int i = 1; i <= k1; i++)
        {
            v1.push_back(v[i].second);
        }
        for (int i = n; i >= n - k2 + 1; i--)
        {
            v2.push_back(v[i].second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        cout << "Case " << t << endl;
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
        cout << endl;
    }

    system("pause");
}