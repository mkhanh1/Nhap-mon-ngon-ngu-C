#include <stdio.h>

int main() {
  int a, b;
  int tong = 0;
  printf("\n nhap a:");
  scanf("%d",&a);
  for(b = 1; b <= a;b+=1){
    tong =tong+ b;
  }
  printf("\n tong :%d",tong);
  return 0;
}
