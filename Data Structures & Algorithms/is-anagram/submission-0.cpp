class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        int counts[26] = {0}; // One slot for each alphabet letter
        
        for (int i = 0; i < s.length(); i++) {
            counts[s[i] - 'a']++; // Increment for s
            counts[t[i] - 'a']--; // Decrement for t
        }
        
        for (int i = 0; i < 26; i++) {
            if (counts[i] != 0) return false;
        }
        
        return true;
    }
};