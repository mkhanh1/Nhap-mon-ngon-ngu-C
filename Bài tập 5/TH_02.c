#include <stdio.h>

int main() {
  int a, b;
  int c = 0;
  printf("/n nhap a:");
  scanf("%d",&a);
  for(b = 1; b <= a;b++){
    c = c + b;
  }
  printf("/n tong 1 + 2 +...+%d",c);
  return 0;
}
