#include <stdio.h>

int main(void) {
  //khai bao nien a
  int a = -1;
  if (a > 0){
    //hien a la so duong
      printf("%d duong", a);
      scanf ("%d", &a);
  }else if (a == 0)   {
    //hien thi a bang 0
      printf("a = 0", a);
       scanf ("%d", &a);
  }else{
    //hien thhi a la so am
      printf("%d am", a);
       scanf ("%d", &a);
  }
  getchar();
  return 0;
}
