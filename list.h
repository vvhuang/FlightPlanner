#ifndef LIST_H
#define	LIST_H

#include <iostream>
using namespace std;

template <typename T>
class List;

template <typename T>
ostream& operator << (ostream &os, const List<T> &rhs);

template <typename T>
class ListNode
{
  T data;
  ListNode<T> *next;
  ListNode<T>(const T &c, ListNode<T> *node);
  friend class List<T>;
};  // class ListNode

template <typename T>
class List 
{
  ListNode<T> *head;
  int count;
public:
  List();
  List(const List<T>& orig);
  ~List();
  int getCount() const;
  List<T>&  operator += (const T &rhs);
  List<T>& operator -= (const T &rhs);
  const T& operator [] (int index) const;
  T& operator [] (int index);
  void reverse();

  template <typename U>
  friend ostream& operator << (ostream &os, const List<U> &rhs);
}; // class List 

#include "list.cpp"
#endif	// CITYLIST_H 

