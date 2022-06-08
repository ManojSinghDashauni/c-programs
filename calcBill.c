#include<stdio.h>
#include<conio.h>
int
main ()
{
  float TotalAmt, Amt, SubTotal, DisAmt, TaxAmt, Qty, Val, Discount, Tax;
  printf ("enter the Qty of item sold:");
  scanf ("%f", &Qty);
  printf ("\nenter the Val of items:");
  scanf ("%f", &Val);
  printf ("\nenter the Discount percentage:");
  scanf ("%f", &Discount);
  printf ("\nenter the Tax:");
  scanf ("%f", &Tax);

  Amt = Qty * Val;
  DisAmt = (Amt * Discount) / 100.0;
  SubTotal = Amt - DisAmt;
  TaxAmt = (SubTotal * Tax) / 100.0;
  TotalAmt = SubTotal + TaxAmt;

  printf ("\n\n\n ***********BILL***********");
  printf ("\n Qty sold: %f", Qty);
  printf ("\n price per item: %f", Val);
  printf ("\n---------------------------------");

  printf ("\n Amt: %f", Amt);
  printf ("\n Discount: - %f", DisAmt);
  printf ("\n Discount : %f", SubTotal);
  printf ("\n Tax: + %f", TaxAmt);
  printf ("\n---------------------------------");

  printf ("\n total amt: %f", TotalAmt);

}
