#include <stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char* s) {
    int visited[256]={0};
    int left = 0;
    int maxlen= 0;
    int right;
    for(right =0;s[right]!=0;right++){
        while(visited[s[right]]==1){
            visited[s[left]]=0;
            left++;

        }
        visited[s[right]]=1;
        int currentlen = right-left+1;
        if(currentlen>maxlen){
            maxlen = currentlen;
        }
    }
    return maxlen;
    
}

