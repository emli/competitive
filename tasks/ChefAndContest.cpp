#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ChefAndContest {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x,y,p,q;

        cin >> x >> y >> p >> q;

        int first = x + p * 10;
        int second = y + q * 10;

        if (first < second){
            cout << "Chef" << endl;
        }else if (second < first){
            cout << "Chefina" << endl;
        }else {
            cout << "Draw" << endl;
        }
	}
};
