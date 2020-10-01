#include<stdio.h>

int main()
{
	printf("Enter a Number:\n");
    int n,ans;
    scanf("%d",&n);
    printf("No of digit ending in 9:\n");
    ans=digit_9(n);
    printf("%d",ans);
   
}

int digit_9(int n)
{
	 int k,a;
	 k=n%10;//k id the last digit of the number 
    a=n-(9*(9-k));//a is the last didgit of the no of digit ending in 9
    if(a>=9 && a%10==9)//for example 156=9+9+9+129 ;here a is 129 which is the last digit ending in 9.
    {
    	return 10-k;
	}
    else
      return -1;
    
}
