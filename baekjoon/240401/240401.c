// 24. 04. 01 월
// < C언어 2차 >

//-----------------------------------
// <a.out(실행) 파일 생성>
// 1. cd ..
// 2. cd 폴더명
// 3. gcc 파일명.c
// 4. ./a.out

// <실행 방법>.
// 1. gcc 파일명.c
// 2. 파일 저장 -> ./a.out
// 3. 방향키(위^^)

// <파일 위치 찾기>
// ls
// cd .. -> 파일 나가기
// cd Algorithm/

// <git 연결>
// 1. git add .
// 2. git commit -m "메세지"
// 3. git push
//-----------------------------------


// 2. 배열
/*
#include <stdio.h>
int main(void){

    //int arr[5]={1,2,3,4,5};

   //printf("%d\\n", arr[0]);
   //printf("%d\\n", arr[4]);

    //arr[2] = 10;


    int arr[5]={1,2,3,4,5};
    
    printf("arr = %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    arr[0] = arr[0]*2;
    arr[1] = arr[1]*2;
    arr[2] = arr[2]*2;
    arr[3] = arr[3]*2;
    arr[4] = arr[4]*2;

    printf("arr*2 = %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

}*/


// 3. 조건문 - if문
/*
#include <stdio.h>
int main(void){
    
    if (num % 2 == 0 && num % 3 != 0){
        printf("2의 배수이면서 3의 배수가 아닌 것.\\n");
    } else if (num % 3 == 0 && num % 2 != 0) {
        printf("3의 배수이면서 2의 배수가 아닌 것.");
    } else {
        printf("2와 3의 공배수인 것.");
    }

}*/


// 3. 조건문 - switch문
/*
#include <stdio.h>

int main() {
    int day;
    printf("요일 번호를 입력하세요 (1: 월요일, 2: 화요일, ..., 7: 일요일): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("월요일입니다.\n");
            break;
        case 2:
            printf("화요일입니다.\n");
            break;
        case 3:
            printf("수요일입니다.\n");
            break;
        case 4:
            printf("목요일입니다.\n");
            break;
        case 5:
            printf("금요일입니다.\n");
            break;
        case 6:
            printf("토요일입니다.\n");
            break;
        case 7:
            printf("일요일입니다.\n");
            break;
        
        default:
            printf("잘못된 요일 번호입니다.\n");
            break;
    }

    return 0;
}*/


// 4. 반복문 - for문
/*
#include <stdio.h>

int main() {
    int sum = 0;
    int arr[10] = {0,}; // 배열 0으로 초기화
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i <= 9; i++) {
        printf("%d\t", arr[i]);
    }

    for (int i = 0; i <= 9; i++) {
        scanf("%d", &arr[i]);
    }

   for (int i = 0; i <= 9; i++) {
        printf("%d\t", arr[i]);
    }

    //printf("1부터 10까지의 합은 %d입니다.\n", sum);

    return 0;
}*/


// 4. 반복문 - while문
/*
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("숫자를 입력하세요 (0을 입력하면 종료): ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        printf("숫자를 입력하세요 (0을 입력하면 종료): ");
        scanf("%d", &num);
    }

    printf("입력한 숫자들의 합은 %d입니다.\n", sum);

    return 0;
}*/


// 4. 반복문 - do while문
/*
#include <stdio.h>
int main() {
    int num, sum = 0;

    do {
        printf("숫자를 입력하세요 (0을 입력하면 종료): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("입력한 숫자들의 합은 %d입니다.\n", sum);

    return 0;
}*/

 
// 6.2. 증감 연산자
/*
#include <stdio.h>

int main() {
    int a = 5;
    int b = ++a; // 전위 증가: a = 6, b = 6
    int c = a++; // 후위 증가: c = 6, a = 7

    printf("a: %d, b: %d, c: %d\n", a, b, c); // a: 7, b: 6, c: 6

    return 0;
}*/


// 6.3. 관계 연산자


// 6.4. 논리 연산자
/*
#include <stdio.h>

int main() {
    int a = 5, b = 7;
    int c = 3, d = 0;

    printf("%d && %d: %d\n", a < b, c != d, (a < b) && (c != d)); // 1 (참)
    printf("%d || %d: %d\n", a == b, c == d, (a == b) || (c == d)); // 1 (참)
    printf("!(%d): %d\n", a > b, !(a > b)); // 1 (참)

    return 0;
}*/





