// https://www.interviewbit.com/problems/nearest-smaller-element/


//Brute: Traverse nums from the back, for each element find the element smaller on the left
//Time: O(n^2)
//Space: O(1)
vector<int> Solution::prevSmaller(vector<int> &nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    
    for(int i=n-1;i>=0;i--){
        int index = -1;
        for(int j=i-1;j>=0;j--){
            if(nums[i] > nums[j]){
                result[i] = nums[j];
                break;
            }
        }
    }
    
    return result;
}


//Better: Traverse the array, check if stack is empty then result[i] = -1;
//if it is not empty, while the stack is not empty and the top is >= nums[i] -> st.pop()
//check if stack is empty then result[i] = -1
//else result[i] = st.top()
//push nums[i] in stack
//Time: O(n)
//Space: O(n)
vector<int> Solution::prevSmaller(vector<int> &nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;
    
    for(int i=0;i<n;i++){
        if(st.empty()) result[i] = -1;
        else{
            while(!st.empty() && nums[i] <= st.top()) st.pop();
            if(st.empty()) result[i] = -1;
            else result[i] = st.top();
        }
        st.push(nums[i]);
    }
    
    return result;
}
