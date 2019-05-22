#include <iostream>
#include <vector>
using namespace std;

int num3,num5;
class yandexC {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k,n;

        cin >> k >> n;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x % 3 == 0 && x % 5 == 0)
                continue;
            if (x % 3 == 0){
                num3++;
            }
            if (x % 5 == 0){
                num5++;
            }
            if (num3 == k){
                cout << "Petya" << endl;
                return;
            }
            if (num5 == k){
                cout << "Vasya" << endl;
                return;
            }
        }

        if(num5 > num3){
            cout << "Vasya" << endl;
        }else if (num3 > num5){
            cout << "Petya" << endl;
        }else {
            cout << "Draw" << endl;
        }
    }
};
