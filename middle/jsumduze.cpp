#include <string>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    int result[1001];
    cin >> T;
    while (T--)
    {
        string a,b;
        cin >> a >> b;
        int la = a.length() - 1;
        int lb = b.length() - 1;

        int overload = 0;
        int i = 0;
        while (la >= 0 && lb >= 0) {
            int t = static_cast<int>(a[la]) + static_cast<int>(b[lb]) - 96 + overload;
            overload = 0;
            if (t >= 10) {
                t %= 10;
                overload = 1;
            }
            result[i] = t;
            ++i;
            --la;
            --lb;
        }
        while (la >= 0) {
            result[i] = static_cast<int>(a[la]) - 48 + overload;
            overload = 0;
            if (result[i] >= 10) {
                result[i] %= 10;
                overload = 1;
            }
            ++i;
            la--;
        }
        while (lb >= 0) {
            result[i] = static_cast<int>(b[lb]) - 48 + overload;
            overload = 0;
            if (result[i] >= 10) {
                result[i] %= 10;
                overload = 1;
            }
            ++i;
            lb--;
        }
        if (overload == 1)
            result[i++] = overload;
        for (i=i-1;i>=0;--i)
        {
            cout << result[i];
        }
        cout << '\n';
    }
    return 0;
}
