#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ALeshaISlomaniiKontest {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        vector<string> x = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

        int ans = 0;
        for(string ss : x){
            int x = s.find(ss);
            int y = s.rfind(ss);
            if (x != -1 && x == y){
                ans++;
            }
            if (x != y){
                cout << "NO" << endl;
                return;
            }
        }
        if (ans == 1){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
