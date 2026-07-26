#include<stdio.h>
#include<string.h>
int main() {
     char s1[]="abiba";
     for(int i=0, j = strlen(s1)-1;i<j/2;i++,j--){
        if(s1[i]!=s1[j]) {
            printf("Not Palindrome!!");
        }
     }

        printf("Palindrome");







return 0;
}
