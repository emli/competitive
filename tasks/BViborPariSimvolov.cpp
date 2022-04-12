#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BViborPariSimvolov {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        unordered_map<char,ll> map;

        for (char & ch : s) {
            map[ch]++;
        }

        ll sum = 0;

        for (char i = 'a'; i <= 'z'; ++i) {
            if (map.contains(i)){
                sum += map[i] * map[i];
            }
        }

        for (char i = 'A'; i <= 'Z'; ++i) {
            if (map.contains(i)){
                sum += map[i] * map[i];
            }
        }

        for (char i = '0'; i <= '9'; ++i) {
            if (map.contains(i)){
                sum += map[i] * map[i];
            }
        }

        cout << sum << endl;
	}
};
