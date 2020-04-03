#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define 미로사이즈 20
bool 벽판정();


enum {
	위,
	오른쪽,
	아래,
	왼쪽

};

int 미로배열[미로사이즈][미로사이즈];
int 위치가로 = 0;
int 위치세로 = 0;
int 방향 = 10;

void 미로초기화()
{
	int 반복 = 0;
	int 가로막다른길 = 4;

	for (int i = 0; i < 미로사이즈; i++)
	{
		for (int j = 0; j < 미로사이즈; j++)
		{
			미로배열[i][j] = 0;
		}
	}

	for (int j = 5; j < 15; j++)
	{
		for (int i = rand() % 10 + 5; i < rand() % 5 + 15; i++)
		{
			미로배열[i][가로막다른길] = 1;
		}
		가로막다른길 = 가로막다른길 + 4;
	}
	

	while (true)
	{
		if (벽판정())
		{
			break;
		}
		방향 = rand() % 2 + 1;
		switch (방향)
		{
			case 위:
			{
				if (위치세로 != 0)
				{
					위치세로--;
					미로배열[위치가로][위치세로] = 2;
					
				}
				break;
			}
			case 오른쪽:
			{
				if (위치가로 != 미로사이즈)
				{
					위치가로++;
					미로배열[위치가로][위치세로] = 2;
					
				}
				break;
			}
			case 아래:
			{
				if (위치세로 != 미로사이즈)
				{
					위치세로++;
					미로배열[위치가로][위치세로] = 2;
					
				}
				break;
			}
			case 왼쪽:
			{
				if (위치가로 != 0)
				{
					위치가로--;
					미로배열[위치가로][위치세로] = 2;
					
				}
				break;
			}
		}
		반복++;
		if (반복 == 100)
		{
			break;
		}
		
	}

	미로배열[미로사이즈][미로사이즈] = 2;
}

bool 벽판정()
{
	if (위치세로 == 미로사이즈 -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void 방향진행()
{
	while (true)
	{
		방향 = rand() % 4;
		switch (방향)
		{
		case 위:
		{
			if (위치세로 != 0)
			{
				위치세로--;
			}
			break;
		}
		case 오른쪽:
		{
			if (위치가로 != 미로사이즈)
			{
				위치가로++;
			}
			break;
		}
		case 아래:
		{
			if (위치세로 != 미로사이즈)
			{
				위치세로++;
			}
			break;
		}
		case 왼쪽:
		{
			if (위치가로 != 0)
			{
				위치가로--;
			}
			break;
		}
		}
	}
}

void 미로출력()
{
	for (int i = 0; i < 미로사이즈; i++)
	{
		for (int j = 0; j < 미로사이즈; j++)
		{
			if (미로배열[i][j] == 0)
			{
				printf("■");
			}
			else if (미로배열[i][j] == 1)
			{
				printf("○");
			}
			else if (미로배열[i][j]== 2)
			{
				printf("◎");
			}

		}
		printf("\n");
	}
	
}

int main()
{
	미로초기화();
	미로출력();

	printf("         \n\n2015184026 조성민\n\n");

	return 0;
}