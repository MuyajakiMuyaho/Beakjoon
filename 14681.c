#include <stdio.h>

int main() {
    int x ; int y;
    scanf("%d\n" ,&x);
    scanf("%d\n" ,&y);
    if(x>0 && y>0){
        printf("1");
    }  
    if(x<0 && y>0){
        printf("2");
    }  
    if(x<0 && y<0){
        printf("3");
    }  
    if(x>0 && y<0){
        printf("4");
    }
    return 0;
}