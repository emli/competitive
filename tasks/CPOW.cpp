#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CPOW {
public:
    static void run(std::istream& cin, std::ostream& cout, int a, int b){
        if (a > b){
            cout << ">" << endl;
        }else if (b > a){
            cout << "<" << endl;
        }else if (a == b) {
            cout << "=" << endl;
        }
    }
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        long long a,b,c;

        cin >> a >> b >> c;

        if (c % 2 == 0){
            c = 2;
        }else {
            c = 1;
        }

        if (pow(a,c) > pow(b,c)){
            cout << ">" << endl;
        }else if (pow(a,c) < pow(b,c)){
            cout << "<" << endl;
        }else {
            cout << "=" << endl;
        }
	}
};
