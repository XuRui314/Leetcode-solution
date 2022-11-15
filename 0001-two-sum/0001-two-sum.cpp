class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> heap;
        for(int i = 0; i < nums.size(); i++){
            int required = target - nums[i];
            if(heap.count(required)) return {i, heap[required]};
            heap[nums[i]] = i;
        }
        return {};
    }
};