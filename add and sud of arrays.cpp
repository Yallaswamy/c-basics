#include<stdio.h>
int main()

 {
 
int r,c;
//reading order
scanf("%d%d",&r,&c);
//declaring matrices with given order

int mat1[r][c],mat2[r][c];
int add[r][c],dii[r][c],res[r][c];
int i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
scanf("%d",&mat1[i][j]);
}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
scanf("%d",&mat2[i][j]);
}
}
add[r][c]=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
add[r][c]=mat1[i][j]+mat2[i][j];
}
}
dii[r][c]=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
dii[r][c]=mat1[i][j]-mat2[i][j];
}
}
res[r][c]=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
res[r][c]=add[r][c]+dii[r][c];
}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
printf("%d\n",res[r][c]);
}
}
printf("\n");
return 0;
}

