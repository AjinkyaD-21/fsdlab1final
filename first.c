#include<stdio.h>
void printarr(int arp[2][2]);

 int main()
{
    int arr[2][2];
    int i,j;
    printf("ACCEPTING VALUES\n");
    for(i=0;i<2;i++)

        for(j=0;j<2;j++)
        
            scanf("%d", &arr[i][j]);

        
    
    printarr(arr);
}
    void printarr(int arp[2][2])
{
    int x,y;
    
    for(x=0;x<2;x++)
    {
    printf("\n");
    
        for(y=0;y<2;y++)
     {   
        printf("%d\t",arp[x][y]);
     }
    }

    
}


