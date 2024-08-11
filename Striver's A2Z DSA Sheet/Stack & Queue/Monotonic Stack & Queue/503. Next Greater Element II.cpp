// https://leetcode.com/problems/next-greater-element-ii/description/


//Brute
//TC: O(n^2)
//SC: O(1)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);

        for(int i=0;i<n;i++){
            int j = i+1;
            while(j != i){
                if(j == n) j = 0;
                if(j == i) break;
                if(nums[j] > nums[i]){
                    result[i] = nums[j];
                    break;
                }
                j++;
            }
        }

        return result;
    }
};


//Better: Run a loop of i from 2*n to 0, the index of the element will be i % n,
//if the stack is empty the result[i] = -1, as the element has no greater element
//if the top of stack is greater than element then result[i] = st.top()
//if the top is less than the element, then while the top is less, keep popping the elements
//if after popping stack is empty then result[i] = -1
//else result[i] = st.top()
//Time: O(n)
//Space: O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> result(n, -1);
        
        for(int i=(n*2)-1;i>=0;i--){
            int index = i % n;
            if(st.empty()) result[index] = -1;
            else if(st.top() > nums[index]) result[index] = st.top();
            else{
                while(!st.empty() && st.top() <= nums[index]) st.pop();
                if(st.empty()) result[index] = -1;
                else result[index] = st.top();
            }

            st.push(nums[index]);
        }

        return result;
    }
};
