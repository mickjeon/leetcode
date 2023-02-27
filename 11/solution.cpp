class Solution {
public:
    /*
    Algorithm:
      Initialize two pointers(i, j), each at the other ends. 
      Increment i if height[i] < height[j]
      Decrement j otherwise
      Update max if found
    
    Runtime: O(n)
    */
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max = (j - i) * min(height[i], height[j]);
        // O(n) two pointer approach
        while(i < j) {
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
            int temp = (j - i) * min(height[i], height[j]);
            if(temp > max) {
                max = temp;
            }
        }
        return max;
    }
};
