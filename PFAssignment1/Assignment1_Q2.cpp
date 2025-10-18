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

	if (s1 > 100)
	{ cout << "Invalid input for subject 1";
		return 0;
	}
	if (s2 > 100)
	{ cout << "Invalid input for subject 2";
		return 0;
	}
	if (s3 > 100)
	{ cout << "Invalid input for subject 3";
		return 0;
	}
	if (s4 > 100)
	{ cout << "Invalid input for subject 4";
		return 0;
	}
	if (s5 > 100)
	{ cout << "Invalid input for subject 5";
		return 0;
	}


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
