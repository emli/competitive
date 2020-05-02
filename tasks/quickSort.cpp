#include <iostream>
#include <vector>
using namespace std;

class quickSort {
public:
    int partition(vector<int> &a,int left,int right){
        int i = left - 1;
        int pivot = a[right];
        for (int j = left; j < right; ++j) {
            if (a[j] <= pivot){
                i++;
                swap(a[i],a[j]);
            }
        }
        swap(a[right],a[i + 1]);
        return (i + 1);
    }
    void sort(vector<int> &a,int left,int right){
        if (left < right){
            int p = partition(a,left,right);
            sort(a,left,p - 1);
            sort(a,p + 1,right);
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a,0,n - 1);

        for (int i = 0; i < n; ++i) {
            cout << a[i] << '\n';
        }
	}
};
