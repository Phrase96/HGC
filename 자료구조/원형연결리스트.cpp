#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct element
{
	int value;
};

typedef struct ListNode
{
	element data;
	ListNode* link;
};

void createnode(ListNode* temp, element data)
{
	ListNode* p;
	p = (ListNode*)malloc(sizeof(ListNode));

	p->link = NULL;
	temp->link = p;


}

ListNode* insert_first(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode)); //새로만들어진 노드 초기화
	node->data = data; //새로생성된 노드에다가 받아온 데이터를 집어넣고
	if (head == NULL) // 매개변수로 받아온 리스트노드가 NULL을 가르키고 있을 경우 즉 리스트가 아예 없는 경우
	{					//헤드의 링크가 널을 가르치는게 아니라 헤드가 NULL일 경우는 무엇을 뜻하는 거지? 최초 생성을 의미하는 것인가 메인에서
		head = node; //헤드는 노드가 되며
		node->link = head; // 노드의 링크는 헤드를 가르킨다
	}
	else
	{
		node->link = head->link; // 그 밖에 헤드가 NULL이 아닌 상황에서는 노드의 링크를 헤드의 링크와 같게 한 후
		head->link = node; //헤드의 링크를 노드를 가르키게 만든다
	}
	return head; // 변경된 헤드포인터를 반환
}

ListNode* insert_last (ListNode * head, element data)
{
	ListNode * node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL)\
	{
		head = node;
		node->link = head;
	}
	else
	{
		node->link = head->link;
		head->link = node;
		head = node;

	}
	return head;
}

int main()
{
	ListNode* head;
	head = NULL;
	element data;
	data.value = 10;
	insert_first(head, data);


}