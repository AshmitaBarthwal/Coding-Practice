// https://www.geeksforgeeks.org/problems/second-largest3735/1


//Time: O(n)
//SPace: O(1)
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {
        int largest=arr[0];
        int slargest=-1;
        
        for(int i=1;i<n;i++){
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
        }
        return slargest;
    }
};
