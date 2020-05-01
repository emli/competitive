#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ASheepAndWolves {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int s,w;
        cin >> s >> w;

        if (w >= s){
            cout << "unsafe" << endl;
        }else {
            cout << "safe" << endl;
        }
	}
};
