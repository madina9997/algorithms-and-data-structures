/*Составьте функцию concat, выполняющую конкатенацию произвольного количества строк*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *concat(char **s,int n)
{
    int i,x=0;
    for (i=0;i<n;i++) x+=strlen(s[i]);
    i=0;
    char *p=(char*) calloc((x+1),sizeof(char));   
    for (i=0;i<n;i++) {
        strcat(p,s[i]);
	free(s[i]);
    }
    return p;
}

main()
{
    int n,i;   
    scanf("%d ",&n);
    char **s = (char**) malloc(n*sizeof(char*));
  
    for (i=0;i<n;i++) {
	s[i]= (char*) malloc(100*sizeof(char));
	gets(s[i]); 		  
    }
  
    char *f=concat(s,n);
    printf("%s",f);
    free(f);
    free(s);
}
