#include <stdio.h>

int main(){
    int i = 0;
    while(i < 10){
        printf("%d\n", i);
        i++;
    };

    int a = 0;
    do {
        printf("%d\n", a);
        a++;
    } while(a < 10);
    
    return 0;
}