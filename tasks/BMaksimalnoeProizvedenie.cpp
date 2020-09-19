/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author emli
 */


#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define all(x) x.begin(),x.end()
class BMaksimalnoeProizvedenie {
public:
    void run(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;
        vector<ll> a(n),b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        ll ans = ll(-1e18);
        for (int i = 0; i <= 5; ++i) {
            ll product = 1;

            int j = 5 - i;
            int lpos = 0;
            int lcount = 0;
            int take = 0;

            while (lcount < i){
                product *= a[lpos++];
                lcount++;
                take++;
            }

            lpos = 0;
            lcount = 0;

            while (lcount < j){
                product *= b[lpos++];
                lcount++;
                take++;
            }


            if (ans == -1){
                ans = product;
            }else {
                ans = max(ans, product);
            }

        }

        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);


        int t;
        cin >> t;

        while (t--){
            run(cin,cout);
        }

    }
};

