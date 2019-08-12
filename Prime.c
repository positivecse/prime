void main()
{int i,c=0,n;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
if(n<=1000)
{
for(i=1;i<=n;i++)
{if(n%i==0){c++;}}
if(c==2)
printf("Yes this is prime number");
else
printf("No this is not a prime number");
}
else
{printf("Out of range");}
getch();
}
