//PROGRAM ON REVERSE OF STRING//

#include<stdio.h>

#include<conio.h>

main()

{

	char str[100];	int i,cnt=0;

	printf("Enter string:\n");

	scanf("%s",str);

printf("Origial string is:\n");

	for(i=0;str[i]!='\0';i++)

	{

		printf("%c",str[i]);

		cnt++;

	}

	printf("\nReversed string is:\n");

	for(i=cnt-1;i>=0;i--){

		printf("%c",str[i]);

}

return 0;

}
