/*Составьте функцию revarray, переставляющую элементы любого массива в обратном порядке.*/

void revarray(void *base, unsigned long nel, unsigned long width)
{
  void *temp=(void *) malloc(width);
  for (int i=0;i<(nel/2);i++) {
    memcpy(temp, base+i*width, width);
    memcpy(base+i*width, base+(nel-1-i)*width, width);
    memcpy(base+width*(nel-i-1), temp, width);
    }
  free(temp);
}
