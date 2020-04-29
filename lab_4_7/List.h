#pragma once
#include "aeroflot.h"
// Элемент списка с данными и ссылкой на следующий элемент
typedef struct node {
	struct node* next;
	Aeroflot* data;
}Node;
// Односвязный список
typedef struct list {
	Node* head;
}List;
void append(List* list, Aeroflot* el);
void find_in_list(List* list, char* type);
