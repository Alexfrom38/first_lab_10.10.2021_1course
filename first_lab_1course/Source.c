#include<stdio.h>
#include <time.h>
#include <conio.h>

int main(void)
{/// пока что не закончено
	srand(time(NULL));
	int min_of_numb = 0, max_of_numb = 0, count_of_numb = 0;
	double r1;

	printf("input numbers: min,max, and count \n");
	scanf_s("%d", &min_of_numb);
	scanf_s("%d", &max_of_numb);
	scanf_s("%d", &count_of_numb);



	for (int i = 0; i <= count_of_numb; i++)
	{
		r1 = (double) ( rand()%(int)(10*((max_of_numb - min_of_numb+1)+1))) /10.0;

		printf("%lf \n ", r1);
	}
	return 0;
}