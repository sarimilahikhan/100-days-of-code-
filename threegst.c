// write a program to enter costof three items and print their final cost with  gst
#include <stdio.h>
int main(){
    float price[3];
    printf("enter cost of 1st : ");
    scanf("%f", &price[0]);
    printf("enter cost of 2nd : ");
    scanf("%f",&price[1]);
    printf("enter cost of 3rd : ");
    scanf("%f",&price[2]);
    printf("%f,%f,%f", price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));
    return 0;
}