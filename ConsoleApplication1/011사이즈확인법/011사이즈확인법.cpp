// 011사이즈확인법.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int a = 0;

	int* Ptr = &a;

	//sizeof( ? ); 를 사용하면 확인 가능
	int PtrSize = sizeof(int*);
	
	int Value = 0b00000000000000000000000000000000;
	int ValueA = 0b01111111111111111111111111111111;

	int ValueSize = sizeof(Value);
	
    //unsigned == 키워드 
	//다른 자료형이나 의미 앞에 수식어처럼 붙여주면 된다. 
	//unsigned > 음수는 표현하지 않고 양수로만 표현하라는 뜻 
	
    

	

}

