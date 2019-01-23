#include <iostream>

using namespace std;	

int main()
{
	
	
	int AIS, Age, AID, AIH, AIM;
	 
	cout << "Please enter your age\n";
	cin >> Age;
	
	AID = Age * 365;
	
	AIH = AID * 24;
	AIM = AIH * 60;
	AIS = AIM * 60;
	
	cout << "You are a stunning ";
	
	cout << AIS;
	cout << " seconds old!\n";









	system("pause");
	return 0;
}
