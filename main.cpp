#include "free_func.h"
#include <iostream>

int main() {
  double doubleValue{99.999};

  int valueB = myFreeFunc(doubleValue);
  std::cout << "Main Value: " << valueB << std::endl;
  return 0;
}
