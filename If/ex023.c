#include <stdio.h>
main()
{
	int s, h, m;
	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &s);

	if (s < 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d%d•ª%d•b", h, m, s);
	}
	else {
		printf("ƒGƒ‰[");
	}
}