//PROGRAM TO COUNT NUM OF LOWERCASE,UPPERCASE,DIGITS AND SPECIALCHAR//

#include<stdio.h>

#include<conio.h>

main()

{

	char ch;	char str[100];

	int i=0;

	int lowercase,specialchar,uppercase,digit;

	lowercase=specialchar=uppercase=digit=0;

	printf("Enter the string:\n");

	gets(str);

	for(i=0;str[i]!='\0';i++)

	{

	ch=str[i];

	if(ch>='a'&&ch<='z')

	lowercase++;

	else if(ch>='A'&&ch<='Z')

	uppercase++;

	else if(ch>='0'&&ch<='9')

	digit++;

	else

	specialchar++;

}

	printf("\nLowercase:%d",lowercase);

	printf("\nUppercase:%d",uppercase);

	printf("\nDigit:%d",digit);

	printf("\nSpecialchar:%d",specialchar);

}
