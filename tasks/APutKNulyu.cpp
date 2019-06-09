#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> a) {
        int cur = 0;
        int l = a.size();
        while(cur < l){
            if (a[cur] == 0){
                cur++;
            }else if (cur != a[cur] - 1 && a[cur] == a[a[cur] - 1]){
                a[cur] = 0;
                cur++;
            }else if (cur + 1 == a[cur]){
                cur++;
            }else {
                swap(a[cur],a[a[cur] - 1]);
            }
        }
        return a;
    }
};






class APutKNulyu {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        auto *solution = new Solution();
        solution->findDisappearedNumbers({4,3,2,7,8,2,3,1});
	}
};
