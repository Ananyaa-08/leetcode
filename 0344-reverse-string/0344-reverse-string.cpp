class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        for(int i=0; i<s.size(); i++){
            if(i>j){
                break;
            }
            swap(s[i], s[j]);
            j--;
        }       
    }
};