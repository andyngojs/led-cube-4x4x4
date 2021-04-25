#include <reg2051.H>
#include "delay.h"
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
void STEP4()
{
unsigned int i,j=0;
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x08;	
delay_us(150);
}
}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x04;
delay_us(150);
}}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x02;
delay_us(150);
}}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x01;
delay_us(150);
}}}
void STEP3()
{
unsigned char i,j=0;
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x01;
delay_us(150);
}}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x02;
delay_us(150);
}}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x04;
delay_us(150);
}}
for(j=0;j<100;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x08;
delay_us(150);
}}}

void STEP1()
{
unsigned char i=0;

for(i=0;i<16;i++)
{
P1=(i<<4)|0x08;
delay_ms(400);
}
for(i=0;i<16;i++)
{
P1=(i<<4)|0x04;
delay_ms(400);
}
for(i=0;i<16;i++)
{
P1=(i<<4)|0x02;
delay_ms(400);
}
for(i=0;i<16;i++)
{
P1=(i<<4)|0x01;
delay_ms(400);
}}
void STEP2()
{
unsigned char i,j=0; 
for(i=0;i<2;i++)
{
P1=0x0F;
delay_ms(500);
P1=0x1F;
delay_ms(500);
P1=0x2F;
delay_ms(500);
P1=0x3F;
delay_ms(500);
P1=0x4F;
delay_ms(500);
P1=0x5F;
delay_ms(500);
P1=0x6F;
delay_ms(500);
P1=0x7F;
delay_ms(500);
P1=0x8F;
delay_ms(500);
P1=0x9F;
delay_ms(500);
P1=0xAF;
delay_ms(500);
P1=0xBF;
delay_ms(500);
P1=0xCF;
delay_ms(500);
P1=0xDF;
delay_ms(500);
P1=0xEF;
delay_ms(500);
P1=0xFF;
delay_ms(500);
}}

void STEP5()
{
unsigned int j=0;
for(j=0;j<5;j++)
{
P1=0x0F;
delay_ms(200);
P1=0x1F;
delay_ms(200);
P1=0x2F;
delay_ms(200);
P1=0x3F;	  
delay_ms(200);

P1=0x7F;
delay_ms(200);
P1=0x6F;
delay_ms(200);
P1=0x5F;
delay_ms(200);
P1=0x4F;
delay_ms(200);

P1=0x8F;
delay_ms(200);
P1=0x9F;
delay_ms(200);
P1=0xAF;
delay_ms(200);;
P1=0xBF;
delay_ms(200);

P1=0xFF;
delay_ms(200);
P1=0xEF;
delay_ms(200);
P1=0xDF;
delay_ms(200);
P1=0xCF;
delay_ms(200);


P1=0xFF;
delay_ms(200);
P1=0xEF;
delay_ms(200);
P1=0xDF;
delay_ms(200);
P1=0xCF;
delay_ms(200);

P1=0x8F;
delay_ms(200);
P1=0x9F;
delay_ms(200);
P1=0xAF;
delay_ms(200);;
P1=0xBF;
delay_ms(200);


P1=0x7F;
delay_ms(200);
P1=0x6F;
delay_ms(200);
P1=0x5F;
delay_ms(200);
P1=0x4F;
delay_ms(200);



P1=0x0F;
delay_ms(200);
P1=0x1F;
delay_ms(200);
P1=0x2F;
delay_ms(200);
P1=0x3F;	  
delay_ms(200);
}}
void STEP0()
{
unsigned char i,j,j1=0;
for(j1=0;j1<5;j1++)
{
for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x01;
delay_us(150);
}}

for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x02;
delay_us(150);
}}


for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x04;
delay_us(150);
}}


for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x08;
delay_us(150);
}}


for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x08;	
delay_us(150);
}}


for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x04;
delay_us(150);
}}


for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x02;
delay_us(150);
}}

for(j=0;j<10;j++)
{
for(i=0;i<16;i++)
{
P1=(i<<4)|0x01;
delay_us(150);
}}}}		   
 
void main(void)
{ 
delay_sec(1);
while (1) 
{
//#############self checking############
STEP0();
STEP1();
STEP2();
//rainfall ********************************
STEP3();
STEP4();
STEP5();
}}
