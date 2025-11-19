# include <stdio.h>

int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    if(num %2 ==0){
        printf("%d is Even number",num);
    }
    else{
        printf("%d is odd Number",num);
    }
    return 0;
}