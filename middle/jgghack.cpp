#include <string>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    while (cin >> a) {
        string r;
        for (int i =0;i<a.length();i+=2) {
            r.push_back(static_cast<char>(static_cast<int>(a[i])-65 + (static_cast<int>(a[i+1])-65)*16));
        }
        cout << r << '\n';
    }
    return 0;
}
