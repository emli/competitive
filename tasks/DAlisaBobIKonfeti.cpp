#include <bits/stdc++.h>
using namespace std;

class DAlisaBobIKonfeti {
public:

    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<bool> used(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;

        int ans = 0;
        int sumA = 0;
        int sumB = 0;
        while(l <= r){
            while(sumA <= sumB){
                sumA += a[l];
                used[l] = true;
                ans++;
                l++;
            }
            while(sumB <= sumA){
                sumB += a[r];
                used[r] = true;
                r--;
                ans++;
            }
        }

        cout << ans << " " << sumA << " " << sumB << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
