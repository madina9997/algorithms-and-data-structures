/*Элемент двумерного массива называется седловым, если он одновременно наибольший в своей строке и наименьший в своём столбце.
Дан целочисленный двумерный массив, размер которого не превышает 10 × 10. Известно, что все элементы массива различны. 
Составьте программу saddlepoint.c, определяющую седловую точку в этом массиве.*/

#include<stdio.h>
int main()
{
  int a,b,i,j,k;
  k=0;
  scanf("%d",&a);
  scanf("%d",&b);
  int ar[a][b];
  int max[a];
  for (i=0;i<a;i++) max[i]=0;
  int min[b];
  for (i=0;i<b;i++) min[i]=100;
  for (j=0;j<a;j++) {
    for (i=0;i<b;i++) {
      scanf("%d",&ar[j][i]);
      if (ar[j][i]>max[j]) max[j]=ar[j][i];
      if (ar[j][i]<min[i]) min[i]=ar[j][i];
    }
  }
  for (j=0;j<a;j++) {
    for (i=0;i<b;i++) {
      if (max[j]==min[i]) {
              printf("%d %d",j,i);
              k=1;
        }
    }
  }
  if (k!=1) printf("none");
  return(0);
}
      
