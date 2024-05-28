#include <stdio.h>

int main(int argc, char const *argv[])
{
    int result = 0; //It is a good practice to assign first to 0/null.
    printf("Arith Demo\n");
    result = add(10, 20);
    printf("Addition result:%d\n",result);
    return 0;
}