#include <iostream.h>

Using namespace std;

class TTime
{
 private:
 int hours; // 0 to 23
 int minutes; // 0 to 59
 public:
 void display() const // output to screen
 {
cout << hours << ':' << minutes;
 }
 void get() // input from user
 {

char dummy;
cout << "\nEnter time (format 12:59): ";
cin >> hours >> dummy >> minutes;
 }


// Member Function for overloaded + operator
 TTime operator + (TTime right)
 {
TTime temp; // make a temporary Object
temp.hours = hours + right.hours; // add Data
temp.minutes = minutes + right.minutes;
if(temp.minutes >= 60) // check for carry
{
temp.hours++;
temp.minutes -= 60;
}
If(temp.hours >= 24)
{
 temp.hours – 24;
}
return temp; // return temporary Object
 }
}; // end class TTime
void main()
 {
 TTime Time1, Time2, Time3;
 cout << "Enter first TTime: ";
 Time1.get();
 cout << "Enter second TTime: ";
 Time2.get();
 Time3 = Time1 + Time2; // overloaded + operator
 // adds Time2 to Time1
 cout << "sum = ";
 Time3.display();
}
