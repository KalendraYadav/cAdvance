#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;

    for(int i=0;i<n-1;i++){ //outer loop is no. of passes
        for(int j=0;j<n-1-i;j++){ //at every pass same no of element will be sorted so
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }

    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}