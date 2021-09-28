#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
   char bookname[50];
   char author[50];
};
int main()
{
   struct library lib[100];
   char bookname[30];
   char author[50];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6)
   {
      printf("\n1. Add book information\n");
      printf("2. Display book information\n");
      printf("3. List books of given name\n")
      printf("4. List the title of specified book\n");
      printf("6. Exit");

      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j); 
      switch (j)
      {
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            keepcount++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++)
            {
               printf("book name = %s\n",lib[i].bookname);
               printf("\t author name = %s\n",lib[i].author);
            }
            break;
        case 3:
            printf ("Enter book name : ");
            scanf ("%s",bookname);
            for (i=0; i<keepcount; i++)
            {
            if (strcmp(bookname, l[i].bookname) == 0)
            printf ("%s %s",l[i].bookname,l[i].author);
            }
            break;
         case 4:
            exit (0);
      }
   }
   return 0;
}