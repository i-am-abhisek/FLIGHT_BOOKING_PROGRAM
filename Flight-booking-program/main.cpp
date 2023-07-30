#include <iostream>
#include <fstream>
#include "Booking.h"
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std ;

int main (){

Booking b ;
int menu_choice ;
do{
cout << "\n\n\n    _________________[ Welecom to Bengaluru Airport]__________________\n"
     << "                                 MAIN MENU                      \n"
     << "                               ENTER YOUR CHOICE                   \n"
     << "                              PRESS 1 FOR BOOKING              \n"
     << "                     PRESS 2 FOR DISPLAY YOUR BOOKING DETAILS        \n"
     << "                        PRESS 3 FOR UPDATE YOUR BOOKING         \n"
     << "                        PRESS 4 FOR REMPVE YOUR BOOKING          \n ";
cin >> menu_choice ;
system("cls");
switch (menu_choice){
	case 1 : b.menuAirlines();
	break ;
	case 2 : b.show();
	break ;
	case 3 : b.update();
	break ;
	case 4 : b.remove();
	break ;
	default :
		cout << "Invalid Choice! Try Again .. ";
		Sleep(1500);
		system("cls");
}
}while (menu_choice < 1 || menu_choice > 3);
//b.show ();

/*int lines = 0 ;
string line ;
ifstream iff ("Booking.txt");
while (getline(iff , line ))
lines ++ ;
cout <<lines ;*/
}


