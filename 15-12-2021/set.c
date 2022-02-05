#include<stdio.h>
#include<stdlib.h>
void set_union();
void set_intersection();
void set_diffrence();
void set_equality();
  int i,s[10],si[10],sj[10],li,lj,choice;
void main()
{

    printf("enter the length of first set");
    scanf("%d",&li);
    printf("enter the first set");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("enter the length of second set");
    scanf("%d",&lj);
    printf("enter the second set");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    while(choice !=4)
    {

    printf("\n 1. UNION\n,\n 2. INTERSECTION \n , \n 3. DIFFRENCE \n , \n 4. EQUALITY \n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        set_union();
        break;
    case 2:
        set_intersection();
        break;
    case 3:
        set_diffrence();
        break;
    case 4:
        set_equality();
        break;
        default:("invalid");
    }
    }
}
void set_union()
{
    if(li!=lj)
    {
        printf("two sets are not compactable for union");
    }
    else
        printf("\n union \n ");
        for(i=0;i<li;i++)
        {

            s[i]=si[i] || sj[i];
        }
        for(i=0;i<lj;i++)
        {

             printf("%d",s[i]);
        }
}
        void set_intersection()
        {
        if(li!=lj)
    {
        printf("two sets are not compactable for union");
    }
    else
        printf("\n intersection \n");
        for(i=0;i<li;i++)
        {

            s[i]=si[i] && sj[i];
        }
        for(i=0;i<lj;i++)
        {

             printf("%d",s[i]);
        }
        }
        void set_diffrence()
        {
        if(li!=lj)
    {
        printf("two sets are not compactable for union");
    }
    else
        printf("\n diffrence \n");
        for(i=0;i<li;i++)
        {
            sj[i]=!sj[i];
        }
        for(i=0;i<li;i++)
        {

            s[i]=si[i] && sj[i];
        }
        for(i=0;i<lj;i++)
        {

             printf("%d",s[i]);
        }
        }
        void set_equality()
        {
            if(li!=lj)
    {
        printf("two sets are not compactable for union");
    }
    else
        printf("\n equality \n");



           if(si[i]!=sj[i])
           {
               printf("true");
           }
              else
               {
                   printf("false");
               }

        }
