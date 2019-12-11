class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
            return -1; 
        }
        if(needle.length() == 0){
            return 0;
        }
        int x;
        int j;
        int flag = 0;
        for(int  i= 0; i< haystack.length();i++){
            if(haystack[i] == needle[0]){
                x = i;
                for(j = 1; j < needle.length();j++){
                    if(haystack[++i] != needle[j]){
                        i = x;
                        break;
                    }
                }
                if(j == needle.length()){
                    return x;
                }
            }
        }
        return -1;
        
    }
};



//in O(n)
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
            return -1; 
        }
        if(needle.length() == 0){
            return 0;
        }
        for(int  i= 0; i< haystack.length()-needle.length()+1;i++){
            if(haystack.substr(i,needle.length()).compare(needle) == 0){
                return i;
            }
        }
        return -1;
        
    }
};
