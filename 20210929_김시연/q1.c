#include<stdio.h>
// 순환 알고리즘 연습

void f(int k){  // f함수의 반환형 타입은 void, 매개변수는 정수형 타입 k 이다.
    if (k==0) // 만약 매개변수 k가 0이면! 함수 종료
        return;
    // 매개변수 k가 0이 아니면 밑에 명령어들 실행
    printf("%d \n", k); // k값 출력
    f(k-1);
    /*다시 f 함수 호출 *자기 자신을 호출하는 재귀함수이기 때문에 각 호출에 대한 메모리 공간(스택 프레임)이 따로 할당된다. 이로 인해 자기 자신을 호출하는 게 종료되면
    마지막 호출된 함수부터 역순으로 함수가 종료됨. f(4) -> f(3) -> f(2) -> f(1) -> f(0)으로 함수가 종료된 후 거꾸로 f(1)부터 f(4)까지 실행. */
    printf("%d \n", k); // 재귀함수가 풀릴 때 사용되는 코드. 거꾸로 f(1)부터 f(4)까지 실행되기 때문에 결과는 1, 2, 3, 4 로 출력된다.
    
}

int main(){ // main 함수! 프로그램 진입점/시작점
    int i = 4; // 정수형 타입 변수에 4라는 값을 넣어줌
    f(i); // f 함수 호출, 매개변수 i, 즉 4 전달
}


/*결과
4
3
2
1
1
2
3
4
*/
