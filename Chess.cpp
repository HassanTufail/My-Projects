
#include<stdio.h>
int main (void)
{
int x, y;
for (x=1;x<=11;x++)
 {
  for (y=1;y<=11;y++)
   {
    if ((x+y)%2==0)
     printf ("%c",219);
    else
     printf (" ");
   }
  printf ("\n");
 }
return(0);
}

