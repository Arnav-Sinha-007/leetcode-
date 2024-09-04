class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int i=0;
        int j=0;
        int sre=nums.size();
        for(int i=1;i<sre;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
                                
            }
        }
        return j+1;
        
    }
};