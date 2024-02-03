#include <iostream>
#include <queue>
#include <algorithm>
#include<limits>
#include<cmath>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    unsigned long long n, attack;
    cin >> n >> attack;
    unsigned long long begin = 0, end = numeric_limits<unsigned long long>::max();
    vector<tuple<int, unsigned long long, unsigned long long>> room(n);
    for(auto &i : room){
        int type, a, b;
        cin >> type >> a >>b;
        i = {type, a, b};
    }

    while(begin<=end){
        unsigned long long atk = attack;
        unsigned long long mid = (begin+ end)/2;
        long long hp = mid;
        bool death = false;
        for(auto [type, a, b]: room){
            if(type == 1){
                hp-=a * max((int)(ceil((double)b/atk) - 1), 0);
                if(hp<=0){
                    death = true;
                }
            }else{
                atk+=a;
                hp=min(hp+b, mid);
            }
            if(death){
                break;
            }
        }

        if(death){
            begin = mid+1;
        }else{
            end = mid-1;
        }
    }

    cout << begin;
}