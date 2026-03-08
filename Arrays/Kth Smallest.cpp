https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(begin(arr),end(arr));
            return arr[k-1];
    }
};
