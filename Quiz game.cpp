#include <iostream>
using namespace std;
int main()
{
 cout << "Welcome to the Quiz Game!" << endl; 
 int mark = 0;
 string  answer;
 cout << "Question 1: What is the capital of France?" << endl;
 cin>> answer;
 if (answer == "Paris")
 {
  cout << "Correct!" << endl;
  mark++;
 } 
 else
 {
	 cout << "Incorrect!" << endl;
 }
 cout << "Question 2: What is a small animal?" << endl;
 cin >> answer;
 if (answer == "ant")
 {
  cout << "Correct!" << endl;
  mark++;
 }
 else
 {
	 cout << "Incorrect!" << endl;
 }
 cout << "Question 3:What is the largest planet in our solar system?\n";
 cin >> answer;
 if (answer == "Jupiter")
 {
  cout << "Correct!" << endl;
  mark++;
 }
 else
 {
	 cout << "Incorrect!" << endl;
 }
 cout << "Question 4: What is the chemical symbol for water?" << endl;
 cin >> answer;
 if (answer == "H2O")
 {
  cout << "Correct!" << endl;
  mark++;
 }
 else
 {
	 cout << "Incorrect!" << endl;
 }
 cout << "Question 5: What is the currency of Japan?" << endl;
 cin >> answer;
 if (answer == "Yen")
 {
  cout << "Correct!" << endl;
  mark++;
 }
 else
 {
	 cout << "Incorrect!" << endl;
 }
 cout << "You scored " << mark << " out of 5.👏" << endl;

 if (mark == 5)
 {
	 cout << "Exllent you get a full mark " << endl;
 }
 else if (mark == 4)
 { 
 cout << "Good job ,You are very close to full mark " << endl;
 }
 else if (mark == 3)
 {
	 cout << "Not bad , but you have opportunty to improve " << endl;
 }
 else if (mark ==2)
 {
	 cout << "You need to study more " << endl;
 }
 else if (mark == 1)
 {
	 cout << "You need to study more " << endl;
 }
 else
 {
	 cout << "You need to study more " << endl;
 }


















































































}

