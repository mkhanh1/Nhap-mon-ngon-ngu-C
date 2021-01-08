
#include <stdio.h>
int main(){
  int n = 123;
  int s = 0;
s = s + n%10;
n = n/10;
s = s + n%10;
n = n/10;
s = s + n%10;
n = n/10;
for (;n! = 0;n = n/10)
s = s +n%10

printf("s =%d",s);
return 0;
}
