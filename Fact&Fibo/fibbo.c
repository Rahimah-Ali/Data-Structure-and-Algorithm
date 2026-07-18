#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of fibonacci series::");
    scanf("%d",&n);
int count =0;
int first=0,second=1, next;
while(count<n){
    if(count==0){
        next = first;
    }
    else if(count==1){
        next = second;
    }
    else {
        next = first+ second;
        first = second;
        second= next;
    }
    printf("%d ", next);
    count++;
}
printf("\n");
return 0;











}
