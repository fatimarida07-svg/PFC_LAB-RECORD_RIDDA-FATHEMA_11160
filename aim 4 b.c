#include <stdio.h>

int main(){
    int a, b, c;
    printf("program by Ridda Fathema\n");

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    if(a >= b){
        if(a >= c)
        printf("Max = %d\n", a);
        else
        printf("Max = %d\n", c);
    } else{
        if(b >= c)
        printf("Max = %d\n", b);
        else
        printf("Max = %d\n", c);
    }
    return 0;
}