#include <iostream>

typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

int main()
{
	int arr[10] = { 1,2,3 };

	MYST t = { 100, 3.14f };
	int size = sizeof(MYST);

	t.a = 10;
	t.f = 10.234f;

	std::cout << size;

	return 0;
}
