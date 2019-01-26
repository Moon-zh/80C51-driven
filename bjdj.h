#define lcd P0
sbit	cp=P2^4;		
sbit	dir=P2^5;
sbit	pro=P2^6;
void delay(int x)	
{
	int i,j;
	for(i=0;i<x;i++);
	for(j=0;j<=300;j++);
}

void	bjdj()		
{
	uint i;
	dir=1;
	while(pro!=0)			
      {
      	cp=!cp;
	delay(20);
      }

      dir=0;
      for(i=0;i<0x96;i++)	
      {
       cp=!cp;
       delay(20);
      }
}

void	run(uchar a,uchar b)	
{
	uint i;		
	for(i=a*b;i>0;i--)
  {
  	cp=!cp;
	delay(20);
  }
}

void	main()
{
	bjdj();			
	run(10,0x11);		
	while(1)£»		
}


