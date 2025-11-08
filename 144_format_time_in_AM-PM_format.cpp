#include <iostream>
#include <iomanip> // For setw() and setfill()
using namespace std;

int main(){

    int hour, minute, second;

    cout << "Give Time in 24-hour Format (HH MM SS): ";
    cin >> hour >> minute >> second;

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59)
    {
        cout << "Invalid Time Format!" <<endl;
        return 1;
    }

    string period = (hour >= 12) ? "PM" : "AM";

    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;

    cout << "Time in 12-hour Format: ";
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << " " << period <<endl;

    return 0;
}