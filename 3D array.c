#include <stdio.h>
int main(){
	
int marks[2][2][3] ={ {{42,30,27},{18,20,37}},{{67,80,53},{70,63,50}} };
int i,k,j;

    for(i=0;i<2;i++){
		
		for(k=0;k<2;k++){
			
			for(j=0;j<3;j++){
				
					printf("marks[%d][%d][%d]=[%d]\n",i,k,j,marks[i][k][j]);
				
				
			} 
		
		}
	}


	

	
	
	
	
	
	
	
	
	
	
	return 0;
}