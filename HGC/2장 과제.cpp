#include <stdio.h>
#include <conio.h>
#include <iostream>

char arr[999];
int ConAsc[999];

void ten(int num)
{
	//double ten2 = 0.1;
	float ten2 = 0.1;

	for (int k = num-1; k >= 0 ; --k)
	{
		ten2 = ten2 * 10.f;
		ConAsc[k] = ConAsc[k] * ten2;
	}


}


int nine(int num)
{
	//char a = 9;
	float ten2 = 0.1;

	double save = 0;

	for (int i = 0; i < num; ++i)
	{
		ten2 = ten2 * 10.f;
		save = save + ten2 * 9;
	}


	return save;
}

void main()
{

	
	int save[999];
	int save2 = 0;
	int n, min = 1, max = 99, input, i;
	int num = 0;
	char ch;

	n = 0;

	printf("임의의 자리 수 입력 : ");
	
	for (int k = 0; k < 99; ++k)
	{
		arr[num] = _getch();
		char a = arr[num];
		printf("%c", a);
		ConAsc[num] = arr[num] - '0';
		if (arr[num] == 13)
			break;

		num++;
	}

	printf("\n\n");

	ten(num);

	for (int k = 0; k < num; k++)
	{
		n = n + ConAsc[k];
	}
	
	max = nine(num);
	

	for (i = 0; i < 10; ++i)
	{
		printf("[%2d회] %2d ~ %2d 사이의 값 예측 =>", i + 1, min, max);
		//scanf_s("%d", &input);
		std::cin >> input;


		if (n == input) break;
		else if (n > input) {
			printf("더 큰 숫자입니다\n");
			min = input;

		}
		else {
			printf("더 작은 숫자입니다\n");
			max = input;
		}
	}

	printf(" %d !!! 정답은 %d\n", input, n);
	printf(" 최종 점수 =  %d\n", 10 * (10 - i));
	printf("2015184026 조성민");
}