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
	printf("\n 오류발생 \n");
}

ListNode* insert_first(ListNode* head, element value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head; //헤드를 가르키게만듬
	head = p; //헤드를 p로 변경
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
	temp->expon = expon; //매개변수로 받은 값들은 임시로 만든 리스트노드에 우겨넣는중
	temp->link = NULL; //일단 널을 가르키게 만든다
	if (plist->tail == NULL) // 연결리스트의 개수가 헤드한개일 경우
	{
		plist->tail = temp;
		plist->head = temp; // 머리 꼬리 둘다 템프를 가르키게 만듬
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