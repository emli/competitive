#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
class CMarks {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,k;

        cin >> n >> k;

        vector<ll> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }



        for(int i = k; i < n; i++){
            if (a[i] > a[i -k ]){
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }




	}
};
