/* Exercise A
 */

#include <stdio.h>

int main()
{
	int card = 1;
	if (card > 1){
		card = card  - 1;
		if (card < 7) 
			puts("Small Card");
	} else {
		puts("Ace!");
	}
	return 0;
}
