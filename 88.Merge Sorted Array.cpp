class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
     int k=m;
      for(int a:nums2)
      {
        nums1[k]=a;
        k++;
      }
      sort(nums1.begin(),nums1.end());

    }
};
