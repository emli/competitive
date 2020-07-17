#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class ATriPoparnikhMaksimuma {
public:
    void run(std::istream& cin, std::ostream& cout){
        int x,y,z;
        cin >> x >> y >> z;

        vector<int> v = {x - 1,x + 1,y - 1,y + 1,z - 1,z + 1,x,y,z};

        sort(v.begin(),v.end());

        for (int i = 0; i < v.size() - 2; ++i) {

            vector<int> p = {v[i],v[i + 1],v[i + 2]};
            sort(p.begin(),p.end());

            do{
                int a = p[i];
                int b = p[i + 1];
                int c = p[i + 2];

                if (x == max(a,b) && y == max(a,c) && z == max(b,c)) {
                    cout << "YES" << endl;
                    cout << a << " " << b << " " << c << endl;
                    return;
                }
            }while (next_permutation(p.begin(),p.end()));

        }
        cout << "NO" << endl;
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

