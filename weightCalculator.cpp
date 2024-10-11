//Provides input and output 
#include <iostream>

//Using this so i dont need to do "std::" everytime i wanna do either cout or cin
using namespace std;

int main(){ //Main class 
	bool run = true; //Keeps the program running
	do {
		char option;
		cout << "Do you want to calculate the weight (in kg) from Mars to Earth (M),Earth to Mars (E) or turn off the program (X) ?" << endl;
		cin >> option;
		char converted_option = toupper(option); //Makes sure the option entered works regardless if its lowercase or uppercase
		double earthKG, marsKG;
		switch (converted_option) {
			case 'M':  //Converts Mars to Earth
				cout <<"Enter the weight of your object in kg" << endl;
				cin >> marsKG;
				earthKG = marsKG / 0.38; //Calculation for figuring out the mass in 
				cout << marsKG << " in earth would be: " << earthKG << endl;
				break;
			case 'E': //Converts Earth to mars 
				cout << "enter the weight of your object in kg" << endl;
				cin >> earthKG;
				marsKG = earthKG * 0.38; //Calculation for figuring out the mass in mars
				cout << earthKG << " in mars would be: " <<  marsKG << endl;
				break;
			case 'X': //Program closes
				cout << "Program shutting off..." << endl;
				run = false;
				break;
			default : //Incase the user inputs something apart from m and e 
				cout << "Input does not work :(" << endl;
		}
	} while (run); //Keeps the menu runng
}
