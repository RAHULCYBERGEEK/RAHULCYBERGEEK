#include <stdio.h>
#include <stdlib.h>
int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();
int nor=0, nob=0, noc=0, amount=0, count=0;
void main()
{
    while(1)
    {
     switch(Menu())
    {
    case 1:
          Bus();
          break;
    case 2:
          Cycle();
          break;
    case 3:
          Riksha();
          break;
    case 4:
          ShowDetail();
          break;
    case 5:
          Delete();
          break;
    case 6:
          exit(0);
          break;
    default :
           printf("\n INVALID CHOICE :");
    }
    getch();
    }
}


    int Menu()
    {
        int ch;
        printf("\n1. enter bus:");
        printf("\n2. enter cycle:");
        printf("\n3. enter riksha:");
        printf("\n4. show status:");
        printf("\n5. delete data:");
        printf("\n6. exit:");
        printf("\n7. enter your choice:");
        scanf("%d", &ch);
        return(ch);


    }
    void Delete()
    {
        nob=0;
        noc=0;
        nor=0;
        amount=0;
        count=0;

    }
    void ShowDetail()
    {
        printf("\n number of bus=%d", nob );
        printf("\n number of cycle=%d",noc);
        printf("\n number of riksha=%d",nor);
        printf("\n total number of vehicle=%d", count);
        printf("\n total gain amount=%d",amount);
    }

    void Riksha()
    {
        printf("\n entry succesful");
        nor++;
        amount+=50;
        count++;
    }
    void Cycle()
    {
        printf("\n entry succesful");
        noc++;
        amount= amount+20;
        count++;
    }
    void Bus()
    {
        printf("\n entry succesful");
        nob++;
        amount=amount+100;
        count++;
    }



