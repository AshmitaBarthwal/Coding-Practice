// https://leetcode.com/problems/next-greater-element-i/description/


//Brute: For each element in nums1 find equal element in nums2 and then look for greater element in rest of nums2
//Time: O(n* m^2)
//Space: O(n)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> result(n, -1);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j]){
                    for(int k=j+1;k<m;k++){
                        if(nums2[j] < nums2[k]){
                            result[i] = nums2[k];
                            break;
                        }
                    }
                }
            }
        }

        return result;
    }
};


//Better: Find the index in nums2 where element is equal to the element in nums1, store that index
//Then look for the element greater nums1 element in nums2 after the index
//Time: O(n*m)
//Space: O(n)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> result(n, -1);

        for(int i=0;i<n;i++){
            int index = -1;
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j]){
                    index = j;
                    break;
                }
            }

            if(index == -1) continue;

            for(int j=index+1;j<m;j++){
                if(nums1[i] < nums2[j]){
                    result[i] = nums2[j];
                    break;
                }
            }
        }

        return result;
    }
};


//Optimal:Create an empty stack st and an empty map nextGreater to store the next greater element for each element in nums2.
// Iterate over nums2 in reverse order:
// Pop elements from st until an element greater than the current element is found or the stack is empty.
// If the stack is empty, set nextGreater[current_element] = -1. Otherwise, set nextGreater[current_element] = st.top().
// Push the current element onto st.
// Iterate over nums1 and construct the result array using the nextGreater map.
//Time: O(m+n)
//Space: O(m)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> result;
        stack<int> st;
        map<int, int> mp;

        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]) st.pop();
            if(st.empty()) mp[nums2[i]] = -1;
            else mp[nums2[i]] = st.top(); 
            st.push(nums2[i]);
        }

        for(int num : nums1){
            result.push_back(mp[num]);
        }

        return result;
    }
};
