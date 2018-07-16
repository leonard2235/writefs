#include <stdio.h>
void main()
{
	int a = 15, b = 10;
	const int height = 100; /*int constant*/
	const float number = 3.14; /*Real constant*/
	const char letter = 'A'; /*char constant*/
	const char letter_sequence[10] = "ABC"; /*string constant*/
	const char backslash_char = '\?'; /*special char cnst*/
	printf("value of height :%d \n", height );
	
	FILE *fp;
	fp = fopen("/tmp/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);

	printf("value of number : %f \n", number );


	printf("Case1:\n");
	do {
	printf("%d\n",i);
	i++;
	} while (i<loop_count);

	printf("Case2:\n");
	i=20;
	do {
	printf("%d\n",i);
	i++;
	} while (0);

	printf("Case3:\n");
	i=0;
	do {
	printf("%d\n",i);
	} while (i++<5);

	printf("Case4:\n");
	i=3;
	do {
	printf("%d\n",i);
	i++;
	} while (i < 5 && i >=2);

	today = wednesday;
	printf("Day %d",today+1);

	printf("value of letter : %c \n", letter );

	//void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	fun_ptr_arr(a, b);

	printf("value of letter_sequence : %s \n", letter_sequence);
	printf("value of backslash_char : %c \n", backslash_char);
}