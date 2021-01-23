#include <stdio.h>

int main(void) {
  int n, m;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  
  int a[n];
  //nhap phan tu n cua mang a tu ban phim
  for(int i = 0; i < n; i++){
    printf("nhap phan tu so %d :", i+1);
    scanf("%d", &a[i]);
  }
