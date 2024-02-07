#include <iostream>
#include <queue>
#include <algorithm>
#include<cmath>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;

        int mid;
        cin >> mid;
        ans.push_back(mid);
        priority_queue<int> maxq;
        priority_queue<int, vector<int>, greater<>> minq;
        for(int i = 0; i<n - 1; i++){
            int tmp;
            cin >> tmp;
            if(i%2 == 0){
                if(tmp<mid){
                    minq.push(mid);
                    maxq.push(tmp);
                }else{
                    minq.push(tmp);
                    maxq.push(mid);
                }
            }
            else{
                if(maxq.top()<tmp&&tmp<minq.top()){
                    mid = tmp;
                }else if(minq.top()<=tmp){
                    minq.push(tmp);
                    mid = minq.top();
                    minq.pop();
                }else{
                    maxq.push(tmp);
                    mid = maxq.top();
                    maxq.pop();
                }
                ans.push_back(mid);
            }
        }

        cout << ans.size() << '\n';
        for(int i = 0; i< ceil(ans.size()/10.0); i++){
            for(int j = 0; j<10; j++){
                if(10*i+j==ans.size()){
                    break;
                }
                cout << ans[10*i+j] << " ";
            }
            cout << "\n";
        }
    }
}