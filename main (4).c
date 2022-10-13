/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],s[2][2],i,j,k,min,max,mult[3][3];
    int *p,*q;
    p=&a[0][0];
    q=&a[0][0];
    int num; //choice
    printf("\nenter the choice ");
    scanf("%d",&num);
    printf("\nenter elements of matrix A :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        
        scanf("%d",&a[i][j]);
        }
    }
    switch(num)
    {
        case 1: //for matrix addition 
    
     for(int i=0;i<3;i++)
     { 
         for(int j=0;j<3;j++)
         {
         printf("%d\t",*(p+(i*3)+j));
         }
     }
     printf ("\nenter the elements of matrix B :\n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
              scanf("%d",&b[i][j]);
         }
     }
   
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
           printf("%d\t",*(q+(i*3)+j));  
         }
     }
    printf(" \nAddition of matrix A and B is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;
    
    case 2:// for matrix multiplication
    
     printf("multiplication of matrix =\n"); 
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           mult[i][j]=0;
           for(int k=0;k<3;k++)
           {
           mult[i][j]+=a[i][k]*b[k][j];
           }
       }
    }
          
    
    //for printing result
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           printf("%d\t",mult[i][j]);
       }
       printf("\n");
    }
    break;
    
    
    case 3:              //for finding saddle point of the matrix 
    
      for(i=0;i<2;i++)   
    {
        min=a[i][0];            //min is consider to be first element of array
       for(j=0;j<2;j++)  
      {
          if(min>=a[i][0])
          {
              min = a[i][j];
              s[0][0]=i;
              s[0][1]=j;
            }
          j = s[0][1];  //for column
          max = a[0][j];    //max is consider to be first element of that column
          for(k=0;k<3;k++) 
          {
              if(max<=a[k][j])
              {
                  max = a[k][j];
                   s[1][0]=k;
                   s[1][1]=j;
              }
          }
              if(min==max)
              {
                  if(s[0][0]==s[1][0]&&s[0][1]==s[1][1])
                  {
                      printf("\n%d is  the saddle point and it is at position  %d %d",a[i][j],i,j);
                  }
              }
          }
   
     break;
    
    }
return 0 ;
 }
 }
   


