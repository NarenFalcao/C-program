//**************************************
// Name: Transposition Cipher
// Description:This code is called Transposition Cipher, It will encrpy the string according to what password is supplied. The smallest alphabet row will be picked and stored to the array
// By: Balkrishna L Talele
//
// Inputs:Input string
//
// Returns:Encrypted, Decrypted String
//
// Assumes:The lowest alphabet from you password will be picked up first, then the entried row will be picked one by one and will get copied to new buffer
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=9245&lngWId=3//for details.//**************************************

#include <iostream>
using namespace std;
void main(void)
{
	char strOriginalIput[100], strPass[35], strENCR[100], outpass[100];
	int istrLen = 0;
	int iArray[20] =
	{
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
	};
	cout << "\n Enter String(without space) : ";
	cin >> strOriginalIput;
	istrLen = strlen(strOriginalIput);
	strOriginalIput[istrLen + 1] = '\0';
	cout << "\n Enter Crypt Pass: ";
	cin >> strPass;
	int iLen = strlen(strPass);
	strPass[iLen + 1] = '\0';
	strcpy(outpass, strPass);
	outpass[iLen + 1] = '\0';
	int cnt = 0;
	//cout << strOriginalIput << "\n";
	for (int i = 0; i < iLen - 1; i++)
	{
		for (int j = 0; j < iLen - 1 - i; j++)
			if (strPass[j + 1] < strPass[j])
			{
				/* compare the two neighbors */
				char tmp = strPass[j]; 	/* swap a[j] and a[j+1] 	*/
				strPass[j] = strPass[j + 1];
				strPass[j + 1] = tmp;
				int t = iArray[j];
				iArray[j] = iArray[j + 1];
				iArray[j + 1] = t;
			}
	}
	cnt = 0;
	for (int z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= iLen; x++)
		{
			if ((iArray[z] + iLen * x) <= istrLen)
			{
				strENCR[cnt++] = strOriginalIput[(iArray[z] + iLen * x) - 1];
			}
		}
	}
	strENCR[istrLen] = '\0';
	//cout << strENCR << "\n\n"	;
	/************************************************************************/
	/* Out put 																*/
	/************************************************************************/
	int nl = 1;
	for (i = 0; i < iLen; i++)
		cout << outpass[i] << " ";
	cout << "\n-------------------------------";
	cout << "\n";
	for (i = 0; i < istrLen; i++)
	{
		if (i == iLen * nl)
		{
			cout << "\n" << strOriginalIput[i] << " ";
			nl++;
		}
		else
			cout << strOriginalIput[i] << " ";
	}
	cout << "\n\n" << "Encrypted String : " << strENCR;
	/************************************************************************/
	/* Encryption is over, now going for decryption 						*/
	/************************************************************************/
	cout << "\n";
	char strtmp[100];
	cnt = 0;
	for (z = 0; z < iLen; z++)
	{
		for (int x = 0; x <= iLen; x++)
		{
			if ((iArray[z] + iLen * x) <= (istrLen))
				strtmp[iArray[z] + (iLen * x) - 1] = strENCR[cnt++];
		}
	}
	strtmp[istrLen] = '\0';
	cout << "Decrypted String :" << strtmp << "\n\n";
}
