class Solution {
public:
    /*
    Naive approach: use slightly improved O(n^2) brute force search
    Outcome: Runtime Exceeded as expected
    */
    int maxArea(vector<int>& height) {
        int max = 0;
        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                // if(i == j) {
                //     continue;
                // }
                int h = 0;
                if(height[i] > height[j]) {
                    h = height[j];
                } else {
                    h = height[i];
                }
                int area = h * (j - i);
                if(area > max) {
                    max = area;
                }
            }
        }
        return max;
    }
}
*/
