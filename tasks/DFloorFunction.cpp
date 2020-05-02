#include <bits/stdc++.h>
using namespace std;

class DFloorFunction {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);


        long long a,b,n;

        cin >> a >> b >> n;

        long long r = min(b- 1,n);

        cout << ( (a * r)  - (a * r) % b) / b << endl;


    }
};
