#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DIgraVKruge {
public:
    void run(std::istream& cin, std::ostream& cout) {
        ll d,k;
        cin >> d >> k;

        ll res = sqrt(d * d / (2 * k * k));

        if ((res * res +  (res+1) * (res+1)) * k * k <= d * d)
            cout << "Ashish" << endl;
        else
            cout << "Utkarsh" << endl;
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
//from math import sqrt, floor
//
//for cnt in range(int(input())):
//        d, k = map(int, input().split())
//res = int(sqrt((d*d) / (2*k*k)))
//
//# print(res)
//if (res * res +  (res+1) * (res+1)) * k * k <= d * d:
//print('Ashish')
//else:
//print("Utkarsh")