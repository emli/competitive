#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class TaskA {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int tests;
        cin >> tests;

        vector<int> nums;
        int pos = 1;
        while (nums.size() < 1000){
            if (pos % 3 != 0 && pos % 10 != 3){
                nums.push_back(pos);
            }
            pos++;
        }
        while (tests--){
            int n;
            cin >> n;
            cout << nums[n - 1] << endl;
        }
	}
};
