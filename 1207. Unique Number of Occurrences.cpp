class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // approch  count the  number of occurence 
        unordered_map<int , int > mp;
        for(int i =0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        // check if the occurence is unique of not
        set<int> s;

        for(auto it:mp){
            s.insert(it.second);
        }
        return s.size() == mp.size();    
    }
};