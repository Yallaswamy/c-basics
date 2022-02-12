#include<stdio.h>
int main()
{
    int n,rev=0,r,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n%10;
}
    printf("%d",rev);
    printf("rev");
}
   //*
    //if(m=n)
  //  {
    //        printf("True");
//    
  //  }
   // else
   // {
     //   printf("False");
    //}
// return 0;
//}
