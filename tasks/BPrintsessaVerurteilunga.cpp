#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};


class BPrintsessaVerurteilunga {
public:
    static string getFromVector(vector<int> &gen) {
        string ans;
        for (int i : gen) {
            ans.push_back(char(i + 'a'));
        }

        ranges :: reverse(ans);
        return ans;
    }

    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;
        vector<item> items;
        items.emplace_back(1,1,1,1);

        vector<int> gen = {0};

        while (true){
          string ss = getFromVector(gen);
          if (s.find(ss) == -1){
              cout << ss << endl;
              return;
          }

          gen[0]++;
          int len = (int)gen.size();
          for (int i = 0; i < len; ++i) {
                if (gen[i] == 26){
                    gen[i] = 0;
                    if (i + 1 < len){
                        gen[i + 1]++;
                    }else {
                        gen.push_back(0);
                    }
                }
          }
        }
	}
};
