#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct element
{
	char name[100];
	int data = 0;
}element;



typedef struct ListNode
{
	int coef;
	int expon;
	element data;
	ListNode* link;
}; ListNode;

typedef struct ListType
{
	int size;
	ListNode* head;
	ListNode* tail;
}ListType;

void error()
{
	printf("\n �����߻� \n");
}

ListNode* insert_first(ListNode* head, element value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head; //��带 ����Ű�Ը���
	head = p; //��带 p�� ����
	return head;
}

void print_list(ListNode* head)
{
	for (ListNode* p = head; p != NULL; p = p->link)
		printf("%s->", p->data.name);
	printf("NULL\n");
}

ListNode* reverse(ListNode* head)
{
	ListNode* p, * q, * r;

	p = head;
	q = NULL;

	while (p != NULL)
	{
		r = q;

		q = p;
		p = p->link;
		q->link = r;
	}

	return q;
}

ListNode* FindEnd(ListNode* p)
{
	while (p->link != NULL)
	{
		p = p->link;
	}
	return p;
}

int FindSize(ListNode* p)
{
	int size=0;

	while (p->link != NULL)
	{
		p = p->link;
		size++;
	}

	return size;
}

void insert_last(ListType*plist, int coef, int expon)
{
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
	if (temp == NULL)
	{

		error();

	}

	temp->coef = coef;
	temp->expon = expon; //�Ű������� ���� ������ �ӽ÷� ���� ����Ʈ��忡 ��ִܳ���
	temp->link = NULL; //�ϴ� ���� ����Ű�� �����
	if (plist->tail == NULL) // ���Ḯ��Ʈ�� ������ ����Ѱ��� ���
	{
		plist->tail = temp;
		plist->head = temp; // �Ӹ� ���� �Ѵ� ������ ����Ű�� ����
	}
	else
	{
		plist->tail->link = temp;
		plist->tail = temp;
	}

	plist->size++;
	


}

ListType* create()
{
	ListType* plist = (ListType*)malloc(sizeof(ListType));
	plist->size = 0;
	plist->tail = NULL; 
	plist->head = NULL;
	return plist;
}

int main(void)
{
	ListNode* head = NULL;
	ListType* temp = NULL;
	
	temp = create();

	
	insert_last(temp, 1, 1);
	insert_last(temp, 1, 1);

	

	element data;

	strcpy_s(data.name, "APPLE");
	cout <<endl << data.name[0] << endl;
	head = insert_first(head, data);
	print_list(head);

	strcpy_s(data.name, "KIWI");
	head = insert_first(head, data);
	print_list(head);

	cout << temp->size << endl;

	return 0;


}