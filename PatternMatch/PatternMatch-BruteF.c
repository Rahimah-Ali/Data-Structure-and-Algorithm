#include<stdio.h>
#include<string.h>
int main() {
     char mainString[] ="Sylhet Engineering College, Sylhet";
     char subString[] = "llege";
     int j =0, flag = 0, lenSub= strlen(subString), count = 0, subIndex = -1;

     for(int i=0;i< strlen(mainString);i++){
        if((mainString[i]== subString[j]) && (flag==0)) {
            flag = 1;
            count++;
            subIndex = i;
            j++;
        }
    else if ( mainString[i]==subString[j]){
        //printf(" %d th index and count: %d",i, count);
        count++;
        j++;
    }
    else {
        flag = 0;
        count = 0;
        subIndex = 0;
        j = 0;
    }
    if( count == lenSub){
        printf("%d to %d", subIndex, subIndex+lenSub);
    }
    //printf("%c", mainString[i]);
     }
return 0;
}
