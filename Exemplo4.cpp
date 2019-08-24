#include<stdio.h>

main()
{
    char  letra;
    printf("\n Digite apenas uma letra: ");
    scanf("%c", &c);

      switch (letra)
      {
         case 'a':
         case 'A':
         case 'e':
         case 'E':
         case 'i':
         case 'I':
         case 'o':
         case 'O':
         case 'u':
         case 'U':    
           printf("Vc digitou uma vogal.\n");
           break;
         defaut:  
          printf("Vc digitou uma consoante\n");
      }
}
