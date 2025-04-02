class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (nums.size()<k){
            return 0;
        }
        double wind_sum = 0;
        for(int i=0; i<k; i++){
                wind_sum += nums[i];
        }

        double max_sum = wind_sum;

        for(int i=k; i<n; i++){
            wind_sum += nums[i]-nums[i-k];

            max_sum = max(wind_sum, max_sum);

            
        }

        return max_sum/k;
        
    }
};