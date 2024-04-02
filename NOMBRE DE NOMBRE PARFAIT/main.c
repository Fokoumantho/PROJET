#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,j,compt;
    printf("entrer le nombre =");
    scanf("%d",&n2);
        for(n1=1;n1<n2;n1++){
            compt=0;
            for(i=1;i<n1;i++){
                if(n1%i==0){
                    compt=compt+i;

                }
            }
            if(n1==compt){
                printf(" %d ",n1);
            }
        }
    return 0;
}
