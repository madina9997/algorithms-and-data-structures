/*Составьте функцию strdiff, выполняющую побитовое сравнение двух строк.*/

#include <stdio.h> 
 
int strdiff(char *a, char *b)
{
  int i,j,index=0,t;
  if (strlen(a)>=strlen(b)) t=b; 
  else t=a; 
  for (i=0;i<=strlen(t);i++) {
        for (j=0;j<8;j++) {
                if ((1&(a[i]>>j))==(1&(b[i]>>j))) ++index; 
                else return index;
        }
  }
  return(-1);  
} 
 
int main(int argc, char **argv) 
{ 
        char s1[1000], s2[1000]; 
        gets(s1); 
        gets(s2); 
        printf("%d\n", strdiff(s1, s2)); 
 
        return 0; 
}
