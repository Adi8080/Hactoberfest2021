/**
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
**/

class Solution {
    public void nextPermutation(int[] nums) {
        int i;
        for(i = nums.length - 2; i>=0; i--) {
            if(nums[i] < nums[i +1])
                break;
        }
        
        if(i == -1) {
            i =0;
            int len = nums.length -1;
            while(i < len) {
                int temp = nums[i];
                nums[i] = nums[len];
                nums[len] = temp;
                i++;len--;
            }
            return;
        }
        
        int temp = i+1;
        for(int m = i + 2; m < nums.length; m++) {
            if(nums[i] < nums[m] && nums[m] < nums[temp])
                temp = m;
        }
        
        int hold = nums[temp];
        nums[temp] = nums[i];
        nums[i] = hold;
        // System.out.println(nums[0]+ "" +nums[1] + nums[2] + "");
        Arrays.sort(nums, i+1, nums.length);
    }
}
