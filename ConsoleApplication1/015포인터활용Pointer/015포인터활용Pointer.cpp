// 015포인터활용Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Number = 0;

    //PtrNumber 가 Number이 된다! 
    int* PtrNumber = &Number;

    *PtrNumber = 300;

    // 배열0번째의 값을 바꾼다는 것은
    // *(PtrNumber + 0) = 999; 
    // 해당 코드와 동일하다고 볼 수 있음 
    PtrNumber[0] = 999;

    

    int a = 0;

}


