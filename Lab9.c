#include <stdio.h>
struct bill
{
	int rs_platelsik;
    int rs_poluchatel;
    float summa_perevoda;
};
int main (void)
{
	int i;
	FILE *file_Bill = fopen ("Bill.txt","r");
	char file_string[50];
	for (i=0;i<20;i++)
	{
		fgets (file_string,100,file_Bill);
		puts (file_string);
	}
	fclose (file_Bill);
	struct bill b;
	char *name_file[10];
	printf ("Введите название файла: ");
	gets (name_file);
	FILE *file = fopen (name_file, "w+");
	for (i=0;i<8;i++)
	{
		printf ("RS_platelsik: ");
		scanf ("%d", &b.rs_platelsik);
		fprintf (file, "RS_platelsik:%d", b.rs_platelsik);
		printf ("RS_poluchatel: ");
		scanf ("%d", &b.rs_poluchatel);
		fprintf (file, "RS_poluchatel:%d", b.rs_poluchatel);
		printf ("Summa_perevoda: ");
		scanf ("%f", &b.summa_perevoda);
		fprintf (file, "Summa_perevoda:%f", b.summa_perevoda);
		printf ("\n");
	}
	return 0;
}
