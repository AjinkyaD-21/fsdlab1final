#include<stdio.h>
void accept(int a[10][10], int row, int col);
void display(int a[10][10], int row, int col);
void add(int a[10][10], int b[10][10], int c[10][10], int row, int col);
void sub(int a[10][10], int b[10][10], int c[10][10], int row, int col);
void mult(int a[10][10], int b[10][10], int c[10][10], int row, int col);
void transpose(int a[10][10],int d[10][10], int row, int col);
int main()
{
	int a[10][10],b[10][10],c[10][10],d[10][10];
	int row, col,choose,con;
	do
	{
	printf("Enter the size of matrix");
	scanf("%d %d",&row,&col);
	accept(a, row,col);
	display(a,row,col);
	accept(b, row,col);
	display(b,row,col);
	printf("Enter which matrix-operation you wanna have ans of\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
	scanf("%d",&choose);

	switch(choose)
	{
	case 1:

		add(a,b,c,row,col);
		display(c,row,col);
		break;
	case 2:
		sub(a,b,c,row,col);
		display(c,row,col);
		break;
	case 3:
		mult(a,b,c,row,col);
		display(c,row,col);
		break;
	case 4:
		transpose(a,d,row,col);
		display(d,row,col);
		break;
	
	default:
		printf("Entered invalid choice\n");
		break;
	}
	printf("Do you want to continue\nType 0 to continue and 1 to exit\n");
	scanf("%d", &con);
	}
	while(con==0);
	return 0;
}
void accept(int a[10][10], int row, int col)
{
	printf("Enter matrix value\n");
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
}
void display(int a[10][10], int row, int col)
{
	printf("The matrix is\n");for(int m=0;m<row;m++)
		{
			for(int k=0;k<2;k++)
			{
				printf("%d\t",a[m][k]);
				if(k==1)
						{
							printf("\n");
						}
			}

		}
}

void add(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}

void sub(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			c[i][j] = a[i][j]-b[i][j];
		}
	}
}
void mult(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				c[i][j]=0;
				for(int k=0;k<col;k++)
				{
					c[i][j] = c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
}

void transpose(int a[10][10],int d[10][10], int row, int col)
{
	for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				d[i][j] = a[j][i];
			}
		}
}
