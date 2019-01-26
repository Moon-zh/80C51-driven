#define dz P0
sbit row0=P2^0;
sbit row1=P2^1;
sbit col0=P2^2;
sbit col1=P2^3;
sbit col2=P2^4;
sbit col3=P2^5;

uchar dz1,dz2,dz3;
uchar code tab[]={};
void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++);
	for(j=0;j<=1;j++);
}

void	dzqp()		
{
	dz=0;
	row0=1;
	row0=0;
	row1=1;
	row1=0;
	col0=1;
	col0=0;
	col1=1;
	col1=0;
	col2=1;
	col2=0;
	col3=1;
	col3=0;		
}

void	sycx()			
{
	dz=dz1;
	row0=1;
	row0=0;
	delay(5);	
}

void	xycx()			
{
	dz=dz1;
	row1=1;
	row1=0;
	delay(5);
	
}

void	xzcx()			
{
	dz3=dz2;		
	dz=p[dz3];
	col0=1;
	col0=0;
	
	dz3=0x20+dz2;		
	dz=p[dz3];	
	col2=1;
	col2=0;

	dz2++;

	dz3=dz2;		
	dz=p[dz3];
	col1=1;
	col1=0;
	
	dz3=dz2+0x20;		
	dz=p[dz3];	
	col3=1;
	col3=0;
	dz2++;
}

void	dzcx()			
{
	uint i;
	dz1=1;
	dz2=0;
	for(i=0;i<8;i++)	
 {
	dzqp();
	xzcx();
	sycx();
	dz1<<=1;
  }	
	dz1=1;
	for(i=0;i<8;i++)	
  {
	dzqp();
	xzcx();
	xycx();
	dz1<<=1;
   }
}

void	main()			
{
	uint p;
	while(1)
	{
	p=tab;
	dzcx();
	}
}
//Êý×Ö
uchar dz1,dz2,sw,gw,xs;
void	xzcx()			
{
				
	dz=p[sw];
	col0=1;
	col0=0;
	sw++;
	
				
	dz=p[gw];	
	col2=1;
	col2=0;
	gw++;


				
	dz=p[xs];
	col1=1;
	col1=0;
	xs++;
					
	col3=0;
}

void	yscx()
{
	sw=sw*16;
	gw=gw*16;
	xs=xs*16;

}