class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;

        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                int water = min(height[i], height[j]) * (j - i);
                ans = max(ans, water);
            }
        }

        return ans;
    }
};
