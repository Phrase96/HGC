#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef int element;

typedef struct ListNode { //����ü ����Ʈ��带 ����
	element data; // int data�� ����
	element pos = 0;
	struct ListNode* Link; // ����ü �ȿ� �ڱ��ڽ��� �о��ִ� �����͸� ����
}ListNode;


int main()
{
	int x, y;
	cout << "�� �� ���� �Է�: ";
	cin >> x, y;
	
	ListNode* head = NULL; // ����Ʈ��� Ÿ���� �����͸� ������ NULL�� �ʱ�ȭ

	head = (ListNode*)malloc(sizeof(ListNode)); // ��忡�ٰ� ����Ʈ��� �������� �����͸� �Ҵ� �д� ����� ����Ʈ��� ������

	head->data = 10;
	head->Link = NULL;


	ListNode* p = NULL; // ����Ʈ��� Ÿ���� �����͸� ������ NULL�� �ʱ�ȭ

	p = (ListNode*)malloc(sizeof(ListNode)); // ��忡�ٰ� ����Ʈ��� �������� �����͸� �Ҵ� �д� ����� ����Ʈ��� ������

	p->data = 10;
	p->Link = NULL;

	head->Link = p;

	return 0;
}


void insert(ListNode* p)
{
	p->Link = NULL;
	

}


