//https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/


class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int n = boxes.length();
        unordered_set<int> st;

        for(int i = 0; i < n; i++) {
            if(boxes[i] == '1') {
                st.insert(i);
            }
        }

        vector<int> answer(n, 0);

        for(int i = 0; i < n; i++) {
            for(auto &idx : st) {
                answer[i] += abs(i - idx);
            }
        }

        return answer;
    }
};
