  #include<stdio.h>
  #include<conio.h>
  int rev(int );
  void main()
  {	int n;
	scanf("%d",&n);
	printf("reverse of no.=\n",rev(n));
	getch();
  }
  int rev(int a)
  {	int l,r;
	if(a>0)
	{	l=a%10;
		r=r*100+l;
		rev(a/10);
		return(r);
	  }
	}