#include <iostream>

using namespace std;

int main()
{
    // 비트 연산자
    // 쉬프트 << , >> 
    unsigned char byte = 10;

    byte = byte << 1;
    byte <<= 1;

    // & : 0,1 둘중 하나라도 0이면 0이 나옴
    // | : 0,1 둘중 하나만 1여면 1이 나옴 
    // ~ : 각 자리 비트를 반전
    // ^ : 두 자리 비트가 같으면 0, 다르면 1

    // 특정 자리 비트 제거
    // a &= ~b;

    return 0;
}