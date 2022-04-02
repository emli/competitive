#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DigitSumParities {
public:
    static int digitSum(int n){
        if (n < 10){
            return n;
        }
        return digitSum(n / 10) + n % 10;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        int n1 = n + 1;

        while (digitSum(n) % 2 == digitSum(n1) % 2){
            n1++;
        }
        cout << n1 << endl;
	}
};
