#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MedianMinimization {
public:
    static int getMedian(vector<int> &a){
        if (a.size() % 2 == 0){
            return a[a.size() / 2 - 1];
        }
        return a[a.size() / 2];
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        int left = 0;
        int right = n - 1;

        vector<int> x,y;

        int t = 0;
        while (left < right){
            if (t % 2 == 0) {
                x.push_back(a[left]);
                left++;
                x.push_back(a[right]);
                right--;
            } else {
                y.push_back(a[left]);
                left++;
                y.push_back(a[right]);
                right--;
            }
            t++;
        }

        if (left == right){
            if (t % 2 == 0) {
                x.push_back(a[left]);
            } else {
                y.push_back(a[left]);
            }
        }

        sort(all(x));
        sort(all(y));


        cout << abs(getMedian(x) - getMedian(y)) << endl;
	}
};
