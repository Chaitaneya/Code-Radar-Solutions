#include<stdio.h>
int main(){
    int i,b;
    scanf("%d",&i);
    for(b=1;b<=i;b++){
        printf("%d",b);
        if (b < i) {
            printf(" ");
        }
    }
}