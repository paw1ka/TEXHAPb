#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[99][99];
    int i,j,n,m;
    printf ("Введите n:");
    scanf ("%d", &n);
    printf ("Введите m:");
    scanf ("%d", &m);
    for (i=0;i<n;i++)
    {
	printf ("%d\n", i);
	for (j=0;j<m;j++)
	{
	    printf ("a[%d][%d]=", i,j);
	    scanf ("%d", &a[i][j]);
	}
    }
    printf ("\n");
    for (i=0;i<n;i++)
    {
	for (j=0;j<m;j++)
	printf (" %d", a[i][j]);
	printf ("\n");
    }
    printf ("\n");
    for (i=0;i<n;i++)
    {
	for (j=0;j<m;j++)
	{
	    if (a[i][m-1]>0)
	    return 0;
	}
    }
    for (i=0;i<n;i++)
    {
	for (j=0;j<m;j++)
	{
	    if (a[i][m-1]<0)
	    a[i][m-1]=0;
	}
    }
    for (i=0;i<n;i++)
    {
	for (j=0;j<m;j++)
	if (a[i][j]!=0)
	{
	    printf (" %d", a[i][j]);
	}
	printf ("\n");
    }
    return 0;
}
