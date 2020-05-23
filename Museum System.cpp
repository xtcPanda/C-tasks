#include <iostream>
#include <stdlib.h>

using namespace std;


struct Address {
    string City;
    int stNo;
};

struct MuseumType {
    long ID;
    string Name;
    float avgTicketPrice;
};

struct Museum {
    long ID;
    string Name;
    int phNo;
    Address address;
    string dayOff;
    MuseumType type;
}M[10];



void clear();

void FillData();
void OutputData();

int main(){

	int ch;

	do{
		clear();
		cout << "\n\n\t***********************************\n";
		cout << "\t      *Museum Database System*\n";
		cout << "\t***********************************";


		cout << "\n\n\t\tMAIN MENU:";
    cout << "\n\n\t[1] Fill Data";
    cout << "\n\t[2] Output Data";
    cout << "\n\t[3] Search by Museum's Historical";
    cout << "\n\t[4] Search by Museum's Name in cairo";
    cout << "\n\t[5] Average Ticket Price bigger than 100 L.E";
    cout << "\n\t[6] Search by Working on Fridays";
    cout << "\n\t[7] Search by Museum's ID";
    cout << "\n\t[8] Search by Museum's Names";
    cout << "\n\t[9] EXIT";
    cout << "\n\n\tENTER YOUR CHOICE:";
		cin >> ch;

		clear();

		switch(ch){
			case 1:
				FillData();
				break;
			case 2:
				OutputData();
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(1);
				break;
			default:
				cout << "Invalid Choice try again.." << endl;
				break;
		}
		cout << "Press Enter to continue" << endl;
				cin.get();
				cin.ignore(500, '\n');
	}while(true);
}

void clear()
{
  cout << "\033[2J\033[1;1H";
}
// cout << "Press Enter to continue" << endl;
//   cin.ignore(1000000000, '\n');
// 	clear();

void FillData(){
	clear();
	
	int i;
	cout << "**Warning** : DO NOT ENTER any un Expected values !" << endl;
	cout << "\n\nEnter the record number [0 - 9]: ";
	cin >> i;


	clear();
	cout << "\n\nEnter the Museum's ID : ";
	cin >> M[i].ID;

	clear();
	cout << "\n\nEnter the Museum's Name : ";
	cin >> M[i].Name;

	clear();
	cout << "\n\nEnter the Museum's Phone Number : ";
	cin >> M[i].phNo;

	clear();
	cout << "\n\nEnter the Museum's Address : ";
	cout << "\nCity : ";
	cin >> M[i].address.City;
	cout << "\nStreet Number : ";
	cin >> M[i].address.stNo;

	clear();
	cout << "\n\nEnter the Museum's Day Off : ";
	cin >> M[i].dayOff;

	clear();
	cout << "\n\nEnter the Museum's type  : ";
	cout << "\nID : ";
	cin >> M[i].type.ID;
	cout << "\nName : ";
	cin >> M[i].type.Name;
	cout << "\nAverage Ticket Price : ";
	cin >> M[i].type.avgTicketPrice;
}

void OutputData(){
	cout << "ID" << "  " << "Name" << "  " << "Phone" << "  " << "Address" << "  " << "Day Off" << "  " << "Type" << endl;
	cout << "\t\t\t\t" << "City,stNo" << "\t\t" << "ID,Name,AvgTicket" <<endl;
	//not a good way but works
	for(int i = 0 ; i < 10 ; i++){
		// cuz c++ ig doesnt hv undefiend or null checking for variables i escaped it but using value of 0 for id will break it ig
		if(M[i].ID){
			cout << M[i].ID << "  " << M[i].Name << "  " << M[i].phNo << "  " << M[i].address.City << ", " << M[i].address.stNo << "  " << M[i].type.ID << ", " << M[i].type.Name << ", " << M[i].type.avgTicketPrice << endl;
		}
	}
}