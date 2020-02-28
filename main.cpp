//Airline Reservation
//Jennifer Jimenez Dr_T
//Unit 7 Quiz

#include <iostream>
using namespace std;

//declare structures
struct outboundFlight
{
  int flightNbr;
  string planeType;
  short departDate;
  short departTime;
  string departAm;
  short arrivalDate;
  short arrivalTime;
  string arrivalPm;
  short numberOfSeats;
};

struct returnFlight
{
  int flightNbr2;
  string planeType2;
  short departDate2;
  short departTime2;
  string departAm2;
  short arrivalDate2;
  short arrivalTime2;
  string arrivalPm2;
  short numberOfSeats2;
};

struct passengers
{
 string name;
 int age;
 short numberOfBags;
 string address;
};

struct payment
{
  long cardNumber;
  double amount;
  short expDate;
};


int main()
{
outboundFlight obf;
obf.planeType = "Airbus";
obf.flightNbr = 13;
obf.departDate = 2/28/2020;
obf.departTime = 8;
obf.departAm = "am";
obf.arrivalDate = 2/29/2020;
obf.arrivalTime = 4;
obf.arrivalPm = "pm";
obf.numberOfSeats = 2245;
cout << "\nOutbound Flight: " << endl;
cout << "Plane Type: " << obf.planeType << endl;
cout << "Flight Number: " << obf.flightNbr << endl;
cout << "Depart Date: " << obf.departDate << endl;
cout << "Depart Time: " << obf.departTime << obf.departAm << endl;
cout << "Arrival Date: " << obf.arrivalDate << endl;
cout << "Arrival Time: " << obf.arrivalTime << obf.arrivalPm << endl;
cout << "Number of Seats: " << obf.numberOfSeats << endl;

returnFlight rf;
rf.planeType2 = "Airbus";
rf.flightNbr2 = 234;
rf.departDate2 = 3/2/2020;
rf.departTime2 = 6;
rf.departAm2 = "am";
rf.arrivalDate2 = 3/2/2020;
rf.arrivalTime2 = 4;
rf.arrivalPm2 = "pm";
rf.numberOfSeats2 = 2565;
cout << "\nReturn Flight: " << endl;
cout << "Plane Type: " << rf.planeType2 << endl;
cout << "Flight Number: " << rf.flightNbr2 << endl;
cout << "Depart Date: " << rf.departDate2 << endl;
cout << "Depart Time: " << rf.departTime2 << rf.departAm2 << endl;
cout << "Arrival Date: " << rf.arrivalDate2 << endl;
cout << "Arrival Time: " << rf.arrivalTime2 << rf.arrivalPm2 << endl;
cout << "Number of Seats: " << rf.numberOfSeats2 << endl;

passengers p;
p.name = "John";
p.age = 24;
p.numberOfBags = 2;
p.address = "23 Westbrook Ln.";
cout << "\nPassenger: " << endl;
cout << "Name: " << p.name << endl;
cout << "Age: " << p.age << endl;
cout << "Number of Bags: " << p.numberOfBags << endl;
cout << "Address: " << p.address << endl;

payment pm;
pm.cardNumber = 4610460186452398;
pm.amount = 105.90;
pm.expDate = 2/20;
cout << "\nPayment: " << endl;
cout << "Car Number: " << pm.cardNumber << endl;
cout << "Amount: $" << pm.amount << endl;
cout << "Expiration Date: " << pm.expDate << endl;

return 0;

}