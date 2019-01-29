#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	//declaring variables
	float minute, cost, pri, hour;
	char opt;
	bool Input = false;
	int count = 0;

	//loading animation
	cout << "\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t";
	cout << "Loading. ";
	for (count; count < 12; ++count)
	{
		system("color 0a");
		cout << ". ";
		for (int j = 0; j <= 100000000.7; j++)
			;
	}
	system("cls");
	system("color 0F");

	//introduction
	cout << "\n\n\n\n\n\n\n\n";
	cout << "\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
	cout << "\t\t\xdb                                               \xdb\n";
	cout << "\t\t\xdb       =============================           \xdb\n";
	cout << "\t\t\xdb        VEHICLE PARKING MANAGEMENT             \xdb\n";
	cout << "\t\t\xdb                 SYSTEM                        \xdb\n";
	cout << "\t\t\xdb       =============================           \xdb\n";
	cout << "\t\t\xdb                                               \xdb\n";
	cout << "\t\t\xdb        The Universty  Of Faisalabad           \xdb\n";
	cout << "\t\t\xdb                                               \xdb\n";
	cout << "\t\t\xdb                       By :- Umair Abbas       \xdb\n";
	cout << "\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n";
	getch();
	system("cls");

	//implimenting loops and conditions
	while (true)
	{

		//do while loop for error handling
		do
		{
		//getting input from user
		//options for transaction
		jump:
			cout << "\n\t\t----Enter the option----" << endl;
			cout << "\t_______________________________" << endl;
			cout << "\t\tNo.\tOption            " << endl;
			cout << "\t\tV   -->\tVehicle" << endl;
			cout << "\t\tP   -->\tfees" << endl;
			cout << "\t_______________________________" << endl;
			cout << "\nOption :";
			cin >> opt;

			//implementing conditions
			if ((opt == 'p') or (opt == 'P'))
			{
				Input = true;
				system("cls");
				cout << "Parking fees :" << endl;
				cout << "************************************" << endl;
				cout << "*                                  *" << endl;
				cout << "*\tCAR       - RS.20/Hour     *" << endl;
				cout << "*                                  *" << endl;
				cout << "*\tBUS       - RS.30/Hour     *" << endl;
				cout << "*                                  *" << endl;
				cout << "*\tTruck     - RS.40/Hour     *" << endl;
				cout << "*                                  *" << endl;
				cout << "************************************" << endl;
				getch();
				system("cls");
				goto jump; //goto to options fees & vehicles
			}
			else if ((opt == 'v') or (opt == 'V'))
			{
				system("cls");
				Input = true;
				//option for vehicle type
				cout << "\n\t\t<<<<<<<<+ Vehicle +>>>>>>>" << endl;
				cout << "\t_______________________________" << endl;
				cout << "\t\tNo.\tVehicle            " << endl;
				cout << "\t\tA   -->\t  CAR              " << endl;
				cout << "\t\tB   -->\t  BUS              " << endl;
				cout << "\t\tC   -->\t  TRUCK            " << endl;
				cout << "\t_______________________________" << endl;
				//getting user input for car or bus or truck
				cout << "\nOption :";
				cin >> opt;
				if ((opt == 'a') or (opt == 'A'))
				{
					Input == true;
					//calculation for car fees
					system("cls");
					cout << "\n\t__You have selected CAR__" << endl;
					cout << "\nPlease insert  Your parking period (in minute):";
					cin >> minute;
					//formula
					hour = minute / 60;
					cost = hour * 20;
        			//float b=(int)hour%60;
					cout << "\nYour total"<<endl;
					cout<<"\tPeriod : \n \t ==>  " << hour<<"h." << endl;
					cout<<"\tCost : \n \t ==>  RS." << cost << endl;
					getch();
				}
				else if ((opt == 'b') or (opt == 'B'))
				{
					Input == true;
					//calculation for bus fees
					system("cls");
					cout << "\n\t__You have selected BUS__ " << endl;
					cout << "\nPlease insert  Your parking period (in minute):";
					cin >> minute;
					//formula
					hour = minute / 60;
					cost = hour * 30;
					cout<<"\tPeriod : \n \t ==>  " << hour<<"h." << endl;
					cout<<"\tCost : \n \t ==>  RS." << cost << endl;
					getch();
				}
				else if ((opt == 'c') or (opt == 'C'))
				{
					Input == true;
					//calculation for truck fees
					system("cls");
					cout << "\n\t__You have selected TRUCK__ " << endl;
					cout << "\nPlease insert  Your parking period (in minute):";
					cin >> minute;
					//formula
					hour = minute / 60;
					cost = hour * 40;
					cout<<"\tPeriod : \n \t ==>  " << hour<<"h." << endl;
					cout<<"\tCost : \n \t ==>  RS." << cost << endl;
					getch();
				}
				else
				{
					//error handling
					cout << "Enter invalid option " << endl;
				}
			}
			else
			{
				//error handling
				system("cls");
				cout << "\n\n\n\n\n\n\n\n";
				cout << "\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
				cout << "\t\t\xdb       =============================        \xdb\n";
				cout << "\a\t\t\xdb              INVALID INPUT                 \xdb\n";
				cout << "\t\t\xdb       =============================        \xdb\n";
				cout << "\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n";
				getch();
				system("cls");
			}
		} while (Input == false);

		//user input for termination
		system("cls");
		cout << "\n";
		cout << "\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
		cout << "\t\t\xdb    =====================================      \xdb\n";
		cout << "\a\t\t\xdb     DO YOU WANT YO MAKE ANOTHER ENTRY ?       \xdb\n";
		cout << "\t\t\xdb        Y.YES                  N.NO            \xdb\n";
		cout << "\t\t\xdb    =====================================      \xdb\n";
		cout << "\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n";

		cout << "==>";
		cin >> opt;
		if ((opt == 'n') or (opt == 'N'))
		{
			return false;
		}

		system("cls");
	}

	return 0;
}