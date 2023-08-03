#include <stdio.h>

int main(void)
{
	FILE *pass_gen;

	pass_gen= fopen("101-password", "w");
	fputc('H', pass_gen);
	fputc('o', pass_gen);
	fputc('l', pass_gen);
	fputc(4, pass_gen);
	fclose(pass_gen);
}
