#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;

    //insertion sort algo
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1&&arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

    //pritning the sorted arrays
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}