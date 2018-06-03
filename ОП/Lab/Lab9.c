#include <stdio.h>
struct bill
{
	int rs_platelsik;
    int rs_poluchatel;
    float summa_perevoda;
}b[8];
int main (void)
{
	int i,j;
	FILE *file_Bill = fopen ("Bill.txt","r");
	char file_string[200];
	for (i=1;i<=20;i++)
	{
		printf ("[%2d]", i);
		fgets (file_string,200,file_Bill);
		puts (file_string);
	}
	fclose (file_Bill);
	struct bill k;
	char *name_file[10];
	printf ("=====Введите название файла: ");
	gets (name_file);
	for (i=1;i<=8;i++)
	{
		printf ("[%d]", i);
		printf ("\nРасчетный счет плательщика: ");
		scanf ("%d", &b[i].rs_platelsik);
		printf ("Расчетный счет получателя: ");
		scanf ("%d", &b[i].rs_poluchatel);
		printf ("Сумма перевода:");
		scanf ("%f", &b[i].summa_perevoda);
	}
	for (i=1;i<=8-1;i++)
	{
		for (j=1;j<=8-i-1;j++)
		{
			if (b[j].rs_platelsik<b[j+1].rs_platelsik)
			{
				k=b[j+1];
				b[j+1]=b[j];
				b[j]=k;
			}
		}
	}
	FILE *file = fopen (name_file, "w+");
	for (i=0;i<8;i++)
	{
		fprintf (file, "Расчетный счет плательщика:%d.", b[i].rs_platelsik);
		fprintf (file, "Расчетный счет получателя:%d.", b[i].rs_poluchatel);
		fprintf (file, "Сумма перевода:%f.\n", b[i].summa_perevoda);
	}
	fclose (file);
	return 0;
}
