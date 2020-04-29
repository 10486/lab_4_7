#include "List.h"
#include <stdio.h>
#include <malloc.h>
void append(List* list, Aeroflot* el) {
	Node* tmp = calloc(1, sizeof(Node));
	tmp->data = el;
	// Вставляем элемент если список пуст
	if (list->head == NULL) {
		list->head = tmp;
	}
	else {
		// Вставляем эелмент если первый элемент больше нового или равен ему
		if (compare_by_destination(el, list->head->data) < 0) {
			tmp->next = list->head;
			list->head = tmp;
		}
		else {
			// Идем по списку пока не дойдем до конца или не найдем элемет больше нового
			Node* current = list->head->next;
			if (current != NULL) {
				while (compare_by_destination(el, current->data) >= 0) {
					current = current->next;
					if (current->next == NULL) {
						current->next = tmp;
						return;
					}
				}
			}
			list->head->next = tmp;
		}
	}
}
void find_in_list(List* list, char* type) {
	char flag = 0;
	// крутой проход по списку в цикле for
	for (Node* tmp = list->head; tmp != NULL; tmp = tmp->next)
	{
		// Выводим если мы нашли нужный элемент 
		if (!strcmp(tmp->data->type_of_aircraft, type)){
			output_struct(tmp->data);
			flag = 1;
		}
	}
	if (!flag) {
		printf("Самолетов такого типа нет\n");
	}

}