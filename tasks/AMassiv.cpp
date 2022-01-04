#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AMassiv {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<bool> used(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int numOfNegative = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < 0){
                numOfNegative++;
            }
        }

        cout << 1 << " ";

        int i;
        for (i = 0; i < n; ++i) {
            if (a[i] < 0){
                cout << a[i] << endl;
                used[i] = true;
                break;
            }
        }

        int negative = 0;
        int positive = 0;
        for(i = 0; i < n; i++){
            if (!used[i]  && a[i] < 0){
                negative++;
            }
            if (!used[i] && a[i] > 0){
                positive++;
            }
        }

        if (negative >= 2){
            int tt = 0;
            cout << 2 << " ";
            for (i = 0; i < n; ++i) {
                if (!used[i] && a[i] < 0 && tt < 2){
                    cout << a[i] << " ";
                    used[i] = true;
                    tt++;
                }
            }
        }else {
            cout << 1 << " ";
            for (i = 0; i < n; ++i) {
                if (!used[i] && a[i] > 0){
                    cout << a[i] << " ";
                    used[i] = true;
                    break;
                }
            }
        }
        cout << endl;
        unsigned int x = count(all(used), false);

        cout << x << " ";

        for (int j = 0; j < n; ++j) {
            if (!used[j]){
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }

};
