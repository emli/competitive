#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BTopologiyaSeti {
public:
    static bool check(vector<int> &countVertex,int n){
        for (int i = 1; i <= n; ++i) {
            if (countVertex[i] > 2){
                return false;
            }
        }
        return true;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<int> countVertex(n + 1);

        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            countVertex[x]++;
            countVertex[y]++;
        }


        if (count(all(countVertex),2) == n){
            cout << "ring topology\n";
        }else if (count(all(countVertex),2) == n - 2 && check(countVertex,n)){
            cout << "bus topology\n";
        }else  if (count(all(countVertex),n - 1) == 1 && n - 1 == m){
            cout << "star topology\n";
        }else {
            cout << "unknown topology\n";
        }
	}
};
