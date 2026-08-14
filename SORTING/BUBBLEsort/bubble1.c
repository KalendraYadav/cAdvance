#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;

    //printing the arrays
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

printf("\n");
    //sorting

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }

    }
    
            //again printing after the swaping
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
    }
    return 0;
}