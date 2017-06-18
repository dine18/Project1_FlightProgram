
//This only done partly for Hotel room booking//

#include<iostream>
#include <string>
using namespace std;

void data(int Sprice[],int Rprice[])
{
	char x,y;
	cout<<endl;
	cout<<"***AirLine Seats And Hotel Rooms Booking List***"<<endl;
	cout<<endl;
	cout<<"AirLine Seats Booking"<<endl;
	cout<<"(1).Seat Type A = ";
	cin>>Sprice[0];
	cout<<"(2).Seat Type B = ";
	cin>>Sprice[1];
	cout<<"(3).Seat Type C = ";
	cin>>Sprice[2];
	cout<<"(1).Room Type A = ";
	cin>>Rprice[0];
	cout<<"(2).Room Type B = ";
	cin>>Rprice[1];
	cout<<"(3).Room Type C = ";
	cin>>Rprice[2];
	cout<<"Enter Seat Type: ";
	cin>>x;
	cout<<"Enter Room Type: ";
	cin>>y;
	

	//To check the values in array
	/*for(int i=0;i<3;i++)
	{
		cout<<Rprice[i];
	}*/
}

void seats()
{ 
	cout<<"(1).Seat Type A: ";

	cout<<"(2).Seat Type B: ";
	
	cout<<"(3).Seat Type C: ";
	
}

void rooms()
{
	cout<<"(1).Room Type A: ";
	
	cout<<"(2).Room Type B: ";
	
	cout<<"(3).Room Type C: ";

}
void available()
{
string date;
		cout << "Enter date ";
		cin >> date;
		cout << "Date is " << date << "\n";
		
		switch ()
		{
		case 1:cout<<"Seats Available"<<endl;
			seats();
			break;
		case 2:cout<<"Rooms Available"<<endl;
			rooms();
			break;
		default:cout<<endl;
		}
	

}
int main()
{
	int Sprice[3];
	int Rprice[3];	
	data(Sprice,Rprice);
	available();
return 0;
}