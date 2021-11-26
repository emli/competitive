#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MagicalPlanks {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int b = 0;
        int w = 0;

        char last = 'z';
        for (char i : s) {
            if(i == 'B' && i != last){
                b++;
            }

            if(i == 'W' && i != last){
                w++;
            }
            last = i;
        }

        cout << min(w,b) << endl;
	}
};
