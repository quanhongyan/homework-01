#include<stdio.h>
#include<string.h>
int getsum(int s[30],int n,int t[30],int *p1,int *p2)
{
	int i,j1=0,j2=0;
	int sum=0;
	int x=0;
	int temp[30];
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(x>0)
		{
			x+=s[i];
			t[j1++]=s[i];
		}
		else
		{
		    x=s[i];
			t[j1++]=s[i];
			*p1=i;
		}
		if(x>sum)
		{
			sum=x;
			*p2=i;
		}
	}
	return sum;
   
}
int main(){
	int t[30];
	int s[30];
	int sum=0;
	int i=0;
	int n;
	int *p1,*p2;
	int t1,t2;
	p1=&t1;
	p2=&t2;
	printf("���������鳤��");
	scanf("%d",&n);
	printf("��������������");
		for(i=0;i<n;i++)
			scanf("%d",&s[i]);
	
	sum=getsum(s,n,t,p1,p2);
	printf("��������Ϊ��");
	printf("sum=%d\n",sum);
	printf("�������Ϊ��");
	for(i=t1;i<=t2;i++)printf("%d  ",t[i]);
	printf("\n");
    printf("��������ԭ�����е�λ��Ϊ��%d-%d",t1+1,t2+1);
	printf("\n");
}