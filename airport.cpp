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

Flight::Flight(const char * airl, const char * port)
{
  airline = new char [strlen(airl) + 1];
  strcpy(airline, airl);
  strcpy(destination, port);
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
  air[2] = 0; // \0
  os << air << "-" << rhs.destination << " ";
  
  return os;
} //overloadd << operator

bool Flight::operator < (const Flight &rhs) const
{
  return false;
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
}// readFlighjts()

void Airport::findRoute(const char *dest, const char *airl, int * found, 
                        const List<Airport> &cities, List <Flight> &route) 
                        const
{
  int i, nextport;
  
  for (i = 0; i < num_flights; i++)
  {
    if (!strcmp(flights[i].airline, airl)) // =
    {
      if (!strcmp(flights[i].destination, dest)) // =
      {
        route += flights[i];
        *found = 1;
        break;
      } //iof
      
      else // same airline, but not dest
      {
        Airport city;
        city.setAirport(flights[i].destination);
        
        for (nextport = 0; nextport < cities.getCount(); nextport++)
          if (cities[nextport] == city)
            break;
        cities[nextport].findRoute(dest, airl, found, cities, route);
        
        if (*found == 1)
        {
          route += flights[i];
        } //somethign else
      } //else  
    } //if 
  } //for 
} //funct
