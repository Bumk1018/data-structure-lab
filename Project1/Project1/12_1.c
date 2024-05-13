#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct ListNode {
	char data[4];
	struct ListNode* llink;
	struct ListNode* rlink;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}
int main(void) {
	linkedList_h* DL;
	listNode* p;

	DL = createLinkedList_h();
	printf("(1) ���� ���� ����Ʈ �����ϱ�! \n");
	printList(DL);

	printf("\n(2) ���� ���� ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertNode(DL, NULL, "��");
	printList(DL);

	printf("\n(3) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList(DL);

	printf("\n(4) ���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); insertNode(DL, p, "��");
	printList(DL);

	printf("\n(5) ���� ���� ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(DL, "��"); deleteNode(DL, p);
	printList(DL);

	getchar(); return 0;
}


