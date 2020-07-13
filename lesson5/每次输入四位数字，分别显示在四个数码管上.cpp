#include<reg52.h>
sbit k1 = P1^1;
sbit k2 = P1^2;
sbit k3 = P1^3;
sbit k4 = P1^4;//k1-k4 4个位选开关,
uchar code table[]={0xc0,0xf9,0xa4,0xb0,
0x99,0x92,0x82,0xf8；
0x80,0x98};//共阳极1-9
void delay( char t )//延时函数
{
char x,y;
for( x = t;x > 0;x-- )
{
for( y = 100;y > 0;y-- );
}
}
void main()//主函数
{
int i = 1234;
int temp;
while(1)
{
temp = i;//temp = 1234;
//显示第4位
k1 = k2 = k3 = k4 = 1;//关闭所有未选
k4 = 0;//打开第4位位选
P2 = table( temp%10 );//假设P2口控制数码管
temp = temp / 10;//temp = 123
delay( 5 );
//显示第3位
k1 = k2 = k3 = k4 = 1;//关闭所有未选
k3 = 0;//打开第3位位选
P2 = table( temp%10 );//,假设P2口控制数码管
temp = temp / 10;//temp = 12
delay( 5 );
//显示第2位
k1 = k2 = k3 = k4 = 1;//关闭所有未选
k4 = 0;//打开第4位位选
P2 = table( temp%10 );//,假设P2口控制数码管
temp = temp / 10;//temp = 1;
delay( 5 );
//显示第1位
k1 = k2 = k3 = k4 = 1;//关闭所有未选
k4 = 0;//打开第1位位选
P2 = table( temp%10 );//假设P2口控制数码管
delay( 5 );
}
}