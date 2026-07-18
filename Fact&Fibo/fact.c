#include<stdio.h>
int main(){
 int number;
 long long factorial =1;
 printf("Enter an integer:");
 scanf("%d",&number);
 if(number<0){
    printf("Error! Input a positive integer");
    return 1;
 }
 while(number>0){
    factorial*=number;
    number--;
 }
printf("Factorial is %lld", factorial);
 return 0;
}
