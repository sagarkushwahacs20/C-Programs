
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
struct library {
    char book_name[20];
    char author[20];
};
  
int main()
{
    // Create a instance
    struct library lib[100];
  
    char ar_nm[30], bk_nm[30];
  
    // Keep the track of the number of
    // of books available in the library
    int i, input, count;
  
    i = input = count = 0;
  
    // Iterate the loop
    while (input != 5) {
  
        printf("\n\n********######"
               "WELCOME TO LIBRARY MANAGEMENT SYSTEM "
               "#####********\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. List all books of "
               "given author\n");
        printf("4. Exit");
  
        // Enter the book details
        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);
  
        // Process the input
        switch (input) {
  
        // Add book
        case 1:
  
            printf("Enter book name = ");
            scanf("%s", lib[i].book_name);
  
            printf("Enter author name = ");
            scanf("%s", lib[i].author);

            count++;
  
            break;
  
        // Print book information
        case 2:
            printf("you have entered"
                   " the following "
                   "information\n");
            for (i = 0; i < count; i++) {
  
                printf("book name = %s",
                       lib[i].book_name);
  
                printf("\t author name = %s",
                       lib[i].author);
            }
            break;
  
        // Take the author name as input
        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < count; i++) {
  
                if (strcmp(ar_nm,
                           lib[i].author)
                    == 0)
                    printf("%s %s %d %f",
                           lib[i].book_name,
                           lib[i].author);
            }
            break;
  
        
        case 4:
            exit(0);
        }
    }
    return 0;
}