#include<stdio.h>
#include<Math.h>
#include<stdlib.h>
int longestWindow(int days[], int n, int k){
    int left=0;
    int right=0;
    int maxLen=0;
    for(right=0; right<n; right++){
        if(days[right]-days[left]>k){
            left++;
        }
    int len=right-left+1;
    if(len>maxLen){
        maxLen=len;
    }
}
return maxLen;
}

int main(){
    int days[]={1,3,5,7,9};
    int n=sizeof(days)/sizeof(int);
    int k=4;
    printf("%d",longestWindow(days,n,k));
}