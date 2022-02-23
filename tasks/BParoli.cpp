#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BParoli {
public:
    static bool cmp(string &a,string &b){
        return a.size() < b.size();
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        vector<string> a(n);
        unordered_map<int,int> count;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[(int)a[i].size()]++;
        }
        string password;
        cin >> password;

        sort(all(a), cmp);

        int worst = 0;
        int best = 0;

        vector<int> prefix(password.size() + 1);
        for(int i = 1; i <= password.size(); i++){
            prefix[i] += prefix[i - 1] + count[i];
        }

        cout << prefix[password.size() - 1] + ((prefix[password.size() - 1] ) / k) * 5 + 1 << " " << prefix[password.size() ] + ((prefix[password.size() ] - 1) / (k)) * 5 << endl;
    }
};
