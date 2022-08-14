#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// an "*" denotes changes made that were not included in source code
// also anything between //* and //-* is all original code not from source
// "-*" denotes end of original code
// the cesar pizza ciphers are all original concepts i thought of and expanded upon from the original ceaser cipher
//*source code for cesar was defined in int main...
//*Moved source codes for cesar too their own respective void functions (cc),(cce).
void cc();
void cchalf();
void cce();
void cc4();
void cc8();
//-*
//*
//the alphanumeric representation of the relationship between the key and letter for 
// 1/8  is 1-3,4-6,7-9,10-13,14-16,17-19,20-22,23-26
void eighthC();
// 1/2 is 1-13,14-26
void halfedCesar();
void startD();
void startE();
void pizza();
void pizzad();
// 1/4 is 1-7, 8-13, 14-20, 21-26
void quarteredCesar();
//-*
//decryption formula for cesar sourced from
////www.thecrazyprogrammer.com/2016/11/caesar-cipher-c-c-encryption-decryption.html
void cc()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1022], ch;
	//-*
	int i, key;
	//*changed from scanf to fgets as flow is better also added buf and buffer
	printf("Enter a message to decrypt: ");
	fgets(buf, 1024, stdin);
	printf("Enter key: ");
	fgets(buffer, 1022, stdin);
	//atoi is so the buffer reads as digit also is why buf and buffer are sepperate
	//as buf is the string and buffer is the digit
	key = atoi(buffer);
	//-*
	for (i = 0; buf[i] != '\0'; ++i) {
		ch = buf[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - key;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch - key;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
	}
	printf("Decrypted message: %s", buf);
	return 0;
}
//encryption formula for cesar sourced from
////www.thecrazyprogrammer.com/2016/11/caesar-cipher-c-c-encryption-decryption.html
void cce()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1022], ch;
	int i, key;
	printf("(Capitilize all letters to avoid errors) Enter a message to encrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter key: ");
	fgets(buffer, 1022, stdin);
	key = atoi(buffer);
	//-*`
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
	}
	printf("Encrypted message: %s", buf);
	return 0;
}
void cchalf()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1022], buff[1022], ch;
	//-*
	int i, key, j;
	//*changed from scanf to fgets as flow is better also added buf and buffer
	printf("Enter a message to decrypt: ");
	fgets(buf, 1024, stdin);
	printf("Enter key 1: ");
	fgets(buffer, 1022, stdin);
	printf("Enter key 2: ");
	fgets(buff, 1022, stdin);

	//atoi is so the buffer reads as digit also is why buf and buffer are sepperate
	//as buf is the string and buffer is the digit
	key = atoi(buffer);
	j = atoi(buffer);
	//-*
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'm')
		{
			ch = ch - key;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'M') {
			ch = ch - key;
			if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}

		else if (ch >= 'n' && ch <= 'z') {
			ch = ch - j;
			if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'Z') {
			ch = ch - j;
			if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
	}
	printf("Decrypted message: %s", buf);
	return 0;
}
void cc4()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1024], buffy[1024], buff[1024], buffe[1024], ch;
	int i, key, j, k, l;
	printf("Enter a message to encrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter 1/4 key: ");
	fgets(buffer, 1024, stdin);
	printf("Enter 2/4 key: ");
	fgets(buffy, 1024, stdin);
	printf("Enter 3/4 key: ");
	fgets(buff, 1024, stdin);
	printf("Enter 4/4 key: ");
	fgets(buffe, 1024, stdin);
	key = atoi(buffer);
	j = atoi(buffy);
	k = atoi(buff);
	l = atoi(buffe);
	//-*
	// basically saying if the integer value = 0 its null
	//*
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'g')
		{
			ch = ch - key;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'G')
		{
			ch = ch - key;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'h' && ch <= 'm')
		{
			ch = ch - j;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'H' && ch <= 'M')
		{
			ch = ch - j;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'n' && ch <= 't')
		{
			ch = ch - k;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'T')
		{
			ch = ch - k;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'u' && ch <= 'z')
		{
			ch = ch - l;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'U' && ch <= 'Z')
		{
			ch = ch - l;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
	}
	printf("Encrypted message: %s\n", buf);
	return 0;
	//-*
}

