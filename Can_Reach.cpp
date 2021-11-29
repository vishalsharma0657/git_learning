#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k;
        cin >> a >> b >> k;
        long long int s = abs(a);
        long long int s1 = abs(b);
        if (s % k == 0 && s1 % k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}