#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,3,4,6,7,9,4,3,2,1,3};
    int max=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(max <arr[i])max=arr[i];
       
    }
    printf("%d ",max);
    
    return 0;
}