#include<iostream>
#include <string>
#include "THRCalc.h"
using namespace std;

HeartRates::HeartRates(string firstname, string lastname, int mm, int dd, int yy) {
     setFirstName(firstname);
     setLastName(lastname);
     setBirthMonth(mm);
     setBirthDay(dd);
     setBirthYear(yy);
}

void HeartRates::setFirstName(string firstname) {
     firstName = firstname;
}

string HeartRates::getFirstName() {
     return firstName;
}

void HeartRates::setLastName(string lastname) {
     lastName = lastname;
}

string HeartRates::getLastName() {
     return lastName;
}

void HeartRates::setBirthMonth(int mm) {
     Birthmonth = mm;
}

int HeartRates::getBirthMonth() {
     return Birthmonth;
}

void HeartRates::setBirthDay(int dd) {
     Birthday = dd;
}

int HeartRates::getBirthDay() {
     return Birthday;
}

void HeartRates::setBirthYear(int yy) {
     Birthyear = yy;
}

int HeartRates::getBirthYear() {
     return Birthyear;
}

//Here is getAge()

int HeartRates::getAge() {
     //Declaration of variables
     int month, day, year;
     
	 time_t now = time(0);
     tm *ltime = localtime(&now);
     day= ltime->tm_mday;
     month= 1 + ltime->tm_mon;
     year= 1900 + ltime->tm_year;
     int change = 0;

     if (getBirthMonth() > month) {
          change = -1;
     }

     if ((getBirthMonth() == month) && (getBirthDay() > day)) {
          change = -1;
     }

     return (year - getBirthYear() + change);

}

//Heartrate calculation

int HeartRates::getMaximumHeartRate() {
     return (220 - getAge());
}

void HeartRates::getTargetHeartRate(int &minTarget, int &maxTarget) {
     int max;
     max = getMaximumHeartRate();
     minTarget = (max * 50 / 100);
     maxTarget = (max * 85 / 100);
}