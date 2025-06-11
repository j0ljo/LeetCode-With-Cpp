// 1768(merge_strings_alternatively)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, len1 = word1.size(), len2 = word2.size();

        while (i < len1 || i < len2 ){
            if (i < len1) {
                merged += word1[i];
            }
            if (i < len2) {
                merged += word2[i];
            }
            i++;
        }
        return merged;
        
    }
};