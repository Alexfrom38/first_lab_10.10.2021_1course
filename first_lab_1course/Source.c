#include<stdio.h>
#include<stdlib.h>

int remains(double* double_number)
{
	int rem = 0;	
	rem = (*double_number - (int)*double_number) * 1000000;
	rem /= 100;
	return rem;
}

int main(void)
{
	char fl = 0;
	int min_numb = 0, max_numb = 0, count_of_numb = 0;
		double current_random_numb = 0, sum = 0;
	double* array_of_numbers; 
	int* array_of_remains;

	printf("input numbers: min,max, and count \n");
	
	printf("input min of number: ");
	scanf_s("%d", &min_numb);

	printf("input max of number: ");
	scanf_s("%d", &max_numb);

	printf("input count of number: ");
	scanf_s("%d", &count_of_numb);

	array_of_numbers = (double*)malloc(count_of_numb * sizeof(double));
	array_of_remains = (int*)malloc(count_of_numb * sizeof(int));
	
	if (array_of_numbers == 0)
	{
		printf("Error: memory is not allocated \n");
		return 0;
	}

	if (max_numb < min_numb)
	{
		printf("Error: min number > max number");
		return 0;
	}
	
	if (count_of_numb == 0)
	{
		printf("Error: count of number = 0");
		return 0;
	}
	
	
	for (int i = 0; i < count_of_numb; i++)
	{
		fl = 0;
		current_random_numb = (((double)rand()) / RAND_MAX) * ((double)max_numb - (double)min_numb) + min_numb;
		array_of_remains[i] = remains(&current_random_numb);
		
		sum += current_random_numb;
		for (int q = 0; q < i; q++)
		{
			if (i == array_of_remains[q])
				fl = 1;
		}
	
	}
	printf(" sum  = %lf ", sum);
	
	return 0;
}