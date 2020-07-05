#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

class Funktsiya2 {

public:
    ll f(int a,int b,int c,vector<vector<vector<ll>>> &dp){
        if (a > 20 || b > 20 || c > 20){
            return f(20,20,20,dp);
        }
        if (a <= 0 || b <= 0 || c <= 0){
            return 1;
        }
        ll &memo = dp[a][b][c];

        if (memo != -1){
            return memo;
        }


        if (a < b && b < c){
            return memo = f(a,b,c - 1,dp) + f(a,b - 1,c - 1,dp) - f(a,b - 1,c,dp);
        }
        return memo = f(a - 1,b,c,dp) + f(a - 1,b - 1,c ,dp) + f(a - 1,b,c - 1,dp) - f(a - 1,b - 1,c - 1,dp);
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b,c;
        cin >> a >> b >> c;

        vector<vector<vector<ll>>> dp(25 , vector<vector<ll>>(25, vector<ll>(25,-1)));

        cout << f(a,b,c,dp) << endl;
	}
};
