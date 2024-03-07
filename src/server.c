#include "interface.h"

int findDegree(int x);

int findDegree(int x) {
  if(x == 0){
    return 0;
  } else {
  while (x % 5 == 0) {
    x /= 5;
  }
  return x == 1;
  }
}