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
	ListNode* node = (ListNode*)malloc(sizeof(ListNode)); //���θ������ ��� �ʱ�ȭ
	node->data = data; //���λ����� ��忡�ٰ� �޾ƿ� �����͸� ����ְ�
	if (head == NULL) // �Ű������� �޾ƿ� ����Ʈ��尡 NULL�� ����Ű�� ���� ��� �� ����Ʈ�� �ƿ� ���� ���
	{					//����� ��ũ�� ���� ����ġ�°� �ƴ϶� ��尡 NULL�� ���� ������ ���ϴ� ����? ���� ������ �ǹ��ϴ� ���ΰ� ���ο���
		head = node; //���� ��尡 �Ǹ�
		node->link = head; // ����� ��ũ�� ��带 ����Ų��
	}
	else
	{
		node->link = head->link; // �� �ۿ� ��尡 NULL�� �ƴ� ��Ȳ������ ����� ��ũ�� ����� ��ũ�� ���� �� ��
		head->link = node; //����� ��ũ�� ��带 ����Ű�� �����
	}
	return head; // ����� ��������͸� ��ȯ
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