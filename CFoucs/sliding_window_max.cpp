class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        list<int> l;
        int i = 0;
        int j = 0;
        if (k > nums.size()) // edge case
        {

            return ans;
        }
        while (j < nums.size())
        {
            while (l.size() > 0 && l.back() < nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);

            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                ans.push_back(l.front());
                if (l.front() == nums[i])
                { // if 1st element in window is maximum then pop that out after saving it in the result
                    l.pop_front();
                }
                i++, j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        unordered_map<char, int> mp;
        int i = 0, j = 0, maxi = -1;
        while (j < s.length())
        {
            mp[s[j]]++;
            if (mp.size() < k)
            {
                j++;
            }
            else if (mp.size() == k)
            {
                maxi = max(maxi, j - i + 1);
                j++;
            }
            else if (mp.size() > k)
            {
                while (mp.size() > k)
                {
                    mp[s[i]]--;
                    if (mp[s[i]] == 0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends