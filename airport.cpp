#include <cstdlib>
#include <iostream>
#include <cstring>
#include "airport.h"
#include "city.h"
#include "list.h"


using namespace std;

Flight::Flight()
{
  airline = NULL;
} // flight constructor

ostream& operator << (ostream &os, const Airport &rhs)
{
  os << rhs.airport << ": ";
  os << rhs.flights << endl;
  
  return os;
} //overloaded << operator

ostream& operator << (ostream &os, const Flight &rhs)
{
  char air[3];
 
  strncpy(air, rhs.airline, 2);
  air[2] = 0; //\0
  os << air << "-" << rhs.destination << " ";

  return os;
} //overloadd << operator

bool Flight::operator < (const Flight &rhs) const
{
  return true;
} //ovreloaded < operator

void Airport::readFlights(char *line, int n_flights)
{
  Flight flight;
  char air[15];

  num_flights = n_flights;

  for (int i = 0; i < num_flights; i++)
  {
    strcpy(air, strtok (NULL, " ")); 
    flight.airline = new char [strlen(air) + 1];
    strcpy(flight.airline, air);
    
    strcpy(flight.destination, strtok(NULL, " "));

    flights += flight;
  } //reading in flights
}// readFlights()

void Airport::findRoute()
{
}//findRoute()




