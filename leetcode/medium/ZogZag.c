#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* convert(char* s, int numRows) {
 if(numRows == 1){
    return s;
 }  
 int len = strlen(s);
 char* result = (char*)malloc((len+1)*sizeof(char));
 char rows[1000][1000];
 int i,j;
 for(i=0;i<numRows;i++){
    rows[i][0]='\0';
 }
 int currentRow =0;
 int down = 1;
 for(i=0;i<len;i++){
    int rowLen = strlen(rows[currentRow]);
    rows[currentRow][rowLen] = s[i];
    rows[currentRow][rowLen + 1]='\0';
    if(currentRow == numRows - 1){
        down = 0;

    }
    else if(currentRow == 0){
        down = 1 ;
    }
    if (down){
        currentRow++;
    }
    else{
        currentRow--;
    }

 }
 int k=0;
 for(i=0;i<numRows;i++){
    for(j=0;rows[i][j] !='\0';j++){
        result[k] = rows[i][j];
        k++;
    }
 }
 result[k]='\0';
 return result;
}
