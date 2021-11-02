#include "temperature_data.h"
#include <iostream>
#include <vector>

using std::cout; using std::vector;

int main() 
{
	vector<Temperature> temps{Temperature(9, 99.9), Temperature(10, 98.5), 
	                          Temperature(11, 100.1)};

	TemperatureData data;
	data.save_temps(temps);

	vector<Temperature> in_temps;

	in_temps = data.get_temps();

	for(auto temp: in_temps)
	{
		cout<<temp.get_hour()<<" "<<temp.get_reading()<<"\n";
	}

	return 0;
}