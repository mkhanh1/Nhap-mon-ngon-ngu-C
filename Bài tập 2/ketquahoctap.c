  
#include <stdio.h>

int main(void) {
  double V,T;
 
  double DTB;
  DTB=(V + T)/2;
  printf("Nhap Diem Van V = ");//nhap tu ban phim
  scanf("%lf",&V);
  printf("Nhap Diem Toan T = ");//nhap tu ban phim
  scanf("%lf",&T);
  
  printf("Diem Van(V)\t Diem Toan(T)\t Diem Trung Binh(DTB)\t \n")
  //ket qua
  printf("%.2f\t         %.2f\t          %.2f\t \n",V, T, (V + T)/2);

  getchar();
  return 0;
}
