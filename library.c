#include <stdio.h>
int main(){
	
	int bookID;
	int duedate;
	int backdate;
	int overdue;
	float finerate;
	float fineamount;
	
	printf("asalam aleikum karibu mkopo bora bwana\n");
	
	printf("inpt bookID\n");
	scanf("%d",&bookID);
	
	printf("duedate\n");
	scanf("%d",&duedate);
	
	printf("backdate\n");
	scanf("%d",&backdate);
	
	overdue =(backdate-duedate);
	
	printf("overdue:%d\n",overdue);
	
	if(overdue<=7){
		finerate = 20;
	}
	else if (overdue>14){
		finerate = 50;
	}
	else if(overdue>=15){
		finerate =100;
	}
	else {finerate =0;
	}
   fineamount = (overdue * finerate);

printf("ID book:%d\n",bookID);
printf("duedate:%d\n",duedate);
printf("backdate:%d\n",backdate);
printf("overdue: %d\n",overdue);
printf("finerate:%.2f\n",finerate);
printf("fineamount:%.3f\n",fineamount);

printf("maasalam thak you for staying with us");

	
	
	return 0;
}