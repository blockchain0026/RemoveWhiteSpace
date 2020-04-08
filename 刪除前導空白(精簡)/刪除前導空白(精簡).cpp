// 刪除前導空白(精簡).cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void LTrim(char *&s);

int main()
{
	char *s1 = "  Program Files";
	LTrim(s1);
	printf("%s\n", s1);

	do
	{
		char s2[1000];      //定義 s2 字串
		char *s3 = &s2[0];  //將 s3 指向 s2 字串的位址 (把 s2 的位址給 s3 存放)

		gets_s(s2);         //將輸入的文字存放在 s2 中，此時 s3 已存放 s2 的位址
		LTrim(s3);          //將 s3 存放的位址(s2) 丟入 LTrim 函數中

		printf("%s\n\n", s3); // 印出 s3 存放的位址的字串
	} while (true);

	system("pause");
	return 0;
}

void LTrim(char *&s)  //傳入的是 位址，型態是 char* 
{
	while (*s == ' ') //*s = s位址的 (首)字元 非字串
		s = s + 1;    //s+1 表示位址 +1，因此 s 的位址 變成 (原本的位址 +1) 開始
}

