#include<stdio.h>
int main(){
    int arr[7]={2,3,5,6,8,19,34};
    int target=11;
    int n=7;

    //do by two pointer
    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("the two elements are %d and %d\n",arr[i],arr[j]);
            break;
        }

        else if(arr[i]+arr[j]>target){
            j--;
        
        }

        else{
            i++;
        }
    }
    
}