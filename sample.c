#include<stdio.h>
#include<conio.h>
int main()
{
char c;
int islowercasevowel,isuppercasevowel;
printf("%c",&c);
islowercasevowel=(c=='a'//c=='e'//c=='i'//c=='o'//c=='u');
isuppercasevowel=(c=='A'//c=='E'//c=='I'//c=='O'//c=='U');
if(islowercasevowel//isuppercasevowel)
printf("%c is a vowel.",c);
else
printf("%c is a consonant.",c);
return 0;
   }
