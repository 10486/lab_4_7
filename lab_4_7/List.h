#pragma once
#include "aeroflot.h"
// Ёлемент списка с данными и ссылкой на следующий элемент
typedef struct node {
	struct node* next;
	Aeroflot* data;
}Node;
// ќдносв€зный список
typedef struct list {
	Node* head;
}List;
void append(List* list, Aeroflot* el);
void find_in_list(List* list, char* type);
