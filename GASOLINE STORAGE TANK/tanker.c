#include <stdio.h>

#define CAPACITY 80000.0
#define MinPCT 10
#define GalsPerBrl 42.0

double monitorGAS ( double minSupply, double startSupply);

int main(void)
{

	double startSupply;
	double minSupply;
	double current;

	minSupply = MinPCT / 100.0 * CAPACITY ; 
	
	printf("Number of barrels currently in tank =>  ");
	scanf("%lf", &startSupply);

	current = monitorGAS (minSupply, startSupply);

	printf("Only %.2f barrels are left \n\n", current);
	printf(" ****WARNING ****");
	printf("Avaible supply is less than %d percent of tank's \n", MinPCT);
	printf("%.2f-barrel capacity.\n", CAPACITY);
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
	return 0;

	return 0;
}

double monitorGAS ( double minSupply, double startSupply)
{
	double removGals;
	double removBrls; 
	double current;

	for ( current = startSupply;
		  current >= minSupply;
		  current -= removBrls) 
	{
		printf("%.2f barrels are avaible.\n\n", current);
		printf("Enter number of gallons removed =>  ");
		scanf("%lf", &removGals);
		removBrls = removGals / GalsPerBrl;

		printf("After removal of %.2f gallons (%.2f barrels), \n", removGals, removBrls);
	}
	return (current);
}
