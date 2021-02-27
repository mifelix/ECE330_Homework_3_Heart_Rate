#include <iostream>
#include <string>
#include "THRCalc.h"
using namespace std;

int main() {
     //Strings are declared here
     string firstname = "", lastname = "";

     //The month, day, and year are declared 
     int mm, dd, yy;
     int flag = 0;

     //keeps repeating until you type stop 3X
     do {
          int minTarget, maxTarget;
          //Asking for firstname,lastname,month,day,year         
          cout << "Enter Your Name & Date Of Birth, please (first name, last name, month, day, year): ";
          cin >> firstname >> lastname >> mm >> dd >> yy;
          HeartRates person1(firstname, lastname, mm, dd, yy);
          cout << "Your Name Is: " << person1.getFirstName() << " " << person1.getLastName() << ". Your Birthday Is: " << person1.getBirthMonth() << "/"
		  << person1.getBirthDay() <<"/" << person1.getBirthYear() << endl;
		  cout << "You Are " << person1.getAge() << " Years Old." << endl;
		  //Max Heart Rate is acquired
          cout << "Your Max Heart Rate Is: " << person1.getMaximumHeartRate() << endl;
          cout << "Your Target Heart Rate Is: ";
          person1.getTargetHeartRate(minTarget, maxTarget);
          cout << minTarget << " - " << maxTarget;
          cout << endl;

          if((firstname.compare("stop")) == 0) {
               flag=1;
               break;
			}
		}
	while(true);
}