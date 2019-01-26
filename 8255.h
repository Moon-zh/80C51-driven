#define 8255 XBYTE[P2*0x100+0xff]
void init_8255()
{
	a1=a0=1;
	PD=0x99;	
}

void pak()
{
	uchar a;
	do
	{	a1=a0=0;
		a=8255;
		delay(10);
		b=8255;
	}while(a!=b);
}

void pck()
{
	uchar a;
	do
	{
		a1=1;a0=0;
		a=8255;
		delay(10);
		aj=8255;
	}while(a!=aj);
}

void sf()
{
	while(pck(),aj!=0xff);
}