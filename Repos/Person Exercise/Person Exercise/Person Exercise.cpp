
#include <iostream>
using namespace std;

class clsPerson {

private:

	short _ID = 10;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:


	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone) {

		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}


	short ID() {
	return _ID;
	}

	void setFirstName(string FirstName) {

		_FirstName = FirstName;
	}

	string FirstName() {
		return _FirstName;
	}

	void setLastName(string LastName) {

		_LastName = LastName;
	}

	string LastName() {
		return _LastName;
	}


	string FullName() {
		return _FirstName + " " + _LastName;
	}

	
	void setEmail(string Email) {

		_Email = Email;
	}


	string Email() {

	 return	_Email;
	}

	void setPhone(string Phone) {

		_Phone = Phone;
	}


	string Phone() {

		return _Phone;
	}


	void Print() {
		cout << "Info:" << endl;
		cout << "-------------------------------\n";
		cout << "ID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Name : " << FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "-------------------------------\n";

	}
	
	void SendEmail(string Subject , string Body) {

		cout << "\nthe following message successfully sent to email: " << _Email << endl;
		cout << "Subject:" << Subject << endl;
		cout << "Body:" << Body << endl;
	}


	void SendSMS(string SMS) {
		cout << "\nthe following SMS successfully sent to phone: " << _Phone << endl;
		cout << SMS;

	}


};


int main()
{
	clsPerson Person1(10,"Anas" , "Naamneh" , "naamnih.anas@gmail.com" , "0799999999");
	
	Person1.Print();

	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	system("pause>0");
	return 0;
}
