int countHillValley(vector& nums) {
int count=0, n=nums.size();
for(int i=1;i<n-1;i++)
{
if(nums[i]==nums[i-1]) continue;
int j=i-1,k=i+1;

        while(k<n && nums[i]==nums[k]) k++;

        if(k>=n) continue;
        if(nums[i]>nums[j] && nums[i]>nums[k]) count++;
        else if(nums[i]<nums[j] && nums[i]<nums[k]) count++;       
    }
    return count;
}