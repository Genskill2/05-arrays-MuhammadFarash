/* Enter your solutions in this file */
#include <stdio.h>
/* max funtion */
int max(int a[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else
			continue;
	}
	return max;
	}
/* min funtion */
 int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		else
			continue;
	}
	return min;
}
/* mode */
int mode(int arr[], int len)
  {
  int ar2[len],n,p,max;
  int count=0;
  	for(int i=0;i<len;i++)
  	{
  	for(int j=0;j<len;j++){
  		if(arr[j] == n)
  		count=count +1;
  	}
  	ar2[i] = count;
  	count = 0;
  }
  max = ar2[0];
  for(int h=0;h<len;h++){
   	if(ar2[h]>max){
   		max = ar2[h];
   		}
   	}
   for( int p=0;p<len;p++){
   	if(max == ar2[p])
   	break;
   	}
   	return arr[p];
   }
/* factor */
int factors(int num, int arr[])
{
int cpy = num,count = 0, count1 =0;
	for(int i = 2; i< num/2 ; i++){
		if(num%i == 0){
			for(int j = 2; j<=i ; j++){
				if(i%j==0)
				count = count +1;
			}
			if(count == 1)
			{
			while(cpy%i == 0)
			{
			arr[count1] = i;
			cpy = cpy/i;
			count1 = count1+1;
			}
			cpy = num;
			}
			count = 0;
		}
			else
			continue;
	}
			return count1;
}
/*average */
float average(int a[], int n)
  	{
  	float sum=0;
  	for(int i=0;i<n;i++)
  	{
  	  sum=sum+a[i];
  	}
  	return sum/n;
  	}



