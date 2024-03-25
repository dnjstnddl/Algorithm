// 24.03.25. 월

// <실행 방법>
// gcc 파일명
// 파일 저장 -> ./a.out

// <파일 위치 찾기>
// ls
// cd ...
// cd Algorithm/

#include <stdio.h>

int main(void){

    printf("hello world\n\n");


    // 변수 출력
    int a = 100; // 정수형 변수 a를 선언하고 100으로 초기화
    printf("변수 a의 값은 %d입니다.\n\n", a); // 변수 a의 값을 출력


    //자료형 별 크기 확인하기
    printf("int 자료형의 크기: %ld바이트\n", sizeof(int));
    printf("float 자료형의 크기: %ld바이트\n", sizeof(float));
    printf("double 자료형의 크기: %ld바이트\n", sizeof(double));
    printf("char 자료형의 크기: %ld바이트\n", sizeof(char));
    printf("long 자료형의 크기: %ld바이트\n", sizeof(long));
    printf("long long int 자료형의 크기: %ld바이트\n", sizeof(long long int));
    printf("unsigned int 자료형의 크기: %ld바이트\n\n", sizeof(unsigned int));
    

    // 입력문 (scanf)
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num); // 입력받은 정수를 num 변수에 저장
    printf("입력한 정수는 %d입니다.\n\n", num);


    return 0;

}
