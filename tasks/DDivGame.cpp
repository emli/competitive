#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){
    for(ll i = 2; i * i <= n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}
class DDivGame {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n;
        cin >> n;
        if (isPrime(n)){
            cout << 1 << endl;
            return;
        }
        ll y = sqrt(n);
        int ans = 0;

        ll prime = 2;


        while (n > 1 && prime <= y){
            if (n % prime == 0){
                n = n / prime;
                ans++;
            }
            prime++;
        }
        if (isPrime(n) && n <= y){
            ans++;
        }
        cout << ans << endl;


	}
};
