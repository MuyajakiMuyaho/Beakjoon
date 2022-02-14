#include <stdio.h>

int main() {
    int H ; int M; int T;
    scanf("%d %d\n" ,&H, &M);
    scanf("%d" ,&T);
    if(H + (T/60) > 23) {
        if(M+(T%60)>59){
            printf("%d %d", H + T/60 - 23 , M + T%60 - 60);
        } else {
            printf("%d %d", H + T/60 - 24 , M + T%60);
        }
    } else {
        if(M+(T%60)>59){
            if(H + (T/60) + 1 == 24){
                printf("0 %d",  M + T%60 - 60);
            } else{
                printf("%d %d", H + T/60 + 1 , M + T%60 - 60);
            }
            
        } else {
            printf("%d %d", H + T/60 , M + T%60);
        }
    }
    return 0;
}