#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={45,6,7,8,9,3,12};
    int n=7;
    
    //printing the unsorted arrays
    printf("the elements before the sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //selection algo
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindex=-1; //because -1 is never index of array
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindex=j;
        }

        }

        //swap the element
        int temp=arr[i];
        arr[i]=arr[mindex];
        arr[mindex]=temp;

    }
    printf("\n");

    //printing the sorted arrays
    printf("the elements after the sorting are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}