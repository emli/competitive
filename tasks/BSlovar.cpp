#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSlovar {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        unordered_map<string,int> order;

        int c = 1;
        for (char i = 'a'; i <= 'z'; ++i) {
            for (int j = 'a'; j <= 'z'; ++j) {
                if (i != j){
                    string s;
                    s.push_back(i);
                    s.push_back(j);
                    order[s] = c++;
                }
            }
        }

        int tests;
        cin >> tests;

        for (int i = 0; i < tests; ++i) {
            string x;
            cin >> x;
            cout << order[x] << endl;
        }
	}
};
