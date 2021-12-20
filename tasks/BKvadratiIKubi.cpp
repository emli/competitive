#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BKvadratiIKubi {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int t;
        cin >> t;

        int i = 1;
        vector<int> v;
        while (i * i <= (int)1e9){
            i++;
            v.push_back(i * i);
        }

        i = 1;
        while (i * i * i <= (int)1e9){
            i++;
            v.push_back(i * i * i);
        }

        sort(all(v));
        v.erase( unique( v.begin(), v.end() ), v.end() );
        while (t--){
            int n;
            cin >> n;

            auto it = upper_bound(all(v),n);
            int index = it - v.begin();

            cout << index + 1 << endl;
        }
	}
};
