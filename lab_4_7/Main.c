#define _crt_secure_no_warnings
#include "aeroflot.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <windows.h>
// ��� ������ ��������� ��������������� ���� ���� Main.c ���� Main_list.c (��� IDE)
// ��� �������� ����������� ������ ������������� ���� ���� Main.c ���� Main_list.c
void main() {
	setconsoleoutputcp(1251);
	setconsolecp(1251);
	int tmp, counter = 0;
	Aeroflot* arr[15];
	do
	{
		// �������� ������ � ������ ���������
		arr[counter] = malloc(sizeof(Aeroflot));
		input_struct(arr[counter]);
		counter++;
		printf("���������� ���� (1-��, 0-���)\n");
		scanf("%d", &tmp);
	} while (tmp);
	// ���������
	// arr - ��������� �� ������ �������
	// counter - ���-�� ���������
	// sizeof(aeroflot*) - ������ ���������
	// compare_by_destination - ������� ��� ���������
	qsort(arr, counter, sizeof(Aeroflot*), compare_by_destination);
	char flag = 0, input[TYPE_OF_AIRCRAFT_NAME];
	printf("������� �������� ���� ��������: ");
	scanf("%s", input);
	for (size_t i = 0; i < counter; i++)
	{
		// ������� ������ ����������� �� ���� �������� ��������
		if (strcmp(arr[i]->type_of_aircraft, input) == 0) {
			output_struct(arr[i]);
			flag = 1;
		}
	}
	if (!flag) {
		printf("��������� ������ ���� ���\n");
	}
}