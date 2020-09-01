#include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define sz(s) (int)s.size()
#define all(s) s.begin(), s.end()

using namespace std;

const int N = 505;

int n, m, x;

multiset <int> a[N + N], b[N + N];

main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf("%d", &x);
            a[i + j].insert(x);
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf("%d", &x);
            b[i + j].insert(x);
        }
    }
    for (int i = 1; i <= n + m; i++){
        if (a[i] != b[i]){
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}