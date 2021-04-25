#include <reg2051.H>
#include <stdlib.h>

//to transistors for switching on off layers
sbit px0 = P1^0;
sbit px1 = P1^1;
sbit px2 = P1^2;
sbit px3 = P1^3;

//to 74hc154n for turnning on led. low active, low output
sbit pd0 = P1^4; //decode pin 0
sbit pd1 = P1^5; //decode pin 1
sbit pd2 = P1^6; //decode pin 2
sbit pd3 = P1^7; //decode pin 3

void delay(unsigned int t) {
   unsigned int i;
   for (i = 0 ; i <= t ; i++);
}

void STEP0() {
   unsigned char i,j,j1=0;
   
   for(j1=0;j1<5;j1++) {
      
      for(j=0;j<10;j++) {
         for(i=0;i<16;i++) {
            P1=(i<<4)|0x01;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++) {
         for(i=0;i<16;i++) {
            P1=(i<<4)|0x02;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++)
      {
         for(i=0;i<16;i++)
         {
            P1=(i<<4)|0x04;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++)
      {
         for(i=0;i<16;i++)
         {
            P1=(i<<4)|0x08;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++)
      {
         for(i=0;i<16;i++)
         {
            P1=(i<<4)|0x08;	
            delay(50);
         }
      }
      
      for(j=0;j<10;j++)
      {
         for(i=0;i<16;i++)
         {
            P1=(i<<4)|0x04;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++)
      {
         for(i=0;i<16;i++)
         {
            P1=(i<<4)|0x02;
            delay(50);
         }
      }
      
      for(j=0;j<10;j++) {
         for(i=0;i<16;i++) {
            P1=(i<<4)|0x01;
            delay(50);
         }
      }
      
   }
}	

void STEP1()
{
   unsigned char i=0;
   
   for(i=0;i<16;i++)
   {
      P1=(i<<4)|0x08;
      delay(50);
   }
   
   for(i=0;i<16;i++)
   {
      P1=(i<<4)|0x04;
      delay(50);
   }
   
   for(i=0;i<16;i++)
   {
      P1=(i<<4)|0x02;
      delay(50);
   }
   for(i=0;i<16;i++)
   {
      P1=(i<<4)|0x01;
      delay(50);
   }
}

void STEP2()
{
   unsigned char i,j=0; 
   for(i=0;i<3;i++)
   {
      P1=0x0F;
      delay(50);
      P1=0x1F;
      delay(50);
      P1=0x2F;
      delay(50);
      P1=0x3F;
      delay(50);
      P1=0x4F;
      delay(50);
      P1=0x5F;
      delay(50);
      P1=0x6F;
      delay(50);
      P1=0x7F;
      delay(50);
      P1=0x8F;
      delay(50);
      P1=0x9F;
      delay(50);
      P1=0xAF;
      delay(50);
      P1=0xBF;
      delay(50);
      P1=0xCF;
      delay(50);
      P1=0xDF;
      delay(50);
      P1=0xEF;
      delay(50);
      P1=0xFF;
      delay(50);
   }
}

void STEP3()
{
   unsigned char i,j=0;
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x01;
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x02;
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x04;
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x08;
         delay(50);
      }
   }
}

void STEP4() {
   unsigned int i,j=0;
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x08;	
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x04;
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x02;
         delay(50);
      }
   }
   
   for(j=0;j<100;j++) {
      for(i=0;i<16;i++) {
         P1=(i<<4)|0x01;
         delay(50);
      }
   }
}

void STEP5() {
   
   unsigned int j=0;
   
   for(j=0;j<5;j++) {
      P1=0x0F;
      delay(50);
      P1=0x1F;
      delay(50);
      P1=0x2F;
      delay(50);
      P1=0x3F;	  
      delay(50);
      
      P1=0x7F;
      delay(50);
      P1=0x6F;
      delay(50);
      P1=0x5F;
      delay(50);
      P1=0x4F;
      delay(50);
      
      P1=0x8F;
      delay(50);
      P1=0x9F;
      delay(50);
      P1=0xAF;
      delay(50);
      P1=0xBF;
      delay(50);
      
      P1=0xFF;
      delay(50);
      P1=0xEF;
      delay(50);
      P1=0xDF;
      delay(50);
      P1=0xCF;
      delay(50);
      
      P1=0xFF;
      delay(50);
      P1=0xEF;
      delay(50);
      P1=0xDF;
      delay(50);
      P1=0xCF;
      delay(50);
      
      P1=0x8F;
      delay(50);
      P1=0x9F;
      delay(50);
      P1=0xAF;
      delay(50);
      P1=0xBF;
      delay(50);
      
      P1=0x7F;
      delay(50);
      P1=0x6F;
      delay(50);
      P1=0x5F;
      delay(50);
      P1=0x4F;
      delay(50);
      
      P1=0x0F;
      delay(50);
      P1=0x1F;
      delay(50);
      P1=0x2F;
      delay(50);
      P1=0x3F;	  
      delay(50);
   }
}

void main(void) { 
   
   delay(20);
   
   while(1) 
   {
      //############# self checking ############
      STEP0();
      STEP1();
      STEP2();
      
      //rainfall ********************************
      STEP3();
      STEP4();
      STEP5();
   }
}