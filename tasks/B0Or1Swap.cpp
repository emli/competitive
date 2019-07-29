#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class B0Or1Swap {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);


        int n;
        cin >> n;
        vector<int> a(n),b;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        b = a;

        sort(a.begin(),a.end());

        int k = 0;
        for(int i = 0; i < n; i++){
            if (a[i] != b[i]){
                k++;
            }
        }
        if (k == 2 || k == 0){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
