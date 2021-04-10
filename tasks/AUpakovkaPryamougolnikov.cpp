#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) x.begin(),(x).end()
const ll dx[] = {1, -1, 0, 0};
const ll dy[] = {0, 0, 1, -1};

class AUpakovkaPryamougolnikov {
public:
    static void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll w, h, n;
        cin >> w >> h >> n;

        ll left =  0   ; // (left / w) * (left / h) < n
        ll right = 1e18; // (right / w) * (right / h) >= n

        while (left + 1 < right){
            ll middle = left + ((right - left) / 2);
            double x = double (middle / w ) * double(middle / h);
            if (x < double(n)){
                left = middle;
            }else {
                right = middle;
            }
        }

        cout << right << endl;
    }
};
