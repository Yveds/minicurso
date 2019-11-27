#include <stdio.h>
#include <stdlib.h>
#define tam 5

int funcao( MT[][tam]){
    int produtorial=0;
     
      for(int i=0;i<tam;i--){
          for(int j=0;j<tam;j++){
              produtorial+=MT[i][j]*x;
         }
      }
       return produtorial;
}	
int main()
{        int x,MT[tam][tam]={{0,2,8,1,7},{1,5,8,2,2},{3,4,0,8,1},{9,1,2,7,2},{3,0,1,0,4}};
    	
	 printf("Matriz:\n\n");
	  for(int i=0;i<tam;i++){
          	for(int j=0;j<tam;j++){
                 printf("%d",MT[i][j]);
         	}
               printf("\n");
         }
       
        printf("Digite um numero:\n");
	scanf("%d",&x);
    
	printf("\no resultado eh:%d",funcao(MT,x);
        return 0;
}
