#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,r=1;
    printf("entrer le nombre ");
    scanf("%d",&num);
    for(int i =1;i<=num;i++){
        r*=i;
    
    }
    printf("%d !=%d",num,r);
    return 0;
}

