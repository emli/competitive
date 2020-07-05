#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class Treugolnik3 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int a,b,c;
        cin >> a >> b >> c;

        if (a < b+ c && b < a + c && c < a+ b){
            cout << "YES";
        } else{
            cout << "NO";
        }
	}
};
