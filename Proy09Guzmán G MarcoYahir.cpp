#include<stdio.h>
#include<conio.h>
float cal;
main()
{
	printf("Dime tu calificaci%cn: ",162);
	scanf("%f", &cal);
	
	if(cal >= 60 &&cal <= 100) 
	{
		printf("%cFelicidades, aprobaste%c", 173, 33);
	}
	else
		printf("%cnimo, sigue estudiando", 181);
		getch();
		return 0;
}
