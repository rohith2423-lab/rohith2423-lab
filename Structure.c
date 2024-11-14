#include <stdio.h>
struct book
{
   char title[100];
   char author[100];
   double price;
   int pages;
};

int main()
{
   struct book book1 = {"fullstack", "Rahul", 587.56, 134};
     
   printf("Title:  %s \n", book1.title);
   
   printf("Author: %s \n", book1.author);
   
   printf("Price:  %lf\n", book1.price);
   
   printf("Pages:  %d \n", book1.pages);
   
   printf("Size of book struct: %d", sizeof(struct book));
   
   return 0;
  
}



