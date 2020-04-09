#include <stdio.h>
   int main()
{
      int bil, hasil;
      scanf("%d", &bil);
      hasil = bil % 4;
      switch (hasil) 
      {
         case 0: printf("NOL\n"); break;
         case 1: printf("SATU\n"); break;
         case 2: printf("DUA\n"); break; 
         case 3: printf("TIGA\n"); break;
      }
      return 0;
}
