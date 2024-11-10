/*
  Longest Common Prefix
  
  Write a function to find the longest common prefix string amongst an array of strings.
  If there is no common prefix, return an empty string "".
  
  
  Example 1:
  Input: strs = ["flower","flow","flight"]
  Output: "fl"
  
  Example 2:
  Input: strs = ["dog","racecar","car"]
  Output: ""
  
  Explanation: There is no common prefix among the input strings.
  
  Constraints:
      1 <= strs.length <= 200
      0 <= strs[i].length <= 200
      strs[i] consists of only lowercase English letters.
*/


char* longestCommonPrefix(char** strs, int strsSize) 
{
    if (strsSize == 0) 
        return "";

    char* prefix = strs[0];
    for (int i = 1; i < strsSize; ++i) 
    {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) 
            j++;
        
        prefix[j] = '\0';

        if (prefix[0] == '\0') 
            return "";
    }

    return prefix;
}
