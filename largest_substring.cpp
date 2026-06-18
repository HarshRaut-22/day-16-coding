class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int result = -1;
        for(int i=0; i<s.size(); i++){
            int j = s.size() -1;
            while(s[j] != s[i]){
                j--;
            }
            result = max(result , j-1-i);
        }
        return result;
    }
};
