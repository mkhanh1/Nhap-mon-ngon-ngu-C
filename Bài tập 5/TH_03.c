//Khoi khai bao
#include<stdio.h>
int ba_so(int x , int y, int z);

 //khoi ham main
int main(){
  int a,b,c;
  printf("Nhap so a = ");
  scanf("%d", &a);
  printf("Nhap so b = ");
  scanf("%d", &b);
  printf("Nhap so c = ");
  scanf("%d", &c);
  ba_so(a,b,c);
  return 0;
}

// khoi dinh nghia ham
int ba_so(int x,int y,int z){
  if(a>b   &&   a>c){
   printf("so lon nhat la :%d",a);
  }  
 if (b>a   &&  b>c){
 printf("so lon nhat la :%d",b);
 }
 if (c>a    &&c  >b){
 printf("so lon nhat la :%d",c);
 }
 return 1;
}
