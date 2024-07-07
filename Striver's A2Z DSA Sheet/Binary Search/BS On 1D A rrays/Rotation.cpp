// https://geeksforgeeks.org/problems/rotation4723/1


//Brute: Using Linear Search, find the smallest element, return it's index
//Time: O(n)
//Space: O(1)
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    int smallest = INT_MAX, index = -1;
        for(int i=0;i<n;i++){
            if(nums[i] < smallest){
                smallest = nums[i];
                index = i;
            }
        }
        return index;
	}
};


//Better: Using Binary Search, find the smallest element, return it's index
//Time: O(logn)
//Space: O(1)
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    int smallest = INT_MAX;
	    int left = 0, right = n - 1, index = -1;
	    
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[right] <= nums[mid]){
                if(nums[right] < smallest){
                    smallest = nums[right];
                    index = right;
                }
                left = mid+1;
            }else{
                if(nums[mid] < smallest){
                    smallest = nums[mid];
                    index = mid;
                }
                right = mid - 1;
            }
        }
        
        return index;
	}

};
