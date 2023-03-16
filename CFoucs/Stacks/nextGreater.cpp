#include <bits/stdc++.h>
using namespace std;
// 1,1,2,4 -> 2,2,4,-1
// 7,8,1,4 -> 8,-1,4, -1; important test case
vector<int> nextGreater() {
    vector<int> arr = {7,8,1,4};
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
            if(s.top() > arr[i]) {
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
    vector<int> ans = nextGreater();
    for(auto i:ans) cout << i << " " ;  
    cout << endl; 
    return 0;
}

alternate solution
    stack<long long> s;
    vector<long long> result(arr.size(), -1); // Initialize result vector with -1

    for (int i = 0; i < arr.size(); i++) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            result[s.top()] = arr[i]; // Update result for top of stack
            s.pop();
        }
        s.push(i); // Push current element index onto the stack
    }

    return result;




// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// vector<int> nextGreaterElement(vector<int>& nums) {
//     stack<int> s;
//     vector<int> result(nums.size(), -1); // Initialize result vector with -1

//     for (int i = 0; i < nums.size(); i++) {
//         while (!s.empty() && nums[i] > nums[s.top()]) {
//             result[s.top()] = nums[i]; // Update result for top of stack
//             s.pop();
//         }
//         s.push(i); // Push current element index onto the stack
//     }

//     return result;
// }

// int main() {
//     vector<int> nums = {4, 5, 2, 25};
//     vector<int> result = nextGreaterElement(nums);

//     // Print the result
//     for (int i = 0; i < result.size(); i++) {
//         cout << nums[i] << " -> " << result[i] << endl;
//     }
    
//     return 0;
// }
