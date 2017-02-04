#ifndef CITYLIST_H
#define CITYLIST_H

  #include "city.h"

  class CityList;
  
  class CityNode
  {
    friend class CityList;
    
    City city;
    CityNode *next;
    CityNode (const City c, CityNode *n); 
    //citynode constructor

  }; //class CityNode

  class CityList
  {
    CityNode *head, *tail;
    static int count;

    public:
      CityList();
      ~CityList();
      static int getCount();
      void operator+=(const City &cit);
      void operator-=(const City &cit);
      City& operator[](int index);
      const City& operator[](int index) const;
  }; //class CityList

#endif
