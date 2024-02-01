#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<int> v;
    int i = 1;
    while(true){
        if(i*(i+1)/2 <= 1000){
            v.push_back(i*(i+1)/2);
            i++;
        }else{
            break;
        }
    }

    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        bool f = false;
        for(int i = 0; i<v.size(); i++){
            for(int j = 0; j<v.size(); j++){
                for(int k = 0; k<v.size(); k++){
                    if(v[i] + v[j] + v[k] == a){
                        cout << 1 << "\n";
                        f = true;
                        break;
                    }
                }
                if(f){
                    break;
                }
            }
            if(f){
                break;
            }
        }
        if(f == false){
            cout << 0 << "\n";
        }
    }
}