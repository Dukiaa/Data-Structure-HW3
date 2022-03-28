#include <stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("[----- [조정동] [2017015041] -----]\n");
    
    for(i=0; i < MAX_SIZE; i++) //MAX_SIZE=100이므로 1 ㅡ 99까지 합
    input[i] = i;
    
    /* for checking call by reference */
    printf("address of input = %p\n", input); //input의 주소
    answer = sum(input, MAX_SIZE); //input에 1ㅡ99까지 합 한 값을 answer에 대입
    printf("The sum is: %f\n", answer); //1ㅡ99까지 합 한 값 = 4950
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list 값
    printf("address of list = %p\n\n", &list); //list 주소
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i]; //0 ㅡ i 까지 합 반복
    return tempsum;
}
