#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class Pair{
public:
    int left,right;
    Pair(int left, int right) : left(left), right(right) {}
};
class CManySegments {
public:
    static bool intersect(Pair a,Pair b){
        if (b.left <= a.left && a.left <= b.right){
            return true;
        }
        if (b.left <= a.right && a.right <= b.right){
            return true;
        }
        return false;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;

        cin >> n;

        vector<Pair> pairs;
        for (int i = 0; i < n; ++i) {
            int t, left,right;
            cin >> t >> left >> right;

            if(t == 1){
                pairs.emplace_back(left,right);
            }else if (t == 2){
                pairs.emplace_back(left,right - 1);
            }else if (t == 3){
                pairs.emplace_back(left + 1,right);
            }else {
                pairs.emplace_back(left + 1,right - 1);
            }
        }

        int ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (intersect(pairs[i],pairs[j])){
                    ans++;
                }
            }
        }

        cout << ans << endl;

	}
};
