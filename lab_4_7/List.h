#pragma once
#include "aeroflot.h"
// ������� ������ � ������� � ������� �� ��������� �������
typedef struct node {
	struct node* next;
	Aeroflot* data;
}Node;
// ����������� ������
typedef struct list {
	Node* head;
}List;
void append(List* list, Aeroflot* el);
void find_in_list(List* list, char* type);
