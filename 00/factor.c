#include <stdio.h>
long fact (int n);
long rfact(int n);
int main(void) 
{
int num;
printf("Эта программа вычисляет факториалы.\n");
printf("Введите значение в диапазоне 0-12 (q для завершения):\n");
while (scanf ("%d", &num) == 1)
{
if (num < 0)
	printf ("Отрицательные числа не подходят. \n");
else if (num > 12)
	printf ("Вводимое значение должно быть меньше 13.\n");
else 
	{
printf("цикл: факториал %d = %ld\n", num, fact(num));
printf("рекурсия: факториал %d = %ld\n", num, rfact(num));
}
printf("Введите значение в диапазоне 0-12 (q для завершения):\n") ;
}
printf("Программа завершена.\n");
return 0;
}
long fact(int n) // функция, основанная на цикле
{
	long q;
for (q = 1; n > 1; n--)
   	q *= n;
return q;
}

long rfact(int n) 
{
	long  аns;
	if (n > 0)  // рекурсивная версия
	{	
		аns= n * rfact(n-1);
		printf("n = %d\n", n);}
   	else
		аns = 1; 
//	printf("n  =  %d\n", n);
	return аns;
}
