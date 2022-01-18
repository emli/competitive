#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BInternetAdres {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        string ans;
        int start = 0;
        if (s.starts_with("http")){
            ans.append("http://");
            start = 4;
        }else {
            ans.append("ftp://");
            start = 3;
        }

        int pos = s.rfind("ru");

        string domen = s.substr(start, pos - start);

        ans.append(domen + ".ru");

        string context = s.substr(pos + 2);

        if (!context.empty())
            ans.append( "/" + context);
        else
            ans.append( context);

        cout << ans << endl;
	}
};
