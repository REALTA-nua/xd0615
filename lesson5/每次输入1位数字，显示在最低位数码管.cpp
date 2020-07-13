#include <reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
sbit dula=P2^6;
sbit wela=P2^7;
uint num,aa;
uchar code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x5e,0x77,0x7c,0x39,0x5e,0x79,0x71};
void delay(uint x)
{
int i,j;
for(i=x;i>0;i--)
for(j=110;j>0;j--);
}
void main()
{
aa=0x7f;
while(1)
{
for (num=0;num<16;num++)
{ wela=1;
dula=1;
P0=table[num];
dula=0;
delay(100);
dula=1;
wela=1;
P0=table[num];
wela=0;
delay(100);
if(num==16) num=0;
}
}
}