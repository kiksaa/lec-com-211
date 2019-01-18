#include<stdio.h>
int main(){
		float gpao,gpan,gpsn;
	    printf("Enter GPA (past) : ");
	    scanf("%f",&gpao);
	    if(gpao<1.00){
	    	printf("\tYour status : Retired\n");
	    	printf("Sorry, Try again.\n");
	   	}else if(gpao>=1.00&&gpao<2.00){
			printf("\tYou status : Probation\n");
			printf("Enter GPS (present) : ");
		    scanf("%f",&gpsn);
		    printf("Enter GPA (present) : ");
		    scanf("%f",&gpan);
		    if(gpan<1.00){
			   printf("\tYour status : Retired\n");
			   printf("Sorry, Try again.\n");
		    }else if(gpan>=2.00&&gpan<=4.00){
			   printf("\tYour status : Normal\n");
		    }else if(gpan<2.00){
			    if(gpsn<2.00){
		        	printf("\tYour status : Retired\n");
		        	printf("Sorry, Try again.\n");
		        }else if(gpsn>=2.00&&gpsn<=4.00){
		        	printf("\tYou status : Probation\n");}
		        }else{
		    	printf("Error\n");
			    }
		}else if(gpao>=2.00&&gpao<=4.00){
			printf("\tYour status : Normal\n");
			printf("Enter GPS (present) : ");
		    scanf("%f",&gpsn);
		    printf("Enter GPA (present) : ");
		    scanf("%f",&gpan);
		    if(gpan<1.00){
			   printf("\tYour status : Retired\n");
			   printf("Sorry, Try again.\n");
		    }else if(gpan>=2.00&&gpan<=4.00){
			   printf("\tYour status : Normal\n");
		    }else if(gpan<2.00){
			    if(gpsn<2.00){
		        	printf("\tYour status : Retired\n");
		        	printf("Sorry, Try again.\n");
		        }else if(gpsn>=2.00&&gpan<=4.00){
		        	printf("\tYou status : Probation\n");}
		        }else{
			        printf("Error\n");}
		}	    
	system("pause");
	return 0;		
}


