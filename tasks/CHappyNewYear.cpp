#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CHappyNewYear {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n;
        string ans;
        cin >> n;
        while (n > 0){
            if (n % 2 == 0){
                ans.push_back('0');
            }else {
                ans.push_back('2');
            }
            n /= 2;
        }
        reverse(all(ans));
        cout << ans << endl;
	}
};

