// Twoo sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans;
       unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++){
           if(mp.find(target-nums[i])!=mp.end()){
               ans.push_back(mp[target-nums[i]]);
               ans.push_back(i);
           }
           mp[nums[i]]=i;
       }
       return ans;
    }
};

// Add two number in linked list

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* curr = dummyNode;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            curr = curr->next;
        }
        return dummyNode->next;
    }
};

//swap value of two var with pointers



void swap(int **p1, int **p2) {
    int *temp = NULL;
    *temp = *p1;
    *p1 = *p2;
    *p2 = *temp;
}

int main() {
    int x = 5, y = 10;
    int *p1 = &x, *p2 = &y;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&p1, &p2);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
