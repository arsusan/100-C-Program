// 20.Total in mathematics and physics >=150
// Write a program to process the applications to list eligible candidate.
#include <stdio.h>
void main()
{  int p,c,m,t,mp;

   printf("Eligibility Criteria :\n");
   printf("Marks in Maths >=80\n");
   printf("and Marks in Phy >=70\n");
   printf("and Marks in Chem>=60\n");
   printf("and Total in all three subject >=150\n");
   printf("-------------------------------------\n");

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);

   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   
   printf("Total marks of Maths and  Physics : %d\n",m+p);

   if (m>=80)
         if(p>=70)
	        if((m+p)>150)
	            printf("The  candidate is eligible. \n");
	        else
	            printf("The candidate is not eligible.\n");
        else
	        printf("The candidate is not eligible.\n");
    else
	    printf("The candidate is not eligible.\n");
}
