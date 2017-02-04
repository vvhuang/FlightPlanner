#ifndef AIRPORT_H
#define AIRPORT_H
#include "city.h"
#include "list.h"
class Flight;

class Airport: public City
{
  List<Flight> flights; 
  int num_flights;
public:
  void readFlights(char *line, int n_flights);
  void findRoute();
  friend ostream& operator << (ostream &os, const Airport &rhs);
}; //definition of class Airport

class Flight
{
  friend Airport;

  char *airline;
  char destination[4];
public:
  Flight();
  //~Flight();
  bool operator < (const Flight &rhs) const;
  friend ostream& operator << (ostream &os, const Flight &rhs);
}; //definition of class Flight

#endif 
