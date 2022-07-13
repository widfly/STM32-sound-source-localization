												   
#include<reg52.h>

sbit hongwai=P3^1;//红外控制端
sbit jidianqi=P3^2;//继电器控制端


int mian()
{
	while(1)
	{
		if(hongwai==0)
		{
			jidianqi=0;
			while(1);
		}
		else if(hongwai==1)
		{
			jidianqi=1;
		}
	}
}
