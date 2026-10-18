#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
    printf("\n");
    if (argc != 4){
        printf("Error:Usage ./calc <int1> <op> <int2> \n");
        return 1;
    }
    int a,b;
    char op;
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op = argv[2][0];
    int result;

    switch(op){
        case '+':result = a+b;break;
        case '-':result = a-b;break;
        case 'x':result = a*b;break;
        case '/':b > 0 ? result = a/b:printf("Division by zero error\n");exit(1);
        default: printf("Invalid operand detected \n");
        
    }
    printf("The result is %d \n",result);
    return 0;
    
}
