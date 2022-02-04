#include<stdio.h>
void main()
{
int array[100],i,n,pos,choice=1,val,ch,flag;
printf("enter the number of elements in array \n");
scanf("%d",&n);
printf("enter the %d element \n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
while(choice>0&&choice<6)
{
printf("1.insertion\n 2.traversing\n 3.deletion\n 4.searching\n 5.exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
      printf("enter the position to isert an element \n");
      scanf("%d",&pos);
      printf("enter the value to insert \n");
      scanf("%d",&val);
      for(i=n-1;i>=pos-1;i--)
      array[i+1]=array[i];
      array[pos-1]=val;
       printf("the resultant array is \n");
      for(i=0;i<n+1;i++)
      {
      printf("%d \n",array[i]);
      }
      break;
case 2:
      printf("the resultant array is \n");
      for(i=0;i<n;i++)
      {
      printf("%d \n",array[i]);
      }
      break;
case 3:
      printf("enter the location to delete \n");
      scanf("%d",&pos);
      for(i=pos-1;i<n;i++)
      array[i]=array[i+1];
      printf("the resultant array is \n");
      for(i=0;i<n;i++)
      printf("%d \n",array[i]);
      break;
case 4:
      printf("enter the element to search \n");
      scanf("%d",&ch);
      flag=0;
      for(i=0;i<n;i++)
      if(array[i]==ch)
      {
      flag=1;
      }
      if(flag==1)

      printf("element is found \n");

       else

      printf("not found \n");


      break;
case 5:
      exit(0);
      break;
      }
}
}
