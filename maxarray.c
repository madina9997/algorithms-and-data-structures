/*Составьте функцию maxarray, возвращающую индекс максимального элемента произвольного массива. */

int maxarray(void *base, unsigned long nel, unsigned long width, 
        int (*compare)(void *a, void *b)) 
{ 
  unsigned long i,index=0;
  char max[width];
  memcpy(max,base,width);
  for (i=1;i<nel;i++) 
        if (compare(max,(base+i*width))<0) {
                memcpy(max,(base+i*width),width);
                index=i;
        }
  return index;  
}
