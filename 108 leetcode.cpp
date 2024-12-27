class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
                if(nums.size() == 0) return NULL;
        
        return binaryST(nums, 0 , nums.size()-1);
    }
    
    TreeNode* binaryST(vector<int>&nums, int low , int high)
    {
        if( low > high)
            return NULL;
        
        int mid = low + (high-low)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node -> left = binaryST(nums, low, mid-1);
        node -> right = binaryST(nums, mid+1, high);
        
        return node;

    }
};
