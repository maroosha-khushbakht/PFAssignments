#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int s1, s2, s3, s4, s5, total;
	float percentage;
	string grade;


	cout << "Enter marks of 5 subjects: ";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;

	total = s1 + s2 + s3 + s4 + s5;

	percentage = total / 5.0;

	if (percentage >= 90)
		grade = "A+";
	else if (percentage >= 80)
		grade = "A";
	else if (percentage >= 70)
		grade = "B";
	else if (percentage >= 60)
		grade = "C";
	else if (percentage >= 50)
		grade = "D";
	else
		grade = "F";

	cout << fixed << showpoint << setprecision(2);

	cout << left << setw(10) << "total" << setw(15) << "percentage" << setw(10) << "grade" << endl;
	cout << left << setw(10) << total << setw(15) << percentage << setw(10) << grade << endl;

	cout << ((percentage >= 50) ? "pass" : "fail");


	return 0;
}