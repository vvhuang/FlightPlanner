#include <cstdlib>
#include "city.h"
#include "citylist.h"

CityNode::CityNode(const City c, CityNode *n):city(c), next(n) {};

int CityList::count = 0;

CityList::CityList(): head(NULL), tail(NULL){};

CityList::~CityList()
{
  CityNode *ptr;

  for (ptr = head; ptr; ptr = head)
  {
    head = ptr->next;
    delete ptr;
  }// for loop to delete everything
} //cityList destru_ctor

void CityList::operator+=(const City &cit)
{
  if (count == 0) //empty list
  {
    head = new CityNode(cit, NULL);
    tail = head;
  } //
  else //list is not empty
  {
    tail->next = new CityNode(cit, NULL);
    tail = tail->next;
  } // else

  count++;
}//overloaded += operator

void CityList::operator-=(const City &cit)
{
  CityNode *ptr, *prev = NULL;

  for (ptr = head; ptr && !(ptr->city == cit); ptr = ptr->next)
    prev = ptr;

  if (ptr && ptr->city == cit)
  {
    if (!prev) // deleting first element
      head = ptr->next;
    else // deleting somethings else
      prev->next = ptr->next;
      
    delete ptr;
    count--;
  }// if the city was found
}//overloaded -= operator

City& CityList::operator[](int index)
{
  CityNode *ptr = head;
  
  for (int i = 0; ptr && i < index; i++)
    ptr = ptr->next;

  return ptr->city;
}//operator[]

const City& CityList::operator[](int index) const
{
  CityNode *ptr = head;

  for (int i = 0; ptr && i < index; i++)
    ptr = ptr->next;

  return ptr->city;
}//const operator[]


int CityList::getCount() {return count; } //getCount
