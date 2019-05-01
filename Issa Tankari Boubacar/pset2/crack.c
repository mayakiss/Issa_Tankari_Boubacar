//Issa Tankari Boubacar

/*
All lines of this code was made by Issa Tankari.
To crack my password my program crypt all alpha letters beginning
by a and finishing by ZZZZ.
I consider only a password of four characters according to the zamyla's video.
*/
#define _XOPEN_SOURCE
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(int argc,char* argv[]){
if(argc==2)
{
//get the hashed password
char* hash_1=argv[1];
char salt[3];
memcpy(salt,hash_1,2);
salt[2]='\0';
//crypt
/*
I up my alpha character to 53 because my program has to count to 52 and then
add a new letter to the key so i up it to an another capital A.
*/
char alpha[53]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
,'Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i',
'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A'};
char key[5];
int j=0;
        for(int n=0;n<=52;n++)
        {
             for(int l=0;l<=52;l++)
             {
                 for(int m=0;m<=52;m++)
                 {
                     for(int k=0;k<=52;k++)
                     {
//one-letter key
if(j==0)
{
    //add new letter to key
    if(k==52)
    {
        j++;
    }
    //key-letter swap
    key[0]=alpha[k];
    char *hash_2=crypt(key,salt);
    if(strcmp(hash_1,hash_2)==0)
    {
        printf("%s\n",key);
        return 0;
    }
}
//two-letter key
if(j==1)
{
    if(m==52){
        j++;
    }
    key[0]=alpha[k];key[1]=alpha[m];
    char *hash_2=crypt(key,salt);
    if(strcmp(hash_1,hash_2)==0)
    {
        printf("%s\n",key);
        return 0;
    }
}
//three-letter key
if(j==2)
{
    if(l==52){
        j++;
    }
     key[0]=alpha[k]; key[1]=alpha[m]; key[2]=alpha[l];
     char *hash_2=crypt(key,salt);
     if(strcmp(hash_1,hash_2)==0)
     {
         printf("%s\n",key);
         return 0;
     }
}
//four-letter key
if(j==3)
{
    if(n==52){
        j++;
    }
     key[0]=alpha[k]; key[1]=alpha[m]; key[2]=alpha[l]; key[3]=alpha[n];
     char *hash_2=crypt(key,salt);
     if(strcmp(hash_1,hash_2)==0)
     {
         printf("%s\n",key);
         return 0;
     }
 }
}
//more than four character the program run out and print pwd not crack.
if(j>3)
{
    printf("Password not Crack\n");
    return 0;
}
}}}
}
else
{
    printf("Error\nInput:./commandline [Hash]\n");
    return 0;
}
}
//Copyright 2019. Issa Tankari.