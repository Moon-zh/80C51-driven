#define lcd P0
sbit cs2=P2^0;
sbit cs1=P2^1;
sbit e=P2^2;
sbit rs=P2^3;
bit	bz1;
void	quan()
{
	cs1=cs2=1;
}

void	xies(uchar a,uchar b)
{
	e=0;
	rs=b;
	lcd=a;
	e=1;
	e=0;
}

void	qp()
{
	uchar k,xd;
	quan();
	xies(0x3f,0),xies(0xc0,0);
	for(xd=0xb8;xd<0xc0;xd++)
	{
		xies(xd,0),xies(0x40,1);
		for(k=0;k<64;k++)
      		xies(0,1);
  	}
}

void	pdqf()
{
	if(bz1==1)
	{cs1=!cs1;
	cs2=!cs2;}	
}

uchar	tu0(uchar yd,xd)
{
	if(yd>=0x80)		
	{
	 yd=yd-0x40;		
	 bz1=1;pdqf();		
	 xies(xd,0),xies(yd,0);
	}
	return yd;

}

void	xiecx(uchar x,y,x1,y1,hzs,uint a,uchar code *qb)
{					
	uchar i,k,l,y2;
	x+=0xb8;y+=0x40;
	cs1=1,cs2=0;
	y=tu0(y,x);		
	xies(0xc0,0);
        for(l=0;l<hzs;l++)	
        {
	  for(i=0;i<x1;i++)	
	  {
	     y2=y;		
	     bz1=0;
	     xies(x,0),xies(y,0);
	     for(k=0;k<y1;k++)	
	     {
	       xies(qb[a],1);	    
	       y++;a++;	
	       y=tu0(y,x);			   
	     }
	     x++;y=y2;		
	     pdqf();	
	  }	
	  x=x-2;y=y+y1;
	  y=tu0(y,x);
        }		
}

void	qp1(uchar a,b,c,d)
{
	uchar k,xd;
	xies(0x3f,0),xies(0xc0,0);
	for(xd=c;xd<d;xd++)
	{
		xies(xd,0),xies(b,1);
		for(k=0;k<a;k++)
      		xies(0,1);
  	}
}	    