#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    printf("[----- [조정동] [2017015041] -----]\n");
    
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); //구조체인 student의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력
    return 0;
}
