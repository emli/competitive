#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BScenesFromAMemory {
public:
    static bool isSubsequence(string s, string t) {
        int l = 0;

        for(char i : t){
            if (l < s.length() && i == s[l]){
                l++;
            }
        }
        return l == s.length();
    }
    static bool isPrime(int n){
        for(int i = 2; i * i <=n; i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        ll tests;
        cin >> tests;


        while (tests--){
            int x;
            cin >> x;
            string s;
            cin >> s;
            for(int i = 1; i < 100; i++){

                if ((!isPrime(i) || i == 1) && isSubsequence(to_string(i),s)){
                    if (i < 10){
                        cout << 1 << endl;
                    }else {
                        cout << 2 << endl;
                    }
                    cout << i << endl;
                    break;
                }
            }
        }
	}
};
