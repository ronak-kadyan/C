# include <stdio.h>

void updateValue(int *y)
{
    *y = *y + 10;
}

int main()
{
    int x = 50;
    printf("Before update: %d\n", x);
    updateValue(&x); // Pass address of x
    printf("After update: %d\n", x);
    return 0;
}