//https://www.geeksforgeeks.org/problems/k-sum-paths/1



/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int countPaths(Node* root, int k, int prefixSum, unordered_map<int, int>& prefixSumCount) {
        if (!root) return 0;
        
        prefixSum += root->data;
        int count = prefixSumCount[prefixSum - k];
        if (prefixSum == k) count++;

        prefixSumCount[prefixSum]++;
        count += countPaths(root->left, k, prefixSum, prefixSumCount);
        count += countPaths(root->right, k, prefixSum, prefixSumCount);
        prefixSumCount[prefixSum]--;
        
        return count;
    }

    int sumK(Node* root, int k) {
        unordered_map<int, int> prefixSumCount;
        return countPaths(root, k, 0, prefixSumCount);
    }
};
