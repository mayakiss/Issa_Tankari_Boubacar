//Issa Tankari Boubacar.
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Printing a command-line argument
int main(int argc, string argv[]){

if (argc == 2)
{
string p;

//initialize the k
string k=argv[1];
// ask for plaintext
p=get_string("plaintext: ");
printf("cyphertext: ");
char kyw;
int j=0;
//ASCII to alphabetical
//c=(((p[i]+ k)- ASCII VALUE)%26)+ ASCII VALUE;
for(int i=0; i<strlen(p); i++)
//letter character
if(isalpha(p[i]))
    {
        {
            kyw=k[j%strlen(k)];
            j++;
        }
//lower
    if(islower(p[i]))
        {
            if(islower(kyw))
            {
                kyw=(kyw- 97);
            }
            if(isupper(kyw))
            {
                kyw=(kyw- 65);
            }
            printf("%c",(((p[i]- 97)+ kyw)%26)+ 97);
        }
//capital
    if(isupper(p[i]))
        {
            if(islower(kyw))
            {
                kyw=(kyw- 97);
            }
            if(isupper(kyw))
            {
                kyw=(kyw- 65);
            }
            printf("%c",(((p[i]- 65)+ kyw)%26)+ 65);
        }
    }
//Maybe a number or a character that not a letter
else
        {
            printf("%c",p[i]);
        }
    printf("\n");
// Not an alpha character
}
else
    {
        printf("Retry\n");
        return 0;
    }
}
