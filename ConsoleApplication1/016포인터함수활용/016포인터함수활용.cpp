// 016포인터함수활용.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
// 포인터를 사용하는 이유는
// 나중에는 인트를 쓰지 않고 image , Player , map 등을 쓰게 되는데
// 이때 호출하는 함수의 크기가 너무 커서 값을 다 받아오기에 비효율
// 적이기 때문에 포인터를 사용하여 주소값을 가져와서 사용하게 된다. 
// 그 어떠한 크기더라도 포인터를 사용하게 되면 8 바이트만 넘겨서
// 사용할 수 있게 된다. 
// 포인터를 써서 넘긴다는거 자체가 최적화 인 것이다. 


//전역변수
int Poison(int _Hp)
{
    _Hp -= 10;

    return _Hp;
}
void Heal(int* _Hp)
{
    *_Hp += 10;

}
int main()
{
    int PlayerHp = 0;
    
    PlayerHp = Poison(PlayerHp);

    int a = 0;
    
    
 }

