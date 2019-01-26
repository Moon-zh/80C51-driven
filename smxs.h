#define led P0
sbit cs1=P2^6;
sbit cs2=P2^7;
sbit e=P2^5;
uchar ds[8];
uchar  tab[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
uchar  wei[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++);
	for(j=0;j<=1;j++);
}

void	d()
{
	e=cs1=0;
	e=cs1=1;
}

void	w()
{
	e=cs2=0;
	e=cs2=1;	
}

void	xs()
{
	uchar ds8;
	led=tab[ds[ds8]];d();		 
	led=wei[ds8];w();		 
	delay(100);	 
	led=0xff;	 
	d();w();
	if(++ds8==8)ds8=0;
}

//¼Óµã
void	xs()
{
 	uchar ds9,ds8;
	ds9=tab[ds[ds8]];
	if(ds8==0)ds9&=0x7f;
	led=ds9;
	d();		 
	led=wei[ds8];	 
	w();		 
	delay(100);	 
	led=0xff;	 
	d();
	w();
	if(++ds8==8)ds8=0;
}