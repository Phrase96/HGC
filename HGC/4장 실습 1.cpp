#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//ifstream fp;
	////FILE* fp;
	//
	//string in;
	//
	//
	//char val[512];
	//
	//fp.open("filenmae.txt", ios::binary);
	////fp = fopen("filenmae.txt", "rb");
	//
	//	fp.read((char*)val, 512);
	//	//fscanf(fp, "%s", &val);
	//	//printf("%d", val);
	//	//fp++;
	//
	//	for (int i = 0; i < 512; ++i)
	//	{
	//		printf("%c", val[i]);
	//	}
	//

	FILE* fp;
	int a[10], b[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand();
	}


	printf("원본파일 : ");
	for (int i = 0; i < 10; i++)
	{
		printf(" %d", a[i]);
	}
	

	fp = fopen("filename.txt", "w");
	if (fp != NULL)
	{
		fwrite(a, sizeof(int), 10, fp);
		fclose(fp);
	}

	fp = fopen("filename.txt", "r");
	if (fp != NULL)
	{
		fread(b, sizeof(int), 10, fp);
		printf("이진 파일");
		printf("\n\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d", b[i]);
		}
	}

	

	

	
	//int fclose(FILE * fp);
	return 0;
}