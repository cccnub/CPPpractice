// 014배열Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 배열 Array
    // 배열의 초기화는 { 0 } 을 넣어주면 된다. 
    // 0을 안넣어주면 자동으로 0을 집어넣게 된다. 
    // 배열의 이름은 똑같이 번지로 처리 된다.
    // 포인터와 호환되는 문법
    // 배열의 이름 == 같은 자료형 포인터 
    int MonsterHpArr[9] = { 10,20,30,40,50,60,70,80,90, };

    // int 포인터형은 int*
    // int  배열형은  int[] 
    
    int ArrSize = sizeof(MonsterHpArr);

    //그 배열의 0번째에 해당하는 int의 값이 되는것
    MonsterHpArr[0] = 123;
    
    //배열의 주소값 확인
    //여기서 
    __int64 Address0 = (__int64)&MonsterHpArr[0];
    __int64 Address1 = (__int64)&MonsterHpArr[1];

    int b = 0;
}

