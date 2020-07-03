#include<stdio.h>
int main()
{
/*    int var1;
    char var2[10];
    printf("Address of var1 variable: %x\n", &var1 );
    printf("Address of var2 variable: %x\n", &var2 );    */

    int var = 20; /* actual variable declaration */
    int *ip; /* pointer variable declaration */
    ip = &var;
    printf("Address of var variable: %x\n", &var);

    printf("Address stored in ip variable: %x\n", ip );

    printf("Value of *ip variable: %d\n", *ip );

    return 0;
}
