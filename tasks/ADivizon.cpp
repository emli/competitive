#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ADivizon {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        if (n <= 1399){
            cout << "Division 4\n";
        }else if (n <= 1599){
            cout << "Division 3\n";
        }else if (n <= 1899){
            cout << "Division 2\n";
        }else {
            cout << "Division 1\n";
        }

    }
};
