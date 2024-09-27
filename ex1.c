#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("inter your number  :  ");
    scanf("%d",&num);
    
    for(int i=1;i<=10;i++){
        int res = num*i;
        printf("%d * %d =%d \n",num,i,res);
    }
return 0;
}