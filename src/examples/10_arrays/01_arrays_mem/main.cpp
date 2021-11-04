#include "arrays_mem.h"

int main() 
{	
	//stack_array();
	//array_months();
	//arrays_and_pointers();

	/*const int SIZE = 3;
    int month_numbers[SIZE] {1,2,3};

	display_array(month_numbers, SIZE);*/

	int times_table[ROWS][COLS];

	populate_times_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	return 0;

}