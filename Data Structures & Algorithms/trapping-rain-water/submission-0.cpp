class Solution {
public:
    int trap(vector<int>& height) {
        // dont understand this yet
        int num_bar = height.size();

        int left = 0; 
        int right = num_bar - 1;
        int left_max = 0;
        int right_max = 0;
        int total_area = 0;

        while (left < right){
            if (height[left] < height[right]){
                if (height[left] >= left_max){
                    left_max = height[left];
                } else {
                    total_area += left_max - height[left];
                }
                left ++;
            }
            else{
                if (height[right] >= right_max){
                    right_max = height[right];
                } else {
                    total_area += right_max - height[right];
                }
                right --;
            } 
        }

        return total_area;
    }
};
