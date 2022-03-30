#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BinaryStringCost {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,x,y;
        string s;
        cin >> n >> x >> y >> s;

        bool one = any_of(all(s), [](char i){ return i == '1';});
        bool zero = any_of(all(s), [](char i){ return i == '0';});

        if (one && zero){
            cout << min(x,y) << endl;
        }else {
            cout << 0 << endl;
        }
    }
};
