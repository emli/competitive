#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FReordering {
public:
    int static factorial(int n) {
        int factorial = 1;
        for (int i = 2; i <= n; i++)
            factorial = factorial * i;
        return factorial;
    }

    int static nCr(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;
        map<char,int> d;
        for (int i = 0; i < s.size(); ++i) {
            d[s[i]]++;
        }

        int ans = 1;
        for (auto it = d.begin(); it != d.end(); it++)
        {
            for (int i = 0; i <= it->second; ++i) {
                ans *= nCr(it->second,i);
            }
        }
        cout << ans << endl;
	}
};
