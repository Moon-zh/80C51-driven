#define lcd P0
sbit rs=P2^0;
sbit e=P2^1;

uchar tab[]={"Are You Ready!0"};
void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++);
	for(j=0;j<=1;j++);
}

void	xies(uint a,b)			
{					
	lcd=a;
	rs=b;
	e=1;
	delay(250);
	e=0;
}

void	lcdcs()		
{
	uchar i;
	for(i=0;i<15;i++)
	delay(250);
	for(i=0;i<3;i++)
	xies(0x38,0);
	delay(250);
	xies(0xc0,0);
	delay(250);
	xies(1,0);
}

void	1602()			
{
	uint i,k;
	lcdcs();	
	xies(0x80,0);	
	i=0;
	while(k!='0')		
 	  {
	   k=tab[i];	
	   i++;			
	   xies(k,1);		
          }
}

