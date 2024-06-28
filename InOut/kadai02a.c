#include <stdio.h>

main()
{
	double ia, ib;

	printf("2‚Â‚ÌÀ”’l?");
	scanf("%lf%lf", &ia, &ib);

	printf("*** %lf ‚Æ %lf ‚Ì l‘¥‰‰Z***\n", ia, ib);
	printf("˜a = %f · = %f Ï = %f ¤ = %f", ia + ib, ia - ib, ia * ib, ia / ib);
}