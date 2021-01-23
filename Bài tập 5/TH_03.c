#include <stdio.h>
 
int main(){
    int a, b, c;
    printf("\nNhap so a: ");
    scanf("%d", &a);
    printf ("Nhap so b: ");
    scanf ("%d",&b);
    printf ("Nhap so C: ");
    scanf ("%d",&c);
    if (a >= b && a >= c){
         printf("So lon nhat trong 3 so la %d", a);
}else if (b >= a && b >= c){
         printf("So lon nhat trong 3 so la %d", b);
}else {
         printf("So lon nhat trong 3 so la %d", c);
     }
 
}
