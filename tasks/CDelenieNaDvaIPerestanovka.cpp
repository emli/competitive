#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CDelenieNaDvaIPerestanovka {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> setik;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            setik.insert(i + 1);
        }

        vector<int> used(n);
        for (int i = 0; i < n; ++i) {
            if (setik.contains(a[i])){
                setik.erase(a[i]);
                used[i] = true;
            }
        }

        for (int i = 0; i < n; ++i) {
            while (!used[i] && a[i] > 0){
                a[i] /= 2;
                if (setik.contains(a[i])){
                    setik.erase(a[i]);
                    used[i] = true;
                    break;
                }
            }
        }

        if (setik.empty()){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }


	}
};
