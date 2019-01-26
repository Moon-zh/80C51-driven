void	ajpd()
{
	uint i;	
  	aj=0x7f;
	i=0;
	if(c0==0)goto aj1;		
	i++;
	if(c1==0)goto aj1;
	i++;
	if(c2==0)goto aj1;
	i++;
	if(c3==0)goto aj1;
	aj=0xbf;
	i++;
	if(c0==0)goto aj1;		
	i++;
	if(c1==0)goto aj1;
	i++;
	if(c2==0)goto aj1;
	i++;
	if(c3==0)goto aj1;
	aj=0xdf;
	i++;
	if(c0==0)goto aj1;		
	i++;
	if(c1==0)goto aj1;
	i++;
	if(c2==0)goto aj1;
	i++;
	if(c3==0)goto aj1;
	aj=0xef;
	i++;
	if(c0==0)goto aj1;		
	i++;
	if(c1==0)goto aj1;
	i++;
	if(c2==0)goto aj1;
	i++;
	if(c3==0)goto aj1;
	goto aj2;

aj1:	
    	ajbz=i;
aj2:	aj=0xff;
	while(c0==0);
	while(c1==0);
	while(c2==0);
	while(c3==0);
}