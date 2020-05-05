#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Ukladam nasobilku...\n");
   FILE *fptr;
   fptr = fopen("nasobilka.txt","w");

   for(int radek = 1; radek <= 10; radek++)
   {
       for(int sloupec = 1; sloupec <= 10; sloupec++)
           fprintf(fptr,"%4d",radek * sloupec);

       fprintf(fptr, "\n");
   }
   fclose(fptr);
   printf("Nasobilka ulozena do souboru nasobilka.txt.\n");


   char filename[255];
   printf("Nazev souboru ke cteni: ");
   scanf("%s", filename);

   char  radek[255];
   fptr = fopen(filename, "r");

   if (fptr == NULL) {
       printf("Nejde otevrit %s!", filename);
       return -1;
   }

   printf("Soubor otevren, obsahuje toto:\n");
   while (fgets( radek, sizeof(radek), fptr) != NULL) {
      printf("%s", radek);
   }
   fclose(fptr);

   return 0;
}
