#include <stdio.h>

int num1,num2,acc;
char opr,ind,aus;

int ec1=0;
//int ec2=0;
int key=0;
int lpkey=0;


void enterV()
{
	printf("enter value 1 : ");
	scanf("%d",&num1);
	
	printf("enter operator : ");
	scanf(" %c",&opr);
	
	printf("enter value 2 : ");
	scanf("%d",&num2);
}

void errchk()
{
	if(opr!='+' && opr!='-' && opr!='*' && opr!='/')
	{
		ec1=1;
		printf("\tinvalid operator\n");
	}
	if(num2==0)
	{
		ec1=1;
		printf("\tcannot devide by 0\n");
	}
}


void mrcal()
{
	printf("more calculations? (y/n)");
	scanf(" %c",&aus);
	
	if(aus=='n'||aus=='N')
		key=1;
	if(aus=='y'||aus=='Y')
		lpkey=1;
}


void errcrr()
{
	printf("re-enter values? (y/n)");
	scanf(" %c",&ind);
	
	if(ind=='y'||ind=='Y')
		lpkey=1;
	if(ind=='n'||ind=='N')
		key=1;
}

int machine()
{
	if(opr=='+')
		acc = num1+num2;
	
	else if(opr=='-')
		acc = num1-num2;
		
	else if(opr=='*')
		acc = num1*num2;
		
	else if(opr=='/')
		acc = num1/num2;

	printf("\t%d%c%d = %d\n\n",num1,opr,num2,acc);
}


int main()
{
	while(key==0)
	{
		enterV();
		errchk();
		
		if(ec1==1)
		{	
			errcrr();
				if(lpkey==1)
					continue;
			lpkey=0;
		}
		else
			machine();
			
		mrcal();
		if(lpkey==1)
			continue;
	}
}





