#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int courses;
	string grades[20];
	int credits[20];
	float points[20];

	float totalgps = 0;
	float totalcredits = 0;

	cout << " --- CGPA Calculator --- "<<endl;
	cout << "Enter the number of courses: ";
	cin >> courses;

	for (int i = 0;i < courses;i++)
	{
		cout << "For course " << i + 1 << ": " << endl;
		cout << "Enter Grade (e.g., A+, A, A-, B...): ";
		cin >> grades[i];
		cout << "Enter Credit Hours: ";
		cin >> credits[i];

		float val = 0;
		if (grades[i] == "A+" || grades[i] == "A" || grades[i] == "a" || grades[i] == "a+")
			val = 4.0;
		else if
			(grades[i] == "A-"|| grades[i] == "a-") val = 3.67;
		else if
			(grades[i] == "B+" || grades[i] == "b+") val = 3.33;
		else if
			(grades[i] == "B" || grades[i] == "b")  val = 3.0;
		else if
			(grades[i] == "B-" || grades[i] == "b-") val = 2.67;
		else if
			(grades[i] == "C+" || grades[i] == "c+") val = 2.33;
		else if
			(grades[i] == "C" || grades[i] == "c")  val = 2.0;
		else if
			(grades[i] == "C-" || grades[i] == "c-") val = 1.67;
		else if
			(grades[i] == "D+" || grades[i] == "d+") val = 1.33;
		else if
			(grades[i] == "D" || grades[i] == "d")  val = 1.0;
		else
			val = 0.0;

		points[i] = val;
		totalgps = totalgps + (val * credits[i]);
		totalcredits = totalcredits + credits[i];
	}

	float gpa = 0;
	if (totalcredits > 0)
		gpa = totalgps / totalcredits;
	else
		gpa = 0;

	cout << "\n----------------------------" << endl;
	cout << left << setw(10) << "Course" << setw(10) << "Grade" << "Credits" << endl;

	for (int i = 0; i < courses; i++)
		cout << setw(10) << i + 1 << setw(10) << grades[i] << setw(10) << credits[i] << endl;

	cout << "----------------------------" << endl;
	cout << "Semester GPA: " << gpa << endl;
	cout << "Final CGPA:   " << gpa << endl;
}