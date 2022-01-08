#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EArithmeticNumber {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        vector<string> options;
        for (int numOfDigits = 1; numOfDigits <= 18; ++numOfDigits) {
            for (int start = 1; start <= 9; ++start) {

                for (int d = 0; d <= 9; ++d) {
                    string option = to_string(start);
                    int cur = start;
                    while (option.size() < numOfDigits){
                        if (cur + d < 10) {
                            option.append(to_string(cur + d));
                            cur += d;
                        }else {
                            break;
                        }
                    }
                    if (option.size() == numOfDigits)
                        options.push_back(option);
                }


                for (int d = 0; d <= 9; ++d) {
                    string option = to_string(start);
                    int cur = start;
                    while (option.size() < numOfDigits){
                        if (cur - d >= 0) {
                            option.append(to_string(cur - d));
                            cur -= d;
                        }else {
                            break;
                        }
                    }
                    if (option.size() == numOfDigits)
                        options.push_back(option);
                }


            }
        }

        sort( options.begin(), options.end() );
        options.erase( unique( options.begin(), options.end() ), options.end() );

        ll n;
        cin >> n;
        ll d = LLONG_MAX / 2;
        ll ans;
        for (auto & option : options) {
            ll x = stoll(option);
            if (x >= n && x - n < d){
                d = x - n;
                ans = x;
            }
        }

        cout << ans << endl;
	}

};
