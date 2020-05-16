//ELECTRICITY BILL CALCULATOR
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{  int cust_no, unit_con;
   float charge,surcharge=0, amt,total_amt;
   char nm[25];
   printf("Enter the Customer IDNO :\t");		//CUSTOMER ID
   scanf("%d",&cust_no);
   printf("\nEnter the Customer Name :\t");		// NAME OF THE CUSTOMER
   scanf("%s",&nm);
   printf("\nEnter the Unit Consumed By Customer  :\t");		//UNIT CONSUMED BY CUSTOMER
   scanf("%d",&unit_con);
   if (unit_con <200 )
charge = 1.20;
   else if (unit_con>=200 && unit_con<400)
charge = 1.60;
else if (unit_con>=400 && unit_con<600)
charge = 2.00;
else
charge = 2.50;
   amt = unit_con*charge;
   if (amt>300)
surcharge = amt*15/100.0;
   total_amt = amt+surcharge;
   if (total_amt  < 25)
total_amt =25;
   printf("\n\n\t\t\tElectricity Bill\n\n");
   printf("Customer IDNO                         :\t%5d",cust_no);
   printf("\nCustomer Name                         :\t%5s",nm);
   printf("\nunit Consumed                         :\t%5d",unit_con);
   printf("\nAmount Charges @Rs. %4.2f  per unit    :\t%8.2f",charge,amt);
   printf("\nSurchage Amount                       :\t%8.2f",surcharge);
   printf("\nNet Amount Paid By the Customer       :\t%8.2f",total_amt);
   return 0;
   getch();
}
