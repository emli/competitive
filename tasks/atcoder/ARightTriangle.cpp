#include <bits/stdc++.h>
#include <spcppl/define.h>
using namespace std;

class ARightTriangle {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b,c;
        cin >> a >> b >> c;
        cout << (a * b) / 2 << endl; 
	}
};
