// brute force approach:

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int el : nums) {
                if (el == val) 
                    freq++;
            }
            if (freq > n / 2)
                 return val;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums) << '\n';
    return 0;
}

// Efficient Approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin() , nums.end());
        // int n = nums.size();
        if (n == 0) return -1;

        std::sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};

// Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int freq = 0 , ans = 0;
        int n = nums.size();

        for (int i = 0 ; i < n ; i++){
            if (freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            } else {
                freq--;
            }
        }
        int count = 0;
        for (int  val : nums){
            if(val == ans){
                count ++;
            }
        }

        if (count > n/2){
            return ans;
        } else {
            return -1;
        }

        return ans;
    }
};
