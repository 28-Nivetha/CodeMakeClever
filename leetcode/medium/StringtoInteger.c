#include<stdio.h>
#include<limits.h>
int myAtoi(char* s) {
    int i =0;
    int result =0;
    int sign = 1;
    while ( s[i] ==' '){
        i++;
    }
    if(s[i]=='-'){
        sign = -1;
        i++;
    }
    else if(s[i] == '+'){
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9'){
        int digit = s[i] - '0';
        if(result > (INT_MAX - digit) / 10){
            if(sign == 1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
        result = result * 10 + digit;
        i++; 
    }
    return result *sign;

    
}
