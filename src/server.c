#include "interface.h"

bool findDegree(int x);

bool findDegree(int x) {
  if(x == 0){
    return false;
  } else {
  while (x % 5 == 0) {
    x /= 5;
  }
  return x == 1;
  }
}