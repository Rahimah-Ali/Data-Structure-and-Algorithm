#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n,i;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n<0){
        printf("fact of negative num doesnt exists");
    }
    else {
    printf("factorial is %d",fact(n));


}
return 0;
}
