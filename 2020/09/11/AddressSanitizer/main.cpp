#include <cstdlib>

void case1(){
  /* out of bound */
  int a[5];

  for(int i = 0; i <= 5; i++){
    a[i] = 0;
  }

  return ;
}

void case2(){
  /* memory leak */
  int* a = new int[5];

  return ;
}

void case3(){
  /* use after free */
  int* a = new int[5];
  delete [] a;
  a[0] = 0;

  return ;
}

int main(){
#ifdef CASE1
  case1();
#elif defined CASE2
  case2();
#elif defined CASE3
  case3();
#endif
}