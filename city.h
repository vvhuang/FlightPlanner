#ifndef CITY_H
#define	CITY_H

#include <fstream>
using namespace std;

class City
{
public:
  double longitude;
  double latitude;
  char *name;
  char *state;
  char airport[4];
  int population;
  City();
  City(const City &rhs);
  ~City();
  void calcDistance(const City *city2, int *distance, int *passengers, 
                    bool display) const;
  void copyLocation(const City *srcCity);
  void deallocate();
  bool hasAirport();
  void readAirport(char *line, const char *state2);
  void setAirport(const char *airport);
  int showTraffic(const City &destCity) const;
  City& operator= (const City& rhs);
  bool operator==(const City& rhs) const;
  friend istream& operator>>(istream &is, City &city);
};  // class City

#endif	// CITY_H 

