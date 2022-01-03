#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BPravilnoePitanie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,a,b;
        cin >> n >> a >> b;

        for (int x = 0; x <= 1e7; ++x){
             if ((n - a * x) % b == 0){
                 ll y = (n - a * x) / b;

                 if (y >= 0 && a * x + b * y == n) {
                     cout << "YES" << endl;
                     cout << x << " " << y << endl;
                     return;
                 }
             }
        }

        cout << "NO" << endl;

	}
};
