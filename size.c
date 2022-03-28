#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [조정동] [2017015041] -----]\n");
    
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 크기 출력
}
