#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class EPokrivai {
public:
    int dfs(vector<vector<int>>& edges,int color,int vertex, vector<bool>& used, vector<int>& colors){
        used[vertex] = true;
        colors[vertex] = color;

        for (int i = 0; i < edges[vertex].size(); ++i) {
            int to = edges[vertex][i];
            if (!used[to]){
                dfs(edges,1 - color,to,used,colors);
            }
        }
    }
    void run(std::istream& cin, std::ostream& cout){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> edges(n + 1);
        vector<bool> used(n + 1);
        vector<int> colors(n + 1);
        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            edges[x].emplace_back(y);
            edges[y].emplace_back(x);
        }
        dfs(edges,1,1,used,colors);

        int x = 0;
        int y = 0;
        for (int i = 1; i <= n; ++i) {
            if (colors[i] == 1){
                x++;
            } else{
                y++;
            }
        }

        if (x <= n / 2){
            cout << x << endl;
            for (int i = 1; i <= n; ++i) {
                if (colors[i] == 1){
                    cout << i  <<" ";
                }
            }
        }else {
            cout << y << endl;
            for (int i = 1; i <= n; ++i) {
                if (colors[i] == 0){
                    cout << i  <<" ";
                }
            }
        }
        cout << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int q; cin >> q; while (q--) run(cin,cout);
    }
};
