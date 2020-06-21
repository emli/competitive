#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CSotsialnayaDistantsiya {
public:
    bool sumK(int l,int r,vector<int> &prefix){
        int leftSum = 0;
        int rightSum = 0;
        if (l < 0){
            leftSum = 0;
        }else {
            leftSum = prefix[l];
        }
        if (r >= prefix.size()){
            rightSum = prefix.back();
        }else {
            rightSum = prefix[r];
        }
        return rightSum - leftSum == 0;
    }
    void run(std::istream& cin, std::ostream& cout){
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> prefix;
        int sum = 0;
        for (char i : s) {
            if (i == '1'){
                sum++;
            }
            prefix.push_back(sum);
        }

        int ans = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0' && sumK(i - k - 1,i,prefix)  && sumK(i  ,i +k,prefix)){
                ans++;
                i += k;
            }
        }
        cout << ans << endl;
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
