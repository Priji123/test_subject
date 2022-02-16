#include<stdio.h>

int factorial_recursive(int a){
    if(a == 1 || a == 0)
        return 1;
    else
        return a * factorial_recursive(a-1);
}

int main(){
    int a;
    printf("This is a c program for factorial\n");
    printf("Enter a number for factorial but not a negative integer\n");
    scanf("%d",&a);
    printf("The factorial of the given number is %d is %d\n", a, factorial_recursive(a));
}

