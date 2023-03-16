#include <bits/stdc++.h>
using namespace std;
// 1,1,2,4 -> {-1,-1,-1,-1}
// 7,8,1,4 -> 1,1,-1,-1; important test case
// 4,3,2,1 -> 3,2,1,-1
vector<int> nextSmaller() {
    vector<int> arr = {4,3,2,1};
    stack<int> s;
    int n = arr.size()-1;
    vector<int> ans;
    for(int i = n; i>=0; i--) {
        if(s.empty() == true) {
            ans.push_back(-1);
            s.push(arr[i]);
        }
        else {
           while(s.empty() == false) {
            if(s.top() < arr[i]) {
                ans.push_back(s.top());
                s.push(arr[i]);
                break;
            }
            else {
                s.pop();
            }
        } 
        if(s.empty() == true) {
            ans.push_back(-1);
            s.push(arr[i]);
        }
    }
        
}
    reverse(ans.begin(), ans.end()); 
    return ans;
}

int main() {
    vector<int> ans = nextSmaller();
    for(auto i:ans) cout << i << " " ;  
    cout << endl; 
    return 0;
}