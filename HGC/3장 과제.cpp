#include <stdio.h>
#include <time.h>
#include <random>
#include <stdlib.h>


int arr[20];
int arr2[10];
int num = 0;
int num2 = 0;
int winstack = 0;
float start, end;
clock_t t1 = clock();
float score = 0;

void init()
{
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 8 + 2;
	}

	int j=0;

	for (int i = 0; i < 20; i++)
	{
		arr2[j] = arr[i] * arr[i + 1];
		i++;
		j++;
	}
}

int Game()
{
	int answer;

	printf("%d X %d = ? \n", arr[num], arr[num+1]);
	printf("ÀÔ·Â : ");
	scanf_s("%d", &answer);
	printf("\n");
	if (answer == arr2[num2])
	{
		num++;
		num2++;
		num++;
		winstack++;
		score = score + 10;
		return 1;
	}
	else
	{
		printf("\n Game Over");
		return 0;
	}

}

int main()
{
	init();
	start = clock();
	for (int i = 0; i < 20; i++)
	{
		if (Game() == 0)
		{
			return 0;
		}
		if (winstack == 10)
		{
			end = clock();
			printf("\n\n½Â¸®");
			printf("½ºÄÚ¾î : %f", score - (end - start)/1000);

			printf("\n\n 2015184026 Á¶¼º¹Î");
			return 0;
		}
	} //2015184026 Á¶¼º¹Î
	
}