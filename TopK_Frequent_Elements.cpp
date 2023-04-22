// program to print the top k frequent elements from the given array.
// GFG practice link - https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1

// C++ Solution -

class Solution {
  public:
  
    vector<int> topK(vector<int>& nums, int k) {
            
        map<int,int>m;
        
        for(auto it:nums) m[it]++;
        
        vector<pair<int,int>>vec;
        
        for(auto it:m) vec.push_back({it.second,it.first});
        
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        
        vector<int>ans;
         
        for(int i = 0; i<k; i++){
            ans.push_back(vec[i].second);
        }
    
        return ans;
        
    }
};
