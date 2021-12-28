#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};

vector<int> intersection(pair<int,int> a, pair<int,int> b){
    int start = max(a.first,b.first);
    int end   = min(a.second,b.second);

    if (start <= end){
        return {start,end};
    }
    return {};
}
class AMatematicheskayaZadacha {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<pair<int,int>> a;

        for (int i = 0; i < n; ++i) {
            int x,y;
            cin >> x >> y;
            a.emplace_back(x,y);
        }

        ranges :: sort(a);


        pair<int,int> left = a[0];

        for (int i = 1; i < n; ++i) {
            if (!intersection(left,a[i]).empty()){
                left.first = intersection(left,a[i])[0];
                left.second = intersection(left,a[i])[1];
            }else {
                break;
            }
        }

        pair<int,int> right = a[n - 1];


        for (int i = n - 2; i >= 0; --i) {
            if (!intersection(right,a[i]).empty()){
                right.first = intersection(right,a[i])[0];
                right.second = intersection(right,a[i])[1];
            }else {
                break;
            }
        }

        if (n > 1 && right.first - left.second  > 0) {
            cout << right.first - left.second << endl;
        }else {
            cout << 0 << endl;
        }
    }
};