void cc8()
{
	//*
	char buf[1024], buffer[1024], buffy[1024], buff[1024], buffe[1024], buffera[1024], buffya[1024], buffa[1024], buffea[1024], ch;
	int i, key, j, k, l, keya, ja, ka, la;
	printf("Enter a message to Decrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter 1/8 key: ");
	fgets(buffer, 1024, stdin);
	printf("Enter 2/8 key: ");
	fgets(buffy, 1024, stdin);
	printf("Enter 3/8 key: ");
	fgets(buff, 1024, stdin);
	printf("Enter 4/8 key: ");
	fgets(buffe, 1024, stdin);
	printf("Enter 5/8 key: ");
	fgets(buffera, 1024, stdin);
	printf("Enter 6/8 key: ");
	fgets(buffya, 1024, stdin);
	printf("Enter 7/8 key: ");
	fgets(buffa, 1024, stdin);
	printf("Enter 8/8 key: ");
	fgets(buffea, 1024, stdin);
	key = atoi(buffer);
	j = atoi(buffy);
	k = atoi(buff);
	l = atoi(buffe);
	keya = atoi(buffera);
	ja = atoi(buffya);
	ka = atoi(buffa);
	la = atoi(buffea);

	//cipher formula
	for (i = 0; buf[i] != '\0'; ++i) {
		ch = buf[i];
		if (ch >= 'a' && ch <= 'c')
		{
			ch = ch - key;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'C')
		{
			ch = ch - key;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'd' && ch <= 'f')
		{
			ch = ch - j;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'D' && ch <= 'F')
		{
			ch = ch - j;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'g' && ch <= 'i')
		{
			ch = ch - k;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'G' && ch <= 'I')
		{
			ch = ch - k;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'j' && ch <= 'm')
		{
			ch = ch - l;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'J' && ch <= 'M')
		{
			ch = ch - l;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'n' && ch <= 'p')
		{
			ch = ch - keya;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'P')
		{
			ch = ch - keya;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'q' && ch <= 's')
		{
			ch = ch - ja;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'Q' && ch <= 'S')
		{
			ch = ch - ja;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 't' && ch <= 'v')
		{
			ch = ch - ka;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'T' && ch <= 'V')
		{
			ch = ch - ka;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'w' && ch <= 'z')
		{
			ch = ch - la;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'W' && ch <= 'Z')
		{
			ch = ch - la;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			buf[i] = ch;
		}

		//-*
	}
	printf("derypted message: %s\n", buf);
	return 0;
}
//*1/8 Cesar formula
void eighthC()
{
	//*
	char buf[1024], buffer[1024], buffy[1024], buff[1024], buffe[1024], buffera[1024], buffya[1024], buffa[1024], buffea[1024], ch;
	int i, key, j, k, l, keya, ja, ka, la;
	printf("Enter a message to encrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter 1/8 key: ");
	fgets(buffer, 1024, stdin);
	printf("Enter 2/8 key: ");
	fgets(buffy, 1024, stdin);
	printf("Enter 3/8 key: ");
	fgets(buff, 1024, stdin);
	printf("Enter 4/8 key: ");
	fgets(buffe, 1024, stdin);
	printf("Enter 5/8 key: ");
	fgets(buffera, 1024, stdin);
	printf("Enter 6/8 key: ");
	fgets(buffya, 1024, stdin);
	printf("Enter 7/8 key: ");
	fgets(buffa, 1024, stdin);
	printf("Enter 8/8 key: ");
	fgets(buffea, 1024, stdin);
	key = atoi(buffer);
	j = atoi(buffy);
	k = atoi(buff);
	l = atoi(buffe);
	keya = atoi(buffera);
	ja = atoi(buffya);
	ka = atoi(buffa);
	la = atoi(buffea);

	//cipher formula
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'c')
		{
			ch = ch + key;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'C')
		{
			ch = ch + key;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'd' && ch <= 'f')
		{
			ch = ch + j;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'D' && ch <= 'F')
		{
			ch = ch + j;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'g' && ch <= 'i')
		{
			ch = ch + k;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'G' && ch <= 'I')
		{
			ch = ch + k;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'j' && ch <= 'm')
		{
			ch = ch + l;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'J' && ch <= 'M')
		{
			ch = ch + l;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'n' && ch <= 'p')
		{
			ch = ch + keya;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'P')
		{
			ch = ch + keya;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'q' && ch <= 's')
		{
			ch = ch + ja;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'Q' && ch <= 'S')
		{
			ch = ch + ja;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 't' && ch <= 'v')
		{
			ch = ch + ka;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'T' && ch <= 'V')
		{
			ch = ch + ka;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'w' && ch <= 'z')
		{
			ch = ch + la;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'W' && ch <= 'Z')
		{
			ch = ch + la;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}

		//-*
	}
	printf("Encrypted message: %s\n", buf);
	return 0;
}
//* 1/2 cesar form
void halfedCesar()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1024], buffy[1024], ch;
	int i, key, j;
	printf("\HalfedCesar shifts a-m by the first key and n-z by the second key.\n");
	printf("For example the letters 'A' and 'Z' with a first key of 1 and second key of 2 encrypt to 'B' and 'B'.\n");
	printf("Enter a message to encrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter first half Key: ");
	fgets(buffer, 1022, stdin);
	printf("Enter second half Key: ");
	fgets(buffy, 1021, stdin);
	key = atoi(buffer);
	j = atoi(buffy);
	//-*
	// basically saying if the integer value = 0 its null
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'm')
		{
			// the key is where the shift value changed 
			ch = ch + key;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'M')
		{
			ch = ch + key;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'n' && ch <= 'z')
		{
			ch = ch + j;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'Z')
		{
			ch = ch + j;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
	}
	printf("Encrypted message: %s\n", buf);
	return 0;
}
//* 1/4 cesar form
void quarteredCesar()
{
	//* changed source code characters to include buffer and buf ch was already in source
	char buf[1024], buffer[1024], buffy[1024], buff[1024], buffe[1024], ch;
	int i, key, j, k, l;
	printf("Enter a message to encrypt: \n");
	fgets(buf, 1024, stdin);
	printf("Enter 1/4 key: ");
	fgets(buffer, 1024, stdin);
	printf("Enter 2/4 key: ");
	fgets(buffy, 1024, stdin);
	printf("Enter 3/4 key: ");
	fgets(buff, 1024, stdin);
	printf("Enter 4/4 key: ");
	fgets(buffe, 1024, stdin);
	key = atoi(buffer);
	j = atoi(buffy);
	k = atoi(buff);
	l = atoi(buffe);
	//-*
	// basically saying if the integer value = 0 its null
	//*
	for (i = 0; buf[i] != '\0'; ++i)
	{
		ch = buf[i];
		if (ch >= 'a' && ch <= 'g')
		{
			ch = ch + key;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'G')
		{
			ch = ch + key;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'h' && ch <= 'm')
		{
			ch = ch + j;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'H' && ch <= 'M')
		{
			ch = ch + j;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'n' && ch <= 't')
		{
			ch = ch + k;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'N' && ch <= 'T')
		{
			ch = ch + k;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'u' && ch <= 'z')
		{
			ch = ch + l;
			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			buf[i] = ch;
		}
		else if (ch >= 'U' && ch <= 'Z')
		{
			ch = ch + l;
			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			buf[i] = ch;
		}
	}
	printf("Encrypted message: %s\n", buf);
	return 0;
	//-*
}
//* call to begin pizza cesar cipher
void pizza()
{
	//*
	int x;
	char buf[1024];
	//asks which pizza cipher
	printf("\How would you like your Pizza cut?\n");
	printf("#1: Halfs\n");
	printf("#2: Quarters\n");
	printf("#3: Eighths\n");

	fgets(buf, 1024, stdin);
	x = atoi(buf);
	//switch determines witch cipher is used
	switch (x)
	{
		{case 1:
		{
			// 1/2 cear void function
			halfedCesar();

			return 0;
		}

		}

		{case 2:
		{
			// 1/4 cesar
			quarteredCesar();
			return 0;
		}





		}
		{case 3:
		{
			// 1/8 cesar 
			eighthC();

			return 0;
		}

		}
	}

	//-*
}
void pizzad()
{
	//*
	int x;
	char buf[1024];
	//asks which pizza cipher
	printf("\How would you like your Pizza cut?\n");
	printf("#1: Halfs\n");
	printf("#2: Quarters\n");
	printf("#3: Eighths\n");

	fgets(buf, 1024, stdin);
	x = atoi(buf);
	//switch determines witch cipher is used
	switch (x)
	{
		{case 1:
		{
			// 1/2 cear void function
			cchalf();

			return 0;
		}

		}

		{case 2:
		{
			// 1/4 cesar
			cc4();
			return 0;
		}





		}
		{case 3:
		{
			// 1/8 cesar 
			cc8();

			return 0;
		}

		}
	}

	//-*
}
//*call to start decryption moved to void
void startD()
{

	//*
	int xo;
	char buf[1024];
	printf("\Choose your decryption cipher method (type 1, or 2, etc.)\n");
	printf("#1: Cesar cipher\n");
	printf("#2: Pizza\n");
	fgets(buf, 1024, stdin);
	xo = atoi(buf);
	switch (xo)

		//cesar is case 1
	{
		{case 1:
		{
			//cesar decryption void formula
			cc();
			return 0;
		}
		}


		{case 2:
		{
			//pizza decryption
			pizzad();
			return 0;
		}
		}
	}

	//-* 
}
//*call to start encryption moved to void
void startE()
{

	//*
	int xo;
	char buf[1024];
	printf("\Choose your encryption cipher method (type 1, or 2, etc.)\n");
	printf("#1: Cesar cipher\n");
	printf("#2: Pizza Cesar cipher\n");
	fgets(buf, 1024, stdin);
	xo = atoi(buf);
	switch (xo)

		//cesar is case 1
	{
		{
	case 1:
	{
		//cesar encryption void formula
		cce();
		return 0;
	}
		}

		//Hill climb is case 2

		{
	case 2:
	{
		//pizza cipher 

		pizza();
		return 0;
	}
	//-*
		}


	}
}
//*cleaned up int main to call for void functions (reduce redundancy)
int main()
{

	//*
	int x;
	char buf[1024];
	//asks if you want encryption or decryption
	printf("\Do you want to encrypt or decrypt (type 1, or 2, etc.)\n");
	printf("#1: Encrypt\n");
	printf("#2: Decrypt\n");
	fgets(buf, 1024, stdin);
	x = atoi(buf);
	//switch callls for choice between encryption and decryption
	switch (x)

		//case 1 is encryption
	{
		{case 1:
		{
			startE();
		}
		return 0;
		}
			   //case 2 is decryption
		{case 2:
		{
			startD();
			return 0;
		}
		return 0;
		}
	}
	//*

}
