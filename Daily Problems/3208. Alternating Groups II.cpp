//https://leetcode.com/problems/alternating-groups-ii/?envType=daily-question&envId=2025-03-09



class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) 
    {
        int n = colors.size();
        int count =0;
        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=i;j<i+k-1;j++){
                if(colors[j%n] == colors[(j+1)%n]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};
