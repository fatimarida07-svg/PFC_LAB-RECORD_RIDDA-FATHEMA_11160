/* ODD/EVEN chech using if-else, max of three numbers(nested if), Ternary
operator,switch-case calculator*/


#include <stdio.h>

int main(){
    int num;
    printf("Hello,i am Ridda Fathema\n");

    printf("Enter a number: ")
    scanf("%d,&num");

    if(num % 2 == 0){
        printf("%d is even\n", num);
    }
    else{
        printf("%d is odd\n", num);
    }
    return 0;
}
