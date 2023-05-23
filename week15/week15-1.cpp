class KthLargest {
public:
    int k2;
    vector<int> all;
    KthLargest(int k, vector<int>& nums) {
        k2 = k;
        for(int i=0;i<nums.size();i++){
            all.push_back(nums[i]);
        }
    }

    int add(int val) {
        all.push_back(val);
        sort(all.begin(), all.end());
        return all[ all.size() - k2 ];
    }
};
