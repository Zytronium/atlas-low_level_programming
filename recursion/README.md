# README C recursion.
C recursion. It's when a function calls itself, essentially making a loop.
I use recursion a lot when making Android apps with Kotlin. Most commonly, I
use it to do something a loop every certain amount of time, as simply using
sleep() actually freezes the whole app. Though now that I think about it, I
could probably just do that stuff with a while loop as well, since it's
actually the use of Handler().postDelayed {} that lets me execute code on a
delay without freezing the whole app during the delay.

Example of recursion in C:
```c
/**
 * finalCountdown - counts down from num to 0
 * prints num if it's negative.
 * 
 * @num: number to start at
 */
void finalCountdown(int num) {
	printf("%d\n", num); /*prints the provided number @num and a new line*/
	if (num > 0) { /*continues if it's not gotten down to 0 yet*/
		sleep(1); /*waits 1 second*/
		finalCountdown(num - 1); /*repeats but with num being 1 lower*/
	}
}
```
Fun fact: this example code did not run on the first try.
Turns out you need either `--num` or `num - 1` rather than `num--`.