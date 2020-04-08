#include <iostream>
#include "Cube.cpp"

using std::cout;
using std::endl;
using experiment::Cube;

/**
 * ## Memory Model
 * 
 * A said `memory address` ( a hex number ) gets associated with the Identifer
 * 
 * This HexNumber can be used to change / read the value, the given Identifier is wired to
 * 
 * This HexNumber is associated with the Identifier not with the value
 * 
 * corollary:
 * 
 * This can be viewed as a Relational Schema Model
 * 
 * ## `new` keyword associates a HexNumber directly to an Invisible Identifier
 * 
 * ## In local Scope these Hex Numbers are assigned in descending order
 * 
 * ## with `new` keyword these numbers are assigned in ascending order and are not garbage collected
 * if any Identifier (visible or in-visible) is wired to a given number 
 * 
 * 
 * ## When `delete` is used on an identifier - 
 * then the value it is wired to is marked for deletion 
 * ( what does delete mean for a pointer type or a value type )
 * if there is another identifier in the system wired to the same value then
 * deletion does not proceed.. line no 73;
 * 
 * 
 * MENTAL MODEL HAS TO BE AS SIMPLE AS POSSIB:LE!!!
 * 
 * 
 * ## Refrence Variable
 * 
 * int &y = *ptr;
 * 
 * if you want to capture the Invisible-Identifier which has a Memory hexnumber generated already
 * , a pointer :), in other words giving the visible control of the Invisible to a Visible identifier
 * or an Alias for a Visible-Identifier 
 * 
 * If Alias gets wired to a new values so does the Underlying Identifier
 * 
 * ## Array
 * 
 * int *arrPtr = new int[3];
 * arrPtr[i] = 20;
 * 
 * Array pointer or the Hexnumber is the start of the series of hexnumbers generated for
 * an array and total count for these hexnumbers is the length of the array
 * 
*/


Cube* getACube(int length) {
  Cube* cube = new Cube() ;
  cube->setSideLength(length);
  return cube;
};


int main () {
  
  /*
   if its the number assigned with the value or the identifier
  */
  
   int j = 20;
   int k = 20;

  cout << &j << endl;
  cout << &k << endl;
  cout << "line Break " << endl;


  int* StackedIntAddressHolder = new int;
  cout << StackedIntAddressHolder << endl;
  cout << &StackedIntAddressHolder << endl;
  cout << *StackedIntAddressHolder << endl;

  cout << "line Break " << endl;

  Cube* ptr = getACube(30);
  Cube* temptr = ptr;
  cout << ptr->getVolume() << endl;
  cout << ptr << endl;
  
  cout << "line Break " << endl;

  delete ptr;
  // this lines makes the huge difference // delete temptr;
  cout << ptr->getVolume() << endl;
  cout << temptr->getVolume() << endl;

  cout << "line Break " << endl;
  
  ptr = nullptr;
  // cout << ptr->getVolume() << endl;

 cout << "line Break " << endl;

int *p = new int;
*p = 20;
int &y = *p;

cout << y << "   " << *p << endl;

 j = 30;
 y = j;

cout << y << "   " << *p << endl;
cout << &y << "   " << p << endl;

cout << "line Break " << endl;

int* arryPtr = new int [3];
cout << arryPtr << " "<< arryPtr[0] << " "<< arryPtr[1] <<  " "<< arryPtr[2] << endl;
int &kim = arryPtr[1];
kim = 23;
cout << arryPtr << " "<< arryPtr[0] << " "<< arryPtr[1] << endl;
cout << (arryPtr + 1) << endl;
return 0;


};