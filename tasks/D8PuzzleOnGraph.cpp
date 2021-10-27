#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

class D8PuzzleOnGraph {
public:
    static void solve(std::istream &cin, std::ostream &cout) {
        int m;

        cin >> m;

        vector<int> g[10];

        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int p;
        string s = "999999999";
        for (int i = 1; i <= 8; i++) {
            cin >> p;
            s[p - 1] = i + '0';
        }

        queue<string> queue;
        unordered_map<string, int> map;
        queue.push(s);
        map[s] = 0;


        while (!queue.empty()) {
            string front = queue.front();
            queue.pop();

            int v = -1;
            for (int i = 0; i < front.size(); i++) {
                if (front[i] == '9') {
                    v = i;
                }
            }

            for (int i = 0; i < g[v].size(); ++i) {
                string tmp = front;
                swap(tmp[v], tmp[g[v][i]]);

                if (map.count(tmp)) {
                    continue;
                }

                map[tmp] = map[front] + 1;
                queue.push(tmp);
            }
        }

        if (map.count("123456789") == 0) {
            cout << -1 << endl;
        } else {
            cout << map["123456789"] << endl;
        }

    }
};
