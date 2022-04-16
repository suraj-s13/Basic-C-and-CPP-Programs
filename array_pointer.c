#include<stdio.h>
int main()
{
    int i=22;
    int *ptr=&i;
    printf("the value of ptr is: %u\n",ptr);
    ptr++;
    printf("the value of ptr is: %u\n",ptr);
    
}