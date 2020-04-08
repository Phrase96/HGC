#include <stdio.h>

int 스택 = 0;
int 배열[100];

void 푸시(int a)
{
	스택++;
}

void 팝(int a)
{
	스택--;
}

void 삽입()
{
	int a;
	printf("\n 입력 : ");
	scanf_s("%d", &a);
	배열[스택] = a;
}

void 출력()
{
	printf("\n 출력 : ");
	for (int i = 0; i < 스택; i++)
	{
		printf("%d", 배열[i]);
	}
}

int main()
{
	

	return 0;
}