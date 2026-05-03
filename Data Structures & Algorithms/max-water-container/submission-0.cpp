class Solution {
public:
    int maxArea(vector<int>& heights) {
        int num = heights.size();
        int max_area = 0;
        if (num < 2) return max_area;

        int start = 0;
        int end = num-1;

        while (start < end){
            int current_area = (end-start)*min(heights[start],heights[end]);
            max_area = max (current_area, max_area);
            if (heights[start]<heights[end]){
                start++;
            } else {
                end--;
            }
        }
        return max_area;
     
    }
};
