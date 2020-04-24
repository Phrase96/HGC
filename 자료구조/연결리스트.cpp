#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef int element;

typedef struct ListNode { //구조체 리스트노드를 선언
	element data; // int data를 선언
	element pos = 0;
	struct ListNode* Link; // 구조체 안에 자기자신을 읽어주는 포인터를 생성
}ListNode;


int main()
{
	int x, y;
	cout << "두 개 정수 입력: ";
	cin >> x, y;
	
	ListNode* head = NULL; // 리슽트노드 타입의 포인터를 생성후 NULL로 초기화

	head = (ListNode*)malloc(sizeof(ListNode)); // 헤드에다가 리스트노드 사이즈의 포인터를 할당 읽는 방법은 리스트노드 포인터

	head->data = 10;
	head->Link = NULL;


	ListNode* p = NULL; // 리슽트노드 타입의 포인터를 생성후 NULL로 초기화

	p = (ListNode*)malloc(sizeof(ListNode)); // 헤드에다가 리스트노드 사이즈의 포인터를 할당 읽는 방법은 리스트노드 포인터

	p->data = 10;
	p->Link = NULL;

	head->Link = p;

	return 0;
}


void insert(ListNode* p)
{
	p->Link = NULL;
	

}


