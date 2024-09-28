#include <stdio.h>
int main(){
	
	int age; //%d
	 float annualincome; //%f
	 
	 printf("welcome to mkopo mzuri\n");
	 
	 printf("input age\n");
	scanf("%d",&age);
	
	if(age<=21){
	printf("invalid age\n");
	}


   printf("input annualincome\n");
   scanf("%f",&annualincome);
   
   if(annualincome<=0){
	 printf("invalid amount\n");	
   }
   
   
	 
	 if(age>=21&& annualincome>=21000) {
		 printf("congradulation you qualify for the loan\n");
		 
	 } 
	 
	 else{printf("unfortunetly we are unble to offer u loan\n");
	  
	    }
	return 0;
}