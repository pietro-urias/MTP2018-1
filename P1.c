//Pietro Urias   11721ECP001
#include <stdio.h>

int main() {
	
  int Papaleguas,Willy=0;
    char ACME[255];
    scanf("%s",&ACME);
    for(Papaleguas=0; ACME[Papaleguas]!='\0'; Papaleguas++)
	{
        if(Willy == 0)
        {
               if(ACME[Papaleguas] == '0'){Willy = 0;}
            if(ACME[Papaleguas] == '1'){Willy = 1;}
        }
           else if(Willy == 1)
        {
            if(ACME[Papaleguas] == '1'){Willy = 0;}
            if(ACME[Papaleguas] == '0'){Willy = 2;}
        }
           else if (ACME == 2)
        {
            if(ACME[Papaleguas] == '1'){Willy = 2;}
            if(ACME[Papaleguas] == '0'){Willy = 1;}
           }
    }
    if(Willy == 0)
    {
        printf ("E multiplo de 3");
    }
    else if (Willy != 0) 
    {
        printf ("E multiplo de 3");
    }
}
