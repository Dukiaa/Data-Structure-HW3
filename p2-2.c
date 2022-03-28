#include <stdio.h>
void print1 (int *ptr, int rows);

int main()
{
    printf("[----- [조정동] [2017015041] -----]\n");
    
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one); //포인터 one의 값
    printf("&one = %p\n", &one); //&one의 주소
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소
    printf("\n");
    print1(&one[0], 5); //print1 함수 
    
    return 0;
}

void print1 (int *ptr, int rows)
{
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr = 0061FF0C를 시작으로 i만큼 증가해서 출력
    printf("\n");
}
