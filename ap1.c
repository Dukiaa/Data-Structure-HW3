#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];
    int *plist[5] = {NULL,};


    plist[0] = (int *)malloc(sizeof(int));

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;
    
    printf("[----- [조정동] [2017015041] -----]\n");

    printf("value of list[0] = %d\n", list[0]); //list[0]의 값 
    printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소
    printf("value of list = %p\n", list); //포인터 list의 값
    printf("address of list (&list) = %p\n", &list); //포인터 list의 주소

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list[1]의 값
    printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소
    printf("value of *(list+1) = %d\n", *(list + 1)); //포인터 list+1 이 가리키는 값을 가져옴 즉 100 출력
    printf("address of list+1 = %p\n", list+1); //포인터 list+1의 주소

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //포인터 plist[0]의 값 
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소
    printf("&plist = %p\n", &plist); //plist의 주소
    printf("plist = %p\n", plist); //포인터 plist의 주소
    printf("plist[0] = %p\n", plist[0]); //포인터 plist[0]의 주소
    printf("plist[1] = %p\n", plist[1]); //plist[1]은 값이 없으므로 00000000이 출력
    printf("plist[2] = %p\n", plist[2]); //plist[2]은 값이 없으므로 00000000이 출력
    printf("plist[3] = %p\n", plist[3]); //plist[3]은 값이 없으므로 00000000이 출력
    printf("plist[4] = %p\n", plist[4]); //plist[4]은 값이 없으므로 00000000이 출력

    free(plist[0]);
}
