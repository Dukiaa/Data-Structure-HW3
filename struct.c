#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
    } student2;

int main() {
    printf("[----- [조정동] [2017015041] -----]\n");
    
    struct student1 st1 = {'A', 100, 'A'};

    printf("st1.lastName = %c\n", st1.lastName); //struct student1의 lastName인 A가 출력
    printf("st1.studentId = %d\n", st1.studentId); //struct student1의 studentId인 100이 출력
    printf("st1.grade = %c\n", st1.grade); //struct student1의 grade인 A가 출력

    student2 st2 = {'B', 200, 'B'};
    
    printf("\nst2.lastName = %c\n", st2.lastName); //struct student2의 lastName인 B가 출력
    printf("st2.studentId = %d\n", st2.studentId); //struct student2의 studentId인 200이 출력
    printf("st2.grade = %c\n", st2.grade); //struct student2의 grade인 B가 출력
    
    student2 st3 = {'B', 200, 'B'};

    st3 = st2; //st3 또한 st2의 구조체 사용
    printf("\nst3.lastName = %c\n", st3.lastName); //struct student2의 lastName인 B가 출력
    printf("st3.studentId = %d\n", st3.studentId); //struct student2의 studentId인 200이 출력
    printf("st3.grade = %c\n", st3.grade); //struct student2의 grade인 B가 출력
    
    /* equality test */
    if(st3 == st2) /* not working */
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}