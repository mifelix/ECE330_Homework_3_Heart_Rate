#include<string>
using namespace std;

class HeartRates {

	public:
		HeartRates(string firstname, string lastname, int mm, int dd, int yy);
		void setFirstName(string firstname);
		string getFirstName();
		void setLastName(string lastname);
		string getLastName();
		void setBirthMonth(int mm);
		int getBirthMonth();
		void setBirthDay(int dd);
		int getBirthDay();
		void setBirthYear(int yy);
		int getBirthYear();
		int getAge();
		int getMaximumHeartRate();
		void getTargetHeartRate(int &,int &);  

//Declaration of variables
	private:
		string firstName;
		string lastName;
		int Birthday;
		int Birthmonth;
		int Birthyear;
};