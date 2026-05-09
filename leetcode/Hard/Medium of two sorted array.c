#include<stdio.h>
double findMedianSortedArrays(int nums1[],int m, int nums2[], int n) {
    int merged[m+n];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if (nums1[i]<nums2[j]){
            merged[k]=nums1[i];
            i++;
        }
        else{
            merged[k]=nums2[j];
            j++;
        }
        k++;
    }
    while(i<m){
        merged[k]=nums1[i];
        i++;
        k++;
    }
    while(j<n){
        merged[k] = nums2[j];
        j++;
        k++;
    }
    int total = m+n;
    if (total%2==1) {
        return merged[total/2];
    }
    else{
        int middle1=merged[(total/2)-1];
        int middle2=merged[total/2];
        return (middle1+middle2)/2.0;
    }
}
