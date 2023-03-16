#include <bits/stdc++.h>
using namespace std;
// 1,1,2,4 -> {-1,-1,-1,-1}
// 7,8,1,4 -> {-1,-1,8,8}; important test case
// 4,3,2,1 -> -1,4,3,2,
vector<int> nextSmaller() {
    vector<int> arr = {4,3,2,1};
    stack<int> s;
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i<n; i++) {
        // base-case when stack is empty
        if(s.empty() == true) {
            ans.push_back(-1);
            s.push(arr[i]);
        }
        // all other cases when stack has something
        else {
            // Here we're looking for greater element for an index 'i'
           while(s.empty() == false) {
            if(s.top() > arr[i]) {
                ans.push_back(s.top());
                s.push(arr[i]);
                break;
            }

            else {
                s.pop();
            }
        } 
        // case where while loop is exhaused 
        // it means element not found so we put '-1' for that
        //index
        if(s.empty() == true) {
            ans.push_back(-1);
            s.push(arr[i]);
        }
    }
        
}
    return ans;
}

int main() {
    vector<int> ans = nextSmaller();
    for(auto i:ans) cout << i << " " ;  
    cout << endl; 
    return 0;
}