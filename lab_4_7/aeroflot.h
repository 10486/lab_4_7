#pragma once
#define DESTNATION_NAME_LENGTH 30 //длинна названи€ пункта назначени€
#define TYPE_OF_AIRCRAFT_NAME 20 // длинна названи€ типа самолета
// ќпределение структуры
typedef struct aeroflot
{
	char destination[DESTNATION_NAME_LENGTH];
	int number;
	char type_of_aircraft[TYPE_OF_AIRCRAFT_NAME];
}Aeroflot;
// ќбъ€вление функций св€занныху со структурой
void input_struct(Aeroflot* a);
void output_struct(Aeroflot* a);
char compare_by_destination(const Aeroflot* f, const Aeroflot* s);

