#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class RUKiddingMrFeynman {
public:
	static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        double x;
        double eps = 0.0001;
        while (cin  >> x){
            if (x == 0){
                break;
            }
            double l = 1;
            double r = x;

            while (r - l > eps){
                double m = (l + r) / 2.0;

                if (pow(m,3.0) - x < eps){
                    l = m;
                }else {
                    r = m;
                }
            }

            cout << fixed << setprecision(4) << l << endl;
        }
	}
};
