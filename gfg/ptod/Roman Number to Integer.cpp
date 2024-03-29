//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        
        mp['D'] = 500;
        mp['M'] = 1000;
        int prev = 4000;
        int count = 0;
        for(int i = 0;i < str.length();++i){
            
            if (mp[str[i]] <= prev){
                count += mp[str[i]];
            }else if(mp[str[i]] > prev){
                count -= prev;
                count += (mp[str[i]]-prev);
            }
            prev = mp[str[i]];
        }
        return count;
    }
};
