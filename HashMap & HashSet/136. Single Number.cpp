class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        unordered_map<int,int> :: iterator it = count.begin();
        while(it != count.end()){
            if(it->second == 1){
                return it->first;
            }
            it++;
        }

        return -1;
    }
};
