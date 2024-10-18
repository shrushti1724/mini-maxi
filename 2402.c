#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("enter value of a,b,c, and d");
	scanf("%d%d%d%d",&a,&b,&c,&d);

    (a>b )?
    (b>c)?
    (a>d)?
      printf("a is max")
      :printf("d is max")
      :(b>c)?
        (d>b)?
        printf("b is max")
        :printf("d is max")
        :(c>d)?
        :printf("c is max")
         :printf("d is max");
        
	
	
	
	
}
