#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{ int checksum=0;
  long card_no=get_long("Please enter card no \n");
 long s=card_no;
 long card_number=card_no;
for(int i=1;i<9;i++){
card_no=card_no/10;
int dig=card_no%10;
dig=dig*2;
if(dig<9){
checksum =checksum+dig;
}
else{
    int a=dig%10;
    checksum=checksum+a;
    dig=dig/10;
    checksum=checksum+dig;
}
card_no=card_no/10;
}
for(int k=1;k<=9;k++){
   int b=s%10;
   checksum=checksum+b;
   s=s/100;
}
int M=(card_number/pow(10,14));
int A=(card_number/pow(10,13));
int C=(card_number/pow(10,12));
int G=(card_number/pow(10,15));
if(((M==51)||(M==52)||(M==53)||(M==54)||(M==55))&&(checksum%10==0))
  {printf("MASTERCARD\n");}
else if(((A==34)||(A==37))&&(checksum%10==0))
   {printf("AMEX\n");}
else if(((G==4)||(C==4))&&(checksum%10==0))
{printf("VISA\n");}
else
{printf("INVALID\n");}
}
