/*Элемент последовательности чисел, значение которого – не меньше значений его непосредственных соседей, называется пиком. 
Очевидно, что непустая последовательность размера n имеет от 1 до n пиков.
Составьте функцию peak, возвращающую индекс любого пика в последовательности.*/

#include <stdio.h> 
 
int array[] = { 1, 2, 3, 4, 5, 3, 2, -5 }; 
 
int less(unsigned long i, unsigned long j) 
{ 
        return array[i] < array[j]; 
} 
 
unsigned long peak(unsigned long nel,int (*less)(unsigned long i, unsigned long j)) 
{
  unsigned long mid,high,low;
  low=0;
  high=nel-1;
  if (less(0,1)==0) return 0;
  if (less((nel-1),(nel-2))==0) return (nel-1);
  while (high>low) {
    mid=high/2+low/2;
    if (less(mid,(mid+1))!=0) 
        low=mid+1; 
    else if (less(mid,(mid-1))!=0) 
              high=(mid-1); 
         else return mid;
  }
  return high;
}             
 
int main(int argc, char **argv) 
{ 
        unsigned long i = peak(8, less); 
        if ((i == 0 || array[i] >= array[i-1]) && 
                (i == 7 || array[i] >= array[i+1])) { 
                printf("CORRECT\n"); 
        } else { 
                /* Если функция peak работает правильно, 
                сюда никогда не будет передано 
                управление! */ 
                printf("WRONG\n"); 
        } 
        return 0; 
}
