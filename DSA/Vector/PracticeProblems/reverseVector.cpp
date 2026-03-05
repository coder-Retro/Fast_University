#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void reverseVector(vector<int>& nums)
    {
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            nums[i] = nums[i] ^ nums[j];
            nums[j] = nums[i] ^ nums[j];
            nums[i] = nums[i] ^ nums[j];
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums={1,2,3,4,5};
    s.reverseVector(nums);
    for(int i:nums)
        cout<<i<<" ";
    return 0;
}