#include <bits/stdc++.h>
using namespace std;

class DPokupkaLopat {
public:
    void run(std::istream& cin, std::ostream& cout){
       int a,b;
       cin >> a >> b;
       if (b >= a){
           cout << 1 << endl;
           return;
       }

       int ans = INT_MAX;

       for(int i = 1; i * i <= a; i++){
           if (a % i == 0){
               int x = a / i;
               if (x <= b) {
                   ans = min(ans, i);
               }

               int y = i;
               if (y <= b) {
                   ans = min(ans, a / i);
               }
           }
       }
       if (ans == INT_MAX)
            cout << a << endl;
       else
           cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            run(cin,cout);
        }
    }
};
