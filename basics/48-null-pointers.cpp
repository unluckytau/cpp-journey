/*
  48. Null pointers

    -> Null value: a special value that means something has no value.
    -> when a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are useful to determine if an address was successfully assigned to a pointer
*/

#include <iostream>

int main(){

  int *pointer = nullptr; // create null pointer
  int x = 123;

  *pointer = &x;

  // check if a pointer is a null pointer
  if(){
  
  }

  return 0;
}
