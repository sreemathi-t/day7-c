#include<stdio.h>
int main()
{
    int arr[5]={9,999,99,9999,91};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }for(int i=0;i<n;i++){
            printf("%d ",arr[i]);

    }
  
    } 
}