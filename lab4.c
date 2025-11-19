// Print a number N number of times
#include <stdio.h>

int main(){
    int n,num,i;

    printf("enter how many times you want to repeat(N):");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);
    
    for (i = 1; i<=n;i++) {
        scanf("%d", &num);
        printf("number %d = %d\n",i,num);
    }    
    return 0;
}