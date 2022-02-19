#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
bool isPrime(int n){
    if (n == 2){
        return true;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0){
            return false;
        }
    }
    return false;
}
class DPrimeSumGame {
public:
    static void solve(std::istream& cin, std::ostream& cout) {

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        bool win = true;
        for (int i = a; i <= b; ++i) {
            for (int j = c; j <= d; ++j) {
                if (isPrime(i + j)){
                    win = false;
                }
            }
        }
        if (win){
            cout << "Aoki" << endl;
        }else {
            cout << "Takahashi" << endl;
        }
	}
};
