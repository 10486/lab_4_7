#define _CRT_SECURE_NO_WARNINGS
#include "aeroflot.h"
#include "List.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <Windows.h>
void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int counter = 0, tmp;
	List* list =calloc(1, sizeof(List));
	Aeroflot* t;
	do
	{
		// �������� ������ � ������ ���������
		t = malloc(sizeof(Aeroflot));
		input_struct(t);
		// ��������� � ������
		append(list, t);
		counter++;
		printf("���������� ���� (1-��, 0-���)\n");
		scanf("%d", &tmp);
	} while (tmp);
	char flag = 0, input[TYPE_OF_AIRCRAFT_NAME];
	printf("������� �������� ���� ��������: ");
	scanf("%s", input);
	find_in_list(list, input);
}