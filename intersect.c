/*Пусть ℕ32 – множество натуральных чисел от 0 до 31. Даны два множества A ⊆ ℕ32 и B ⊆ ℕ32. 
Составьте программу intersect.c, вычисляющую пересечение множеств A и B.*/

#include<stdio.h>
int main()
{
  int k,l,m;
  unsigned char i;
  unsigned char a,b,A,B;  
  scanf("%hhd",&A);  
  k=0;  
  for (i=0;i<(A);i++) {
          scanf("%hhd",&a);
          k=k|(1<<a);
        }        
  scanf("%hhd",&B);
  l=0;
  i=0;  
  for (i=0;i<(B);i++) {
          scanf("%hhd",&b);
          l=l|(1<<b);
        }
  k=k&l;
  m=1;  
  for (i=0;i<32;i++) if (((k>>i) &m)==1) printf("%hhd ",i);
}
