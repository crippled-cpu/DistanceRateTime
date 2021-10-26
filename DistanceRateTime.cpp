// </> = divide <*> = multiply 

#include <iostream>
using namespace std;

int main()
{
	
	double speed = 0;
	double distance = 0;
	double time = 0;
	
	speed = distance / time;
	time = distance / speed;
	distance = time * speed;
	
	printf("Provid speed, distance, and time\n");
	printf("\n");

	cout << "Enter distance traveled in KM: ";
	cin >> distance;
	
	cout << "Enter speed in KPH here: ";
	cin >> speed;
	
	cout << "Enter the time traveled HRS: ";
	cin >> time;
	
	printf("It will take % .2f hours to go % .2f KM at % .2f KPH \n", speed, distance, time);

	cout << "\n Enter Distance Traveled in KM: ";
	cin >> distance;
	
	cout << "Enter the time traveled HRS: ";
	cin >> time;
	
	printf("It will take %.2f hours to go % .2f KM at %.2f KPH \n", speed, distance, time);
	cout << "\nEnter the time traveled HRS: ";
	
	cin >> time;
	
	cout << "Enter the speed in KPH: ";
	cin >> speed;
	
	printf("It will take %.2f hours to go % .2f KM at %.2f KPH \n", speed, distance, time);
	printf("\n");
	
	
	system("pause");
	return 0;
}
