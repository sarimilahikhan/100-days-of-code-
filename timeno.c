//in a array of numbers find how many times a no has occured
#include<stdio.h>
int main (){
    int n, count,size, arr[]={1,2,3,4,5,2,3,4,3,2,1,1,1,2,2,3,5,5,5,5,4,4,4,4,4,4};
    size = sizeof (arr)/sizeof(arr[0]);
    printf("enter the number :");
    scanf("%d",&n);
    count =0 ;
    for(int i = 0; i<size;i++){
        if (arr[i]==n){
            count++;
        }
    }
    printf("total times repeated : %d", count);
    return 0;
}