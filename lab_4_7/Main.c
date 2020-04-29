#define _crt_secure_no_warnings
#include "aeroflot.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h>
// Для работы полностью закоментировать либо файл Main.c либо Main_list.c (для IDE)
// Для простого компилятора просто компилировать либо файл Main.c либо Main_list.c

void main() {
	setconsoleoutputcp(1251);
	setconsolecp(1251);
	printf("Названия писать слитно или через '_'\n");
	int tmp, counter = 0;
	Aeroflot* arr[15];
	do
	{
		// выделяем память и вводим структуру
		arr[counter] = malloc(sizeof(Aeroflot));
		input_struct(arr[counter]);
		counter++;
		printf("продолжить ввод (1-да, 0-нет)\n");
		scanf("%d", &tmp);
	} while (tmp);
	// сортируем
	// arr - указатель на начало массива
	// counter - кол-во элементов
	// sizeof(aeroflot*) - размер элементов
	// compare_by_destination - функция для сравнения
	qsort(arr, counter, sizeof(Aeroflot*), compare_by_destination);
	char flag = 0, input[TYPE_OF_AIRCRAFT_NAME];
	printf("введите название типа самолета: ");
	scanf("%s", input);
	for (size_t i = 0; i < counter; i++)
	{
		// выводим только совпадающие по типу самолета стуктуры
		if (strcmp(arr[i]->type_of_aircraft, input) == 0) {
			output_struct(arr[i]);
			flag = 1;
		}
	}
	if (!flag) {
		printf("самолетов такого типа нет\n");
	}
}