class Solution {
public:

    string getFrequencyString(string str) {
        vector<int> frequency(26, 0);

        for (char ch : str) {
            frequency[ch - 'a']++;
        }

        string frequencyString = "";

        for (int i = 0; i < 26; i++) {
            frequencyString += to_string(frequency[i]) + "#";
        }

        return frequencyString;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if (strs.empty()) {
            return {};
        }

        unordered_map<string, vector<string>> frequencyStringsMap;

        for (string str : strs) {

            string frequencyString = getFrequencyString(str);

            if (frequencyStringsMap.find(frequencyString) != frequencyStringsMap.end()) {
                frequencyStringsMap[frequencyString].push_back(str);
            }
            else {
                vector<string> strList;
                strList.push_back(str);
                frequencyStringsMap[frequencyString] = strList;
            }
        }

        vector<vector<string>> result;

        for (auto& pair : frequencyStringsMap) {
            result.push_back(pair.second);
        }

        return result;
    }
};