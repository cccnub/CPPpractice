// 007연산자operater.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 모르는 것이 생겼을 때 검색 하는곳
// 1. Cpp 포럼
// 2. msdn
// 3. 스택오버플로
// 4. 선생님 


int main()
{
    //산술연산자 
    //- , + , * , / , %
    //  -  =  뺄셈
    //  +  =  덧셈
    //  *  =  곱셈
    //  /  =  나눗셈
    //  %  =  나머지
 
	// 무엇이 되었든 0으로 나눌 수는 없다. 
	// 치명적 오류 발생 = 제로디비전 
    
    // bool = 참과 거짓을 리턴하는 1바이트 논리형
    // 모든 비트가 0이라면 거짓, 그 외의 모든것이 참

    // 00000000
    bool Result = false;

    // 0b 를 앞에 붙이게 되면 비트 모양으로 표현할 수 있다.
    // 우리가 보기 쉽게 표현 하는 것 이라고 생각하면 된다. 
    Result = 0b00000000;

    // true = 논리형 상수 
    // true 값을 넣게 되면 1이 나오고, false 를 넣으면 0 이 나온다.
    // 그렇게 정해져있으니 ekrclrh 외워. 

    // 비교 연산자
    int Right = 10;
    int Left = 5;
    
    //크니?
    Result = Left > Right;
    //작니?   
    Result = Left < Right;
    //크거나 같니?
    Result = Left >= Right;
    //작거나 같니?
    Result = Left <= Right;
    //같니 ? 
    Result = Left == Right;
    //다르니 ?
    Result = Left != Right;

    // 논리 연산자
    // 왼쪽과 오른쪽의 참과 거짓을 기반으로
    // 거짓 혹은 참을 리턴하는 연산자
    
    // && = 논리형and, 왼쪽과 오른쪽이 모두 참이라면 참
    // 논리 이항연산자
    Result = true && false;
    //아래 코드만 참, 나머지는 거짓
    Result = true && true; 
    Result = false && true;
    Result = false && false;
    
    // || = 논리형 or, 왼쪽 오른쪽중 하나라도 참이라면 참
    // true가 하나라도 있으면 참이 된다. 
    // 논리 이항 연산자
    Result = true || false;
    Result = true || true;
    Result = false || true;
    Result = false || false;

    // 논리형 부정
    // 논리 단항 연산자
    Result = !true;
    Result = !false; 

    // 연산자를 사용할 때 왼쪽과 오른쪽이 다 필요하다면
    // '이항연산자'
    // 오른쪽만 필요하다면 '단항연산자' 라고 한다.

    int a = 0;

    


    
   
}

