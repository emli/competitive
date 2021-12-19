#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BCaesarCipher {
public:
    static bool isSameGroup(string &a, string &b){
        if (a.size() != b.size()){
            return false;
        }
        set<int> set;


        for(int i = 0; i < a.size(); i++){
            if (set.size() > 1){
                return false;
            }
            if (a[i] - b[i] < 0){
                set.insert(a[i] - b[i] + 26);
            }else {
                set.insert(a[i] - b[i]);
            }
        }
        return set.size() == 1;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        string a,b;

        cin >> a >> b;

        if (isSameGroup(a,b)){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }


	}
};
