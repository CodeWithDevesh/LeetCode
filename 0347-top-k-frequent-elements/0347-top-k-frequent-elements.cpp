class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        unordered_map<int,int>map;
         for(int i=0;i<nums.size();i++){
            int element=nums[i];
             map[element]++;
         }
         
         priority_queue<pair<int,int>>pq;
            for(auto it:map){
                pq.push({it.second,it.first});
            }
            vector<int>ans;
            for(int i=0;i<k;i++){
                auto var= pq.top();
                pq.pop();
                ans.push_back(var.second);
            }
            return ans;
         }       
    
};