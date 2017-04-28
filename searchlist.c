#include <stdio.h> 
#include <stdlib.h> 
#include "elem.h" 
 
struct Elem *searchlist(struct Elem *list, int k) 
{ 
        while (list) {
          if (k==list->value.i) return list;
	  else if ((list->tag ==2)&&(searchlist(list->value.list,k)))
	     return searchlist(list->value.list,k);
	  list=list->tail;
	}
	return list;  
} 
 
int main() 
{ 
        struct Elem a, b, c; 
 
        a.tag = INTEGER; 
        a.value.i = 10; 
        a.tail = &b; 
 
        b.tag = FLOAT; 
        b.value.f = 3.14; 
        b.tail = &c; 
 
        c.tag = INTEGER; 
        c.value.i = 20; 
        c.tail = NULL; 
 
        if (searchlist(&a, 20) == &c) { 
                printf("CORRECT\n"); 
        } else { 
                /* Если функция searchlist работает правильно, 
                сюда никогда не будет передано управление! */ 
                printf("WRONG\n"); 
        } 
 
        return 0; 
}
