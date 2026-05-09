#include<stdio.h>
#include<string.h>
char* longestPalindrome(char* s) {
 int n = strlen(s);
 int start = 0;
 int maxlen = 1;
 int i;
 for(i=0;i<n;i++){
    int left=i;
    int right= i;;
    while(left>=0 && right <n && s[left]==s[right]){
        int len = right-left+1;
        if (len > maxlen){
            start = left;
            maxlen = len;
        }
        left--;
        right++;
    }
    left = i;
    right = i+1;
    while (left>=0 && right<n && s[left]== s[right]){
        int len = right-left+1;
        if(len>maxlen){
            start = left;
            maxlen= len;
        }
        left--;
        right++;
    }
 }   
 int end = start+maxlen;
 static char result[1001];
 int k =0;
 for(i= start; i<end;i++){
    result[k] = s[i];
    k++;
 }
 result[k] = '\0';
 return result;
}
