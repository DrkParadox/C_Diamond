#Include <stdio.h>

int main (void)

int i,j;
	int longitud;
	
	printf("Give me the rectangle long:");
	scanf("%i",&longitud);

	for(i=1; i<=longitud; i++ )
	{
		printf("* ");	
	}	
	printf("\n");
	
	i=0;
	while(i<(longitud/2))
	{
		printf("* ");
		j=0;
		while(j<longitud-2)
		{
			printf("  ");			
			j++;
		}
		printf("*\n");
		i++;
	}
	
	i=0;
	do{ 
		printf("* ");	
		i++;
	}while(i!=longitud);		
	
	return 0;
}

