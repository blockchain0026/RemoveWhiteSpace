// �R���e�ɪť�(��²).cpp : �w�q�D���x���ε{�����i�J�I�C
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
		char s2[1000];      //�w�q s2 �r��
		char *s3 = &s2[0];  //�N s3 ���V s2 �r�ꪺ��} (�� s2 ����}�� s3 �s��)

		gets_s(s2);         //�N��J����r�s��b s2 ���A���� s3 �w�s�� s2 ����}
		LTrim(s3);          //�N s3 �s�񪺦�}(s2) ��J LTrim ��Ƥ�

		printf("%s\n\n", s3); // �L�X s3 �s�񪺦�}���r��
	} while (true);

	system("pause");
	return 0;
}

void LTrim(char *&s)  //�ǤJ���O ��}�A���A�O char* 
{
	while (*s == ' ') //*s = s��}�� (��)�r�� �D�r��
		s = s + 1;    //s+1 ��ܦ�} +1�A�]�� s ����} �ܦ� (�쥻����} +1) �}�l
}

