#include <iostream>

typedef struct _user {
	int *data;
}User;

int main() {
	int i = 100;
	int* pInt = &i;
	
	(*pInt = 200);

	std::cout << *pInt;

	User * user = (User *)malloc(sizeof(User));
	user->data = &i;

	std::cout << user->data;

	

	return 0;
}
