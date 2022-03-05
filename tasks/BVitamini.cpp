#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BVitamini {
public:
    static int get(string a,string b,unordered_map<string,int> &cheapest){
        if (!cheapest.contains(a) || !cheapest.contains(b)){
            return INT_MAX;
        }
        return cheapest[a] + cheapest[b];
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        unordered_map<string,int> cheapest;

        for (int i = 0; i < n; ++i) {
            int x;
            string s;
            cin >> x >> s;

            ranges :: sort(s);
            if (cheapest.contains(s)){
                cheapest[s] = min(cheapest[s],x);
            }else {
                cheapest[s] = x;
            }
        }

        vector<int> options;

        if (cheapest.contains("A") && cheapest.contains("B") && cheapest.contains("C"))
            options.push_back(cheapest["A"] + cheapest["B"] + cheapest["C"]);
        if (cheapest.contains("ABC"))
            options.push_back(cheapest["ABC"]);

        options.push_back(get("A","BC",cheapest));
        options.push_back(get("AB","C",cheapest));
        options.push_back(get("AC","B",cheapest));
        options.push_back(get("AB","C",cheapest));
        options.push_back(get("AB","BC",cheapest));
        options.push_back(get("AC","BC",cheapest));
        options.push_back(get("AC","AB",cheapest));

        if (*min_element(all(options)) == INT_MAX){
            cout << -1 << endl;
            return;
        }
        cout << *min_element(all(options)) << endl;
	}
};


