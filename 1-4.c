#include <stdio.h>

int main()
{
	float fahr,cel;
	int lower,upper,step;
	printf("%d",EOF);
	lower = 0;
	upper = 300;
	step = 20;
	printf("%3s %10s\n","F","C");
	printf("---------------------------\n");
	fahr = upper;

	while(fahr >= lower)
	{
		cel = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %10.1f\n",fahr,cel);
		fahr -= step;
	}
	getchar();
	return 0;
}