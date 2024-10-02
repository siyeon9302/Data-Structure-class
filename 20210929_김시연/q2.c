#include<stdio.h>
// 순환(재귀) 알고리즘 연습

void f(int k) // f 함수의 반환형은 void(반환 값 없음), 매개변수는 정수형 타입 k
{
    if(k == 0) // k의 값이 0이면
        return;  // 함수 종료 (재귀 종료)
    
    printf("%d\n", k); // 현재 k 값을 출력
    f(k-1);  // f 함수를 다시 호출, 매개변수 k-1로 재귀적으로 호출됨
    
    printf("%d\n", k); // 첫 번째 재귀 호출 후 다시 현재 k 값을 출력
    f(k-1);  // 다시 f 함수를 매개변수 k-1로 재귀 호출 (두 번째 재귀 호출)
    
    printf("%d\n", k); // 두 번째 재귀 호출 후 다시 현재 k 값을 출력
}

void main() // 메인 함수
{
    int i = 4; // 정수형 변수 i에 4 값을 저장
    f(i); // f(4) 호출, 매개변수 i=4를 전달하여 재귀 함수 실행
}

/* 설명 주석
f(4)가 호출되면, 재귀적으로 f(3) -> f(2) -> f(1) -> f(0)까지 호출된다.
재귀 호출이 끝나면, 재귀가 풀리면서 f(1), f(2), f(3), f(4)의 남은 부분이 실행된다.
첫 번째 printf("%d\n", k); : 함수가 처음 호출될 때마다 k의 값을 출력힘
두 번째 printf("%d\n", k); : 첫 번째 재귀 호출이 완료된 후 k의 값을 출력함
세 번째 printf("%d\n", k); : 두 번째 재귀 호출이 완료된 후 k의 값을 출력함

각 재귀 단계에서 f(k-1)이 두 번 호출 -> 같은 k 값이 여러 번 출력된다!!

실행 과정 설명:
int i=4; -> f(4)로 매개변수 4 전달
f(4) → 첫 번째 출력 4
f(3) → 첫 번째 출력 3
f(2) → 첫 번째 출력 2
f(1) → 첫 번째 출력 1
f(0) → 종료, 돌아감 → 두 번째 출력 1
f(0) → 종료, 돌아감 → 세 번째 출력 1
f(2) → 두 번째 출력 2
f(1) → 첫 번째 출력 1
f(0) → 종료, 돌아감 → 두 번째 출력 1
f(0) → 종료, 돌아감 → 세 번째 출력 1
f(2) → 세 번째 출력 2
f(3) → 두 번째 출력 3
이후 비슷한 과정으로 f(4)까지 진행된다.

출력 결과:
4
3
2
1
1
1
2
1
1
1
2
3
2
1
1
1
2
1
1
1
2
3
4
3
2
1
1
1
2
1
1
1
2
3
2
1
1
1
2
1
1
1
2
3
4
*/
