#include<stdio.h>
int main(){
    int arr[9]={2,4,0,5,0,0,6,0,1};
    int n=9;
    //doing by an extra array
    int brr[n];
    int j=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            brr[j]=arr[i];
            j++;

        }
        else{
           zero++;
        }
    }

    //filling the zeros
    for(int i=(n-zero);i<n;i++){
        brr[i]=0;
    }

    //print the sorted array
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
}