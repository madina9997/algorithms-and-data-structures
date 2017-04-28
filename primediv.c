/*Составьте программу primediv.c, вычисляющую наибольший простой делитель некоторого числа x.
Число x вводится со стандартного потока ввода, причём известно, что -231 ≤ x < 231.
Программа должна использовать решето Эратосфена  для построения массива простых чисел*/

#include<stdio.h>
#include<math.h>
main()
{
  long long x,i,j,k,f,flag;
  flag=0;
  j=0;
  scanf("%lld",&x);
  x = abs(x);
  f=ceil(sqrt(x));
  char a[f+1];
  for (i=0;i<(1+f);i++) a[i]=1;
  for (i=2;(i*i)<(f+1);i++) {
    k=0;
    while (j<(1+f)) {
      j=i*(i+k);
      k++;
      a[j]=0;
    }
  }
  for (i=2;i<(1+f);i++) {
        while (a[i] && (!(x%i)) ) {
                x=x/i; 
                if (x==1) {
                        printf("%lld",i);
                        flag=1;
                        break;
                }
        }
  }
  if (!flag) printf("%lld",x);
}
