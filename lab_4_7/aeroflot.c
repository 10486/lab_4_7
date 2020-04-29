#define _CRT_SECURE_NO_WARNINGS
#include "aeroflot.h"
#include <stdio.h>
#include <string.h>
// ���� ������ � ���������
void input_struct(Aeroflot* a) {
	printf("������� ����� ����������: ");
	scanf("%s",a->destination);
	printf("������� ��� ��������: ");
	scanf("%s",a->type_of_aircraft);
	printf("������� ����� �����: ");
	scanf("%d", &(a->number));
}
// ����� ��������� � �������
void output_struct(const Aeroflot* a) {
	printf("-------------------------------\n");
	printf("����� �����: %d\n", a->number);
	printf("����� ����������: %s\n", a->destination);
}
// ��������� �� ������ ���������� �� ��������
// ������ ���� ���� ������ ����� ���������� ������ (��� > ���)
// 0 ���� �����
// ������ ���� ���� ������ ����� ���������� ������
char compare_by_destination(const Aeroflot* f, const Aeroflot* s) {
	return strcmp(f->destination, s->destination);
}