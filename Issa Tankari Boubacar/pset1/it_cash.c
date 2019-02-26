//Issa Tankari Boubacar
#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int fiveh=500;
    int twohf=250;
    int twoh=200;
    int oneh=100;
    int fifty=50;
    int twen=25;
    int ten=10;
    int five=5;
    int one=1;
    int n;
do
    {
        n=get_int("Change: ");
    }
while (n<=5);

int counter=0;
while(n>=fiveh)
    {
        n=n-fiveh;counter++;
    }
while(n>=twohf)
    {
        n=n-twohf;counter++;
    }
while(n>=twoh)
    {
        n=n-twoh;counter++;
    }
while(n>=oneh)
    {
        n=n-oneh;counter++;
    }
while(n>=fifty)
    {
        n=n-fifty;counter++;
    }
while(n>=twen)
    {
        n=n-twen;counter++;
    }
while(n>=ten)
    {
        n=n-ten;counter++;
    }
while(n>=five)
    {
        n=n-five;counter++;
    }
while(n>=one)
    {
        n=n-one;counter++;
    }
printf("%i coins\n",counter);
}
