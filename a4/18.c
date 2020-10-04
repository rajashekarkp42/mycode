 #include<stdio.h>
char fun(int vowel)
{
	char or;
	or=(vowel=='a')||(vowel=='e')||(vowel=='i')||(vowel=='o')||(vowel=='u');
	return or;
}
char fun2(int vowel)
{
	char character;
	character=(vowel=='A')||(vowel=='E')||(vowel=='I')||(vowel=='O')||(vowel=='U');
	return character;
}



int  main()
{
	char vowel,ans,ans1;
	printf("enter the character \n");
	scanf("%c",&vowel);
        ans=fun(vowel);
	ans1=fun2(vowel);
	if(ans||ans1)
	{
		printf("vowel\n");
	}else{
		printf("not vowel\n");
	}
	return 0;
}



