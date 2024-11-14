#include <stdio.h>
struct book
{
   char title[100];
   int edition;
   char author[100];
   float price;
   int pages;
}c1,c2,c3,c4,c5;

int main ()
{
strcpy(c1.title,"C language");
strcpy(c2.title,"C++ language");
strcpy(c3.title,"java language");
strcpy(c4.title,"python language");
strcpy(c5.title,"HTML language");

c1.edition=5;
c2.edition=10;
c3.edition=15;
c4.edition=20;
c5.edition=25;

strcpy(c1.author,"Dennis Richies");
strcpy(c2.author,"Bjarne Stroustrup");
strcpy(c3.author,"James Gosling");
strcpy(c4.author," Guido van Rossum");
strcpy(c5.author," Tim Berners-Lee");

c1.price=1000;
c2.price=900;
c3.price=1150;
c4.price=114;
c5.price=11445;

c1.pages=506;
c2.pages=305;
c3.pages=145;
c4.pages=154;
c5.pages=840;


printf("Detalis of the book  \n");
printf("Title : %s \n",c1.title);
printf("edition : %d \n",c1.edition);
printf("author : %s \n",c1.author);
printf("price : %f \n",c1.price);
printf("pages : %d \n",c1.pages);
printf("\n");

printf("Detalis of the book  \n");
printf("Title : %s \n",c2.title);
printf("edition : %d \n",c2.edition);
printf("author : %s \n",c2.author);
printf("price : %f \n",c2.price);
printf("pages : %d \n",c2.pages);
printf("\n");


printf("Detalis of the book  \n");
printf("Title : %s \n",c3.title);
printf("edition : %d \n",c3.edition);
printf("author : %s \n",c3.author);
printf("price : %f \n",c3.price);
printf("pages : %d \n",c3.pages);
printf("\n");


printf("Detalis of the book   \n");
printf("Title : %s \n",c4.title);
printf("edition : %d \n",c4.edition);
printf("author : %s \n",c4.author);
printf("price : %f \n",c4.price);
printf("pages : %d \n",c4.pages);
printf("\n");


printf("Detalis of the book  \n");
printf("Title : %s \n",c5.title);
printf("edition : %d \n",c5.edition);
printf("author : %s \n",c5.author);
printf("price : %f \n",c5.price);
printf("pages : %d \n",c5.pages);
printf("\n");

}

