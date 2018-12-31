/*Input
There is a single positive integer t (t <= 100) on the first line of input which corresponds to the number of tests (Harry was asked to buy doughnuts few times). Then t lines follow, each containing three numbers: c, k and w (1 <= c, k, w <= 100). 

t [number of tests]
c k w [number of cats, Harry's hoisting capacity and weight of doughnut]
c k w [next test case]
...

Output
t lines containing word “yes” if Harry is capable of handling the task or “no” if doughnuts would cause his spine crack.
*/

#include <stdio.h>

int main()
{
	int t = 0, c = 0, k = 0, w = 0;
	scanf("%d", &t);

	while (t) {
		scanf("%d %d %d", &c, &k, &w);

		if ((c*w) <= k)
			printf("yes\n");
		else
			printf("no\n");
		t--;
	}
	return 0;
}
