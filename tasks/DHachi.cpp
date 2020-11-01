#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DHachi {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;
        cin >> s;



        unordered_map<int,int> map;

        for(char x : s){
            map[x - '0']++;
        }

        if (s.size() < 10){

            sort(all(s));

            do {
                if (stoi(s) % 8 == 0){
                    cout << "Yes" << endl;
                    return;
                }
            } while (next_permutation(all(s)));
            cout << "No" << endl;
            return;
        }
        for(int i = 999; i >= 0; i--){
            if ( i % 8 == 0){
                int x = i / 100;
                int y = (i / 10) % 10;
                int z = (i % 10);


                map[x]--;
                map[y]--;
                map[z]--;


                if ((map[x] >= 0 ) && (map[y] >= 0 ) && (map[z] >= 0)){

                    cout << "Yes" << endl;
                    return;
                }

                map[x]++;
                map[y]++;
                map[z]++;

            }
        }
        cout << "No" << endl;
	}
};
