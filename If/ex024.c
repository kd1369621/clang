#include <stdio.h>
main()
{
	char m;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &m);

	if (m < 0x41) //'A',65‚Å‚àOK
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚· \n");
	}
	else
	{
		if (m <= 0x5A) //'Z'
		{
			printf("‘å•¶Žš‚Å‚· \n");
		}
		else
		{
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚· \n");
		}
	}
}