#include <stdio.h>
// klavyeden girilen sayı tek mi çift mi?

int main() 

{
 
 int sayi;
 
 printf("sayi girin: ");
 scanf("%d",&sayi);
 
  if(sayi % 2 == 0)
  {
   printf("%d cifttir",sayi);
  }
 
  else
  {
    printf("%d tektir",sayi);
  }

  return 0;

}