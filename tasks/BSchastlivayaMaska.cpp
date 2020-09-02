#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BSchastlivayaMaska {
public:
    int get(int x){
        string s = to_string(x);

        string t;
        for (char i : s) {
            if (i == '4' || i == '7'){
                t.push_back(i);
            }
        }
        if (t.empty()){
            return -1;
        }
        return stoi(t);
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int a,b;

        vector<int> numbers;
        cin >> a >> b;

        for (int i = a + 1; ; ++i) {
            if (get(i) == b){
                cout << i << endl;
                return;
            }
        }
	}
};
