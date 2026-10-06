class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        string ans = "";
        map<char,bool> used;
        for(int i =0 ; i<s.size();i++){
            char ch=s[i];
            mp[ch]--;
            if(used[ch]){
                continue;
            }
            while(!ans.empty()&&ans.back()>ch && mp[ans.back()]>0){
                used[ans.back()]=false;
                ans.pop_back();
            }
            ans+=ch;
            used[ch]=true;
        }
        return ans;
    }
};