// print all anagrams together
// https://leetcode.com/problems/group-anagrams/

// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<vector<string>> ans;
//         unordered_map<string,vector<string>> mp;
//         for(auto i:strs){
//             string s=i;
//             sort(s.begin(),s.end());
//             mp[s].push_back(i);
//         }
//         for(auto i:mp){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }