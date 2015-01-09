#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map> // hash map
#include <utility>
#include <vector>

#define DEBUG(x) do { cout << #x << " = " << x << '\n';}while(0)

#define lli long long int

unsigned lli gcd(unsigned lli a, unsigned lli b)
{
    unsigned lli c;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

using namespace std;

unsigned lli n, m, a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> m;
        cin >> a;
        for (int i=1;i<m;i++)
        {
            cin >> b;
            a = a/gcd(a,b)*b;
        }
        cout << a << '\n';
    }
    return 0;
}
