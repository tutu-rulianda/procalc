//  Hitungan Kernel Engine
//
//  Created by Tutu Rulianda on 3/20/10.
//	Modified by Tutu Rulianda on 5/27/10.
//  Copyright Tutu Rulianda 2010 - All rights reserved.
//

#include <String>
#include <iostream>
#include <valarray>

using namespace System;
using namespace std;

int  ara[6000010], arb[6000010], arc[6000010];
bool bstart;
bool dRound = false;
bool dRMError = false;
bool bzero = false;
bool bten = false;
bool bInterop = false;
bool bTrim = true;
bool bFormat = true;
Int32 nlFloat = 0;
int bMode;

void func_setFormat(bool b) {
	bFormat = b;
}

void func_setTrim(bool b) {
	bTrim = b;
}

void func_setNMode(int a) {
	bMode = a;
}

int func_getNMode() {
	return bMode;
}

String ^func_convFormat(String ^sI1) {
	Int32 i, n;
	String ^sI2;
	String ^sTemp;
	n = sI1->Length;
	sTemp = "";
	for (i = 0; i < n; i ++) {
		sI2 = sI1->Substring(i, 1);
		if (sI2->Equals(",")) 
			sTemp = sTemp->Concat(sTemp, ".");
		else if (sI2->Equals(".")) 
			sTemp = sTemp->Concat(sTemp, ",");
		else
			sTemp  = sTemp->Concat(sTemp, sI2);
	}
	if (sTemp == "")
		sTemp = sI1;
	return sTemp;
}

void func_initArray(Int32  a, Int32 b) {
	Int32 i;
	for (i = 0; i < b; i ++ ) {
		ara[i] = a;
		arb[i] = a;
		arc[i] = a;
	}
}


bool func_checkNeg(String ^sII1) {
	if (sII1->StartsWith("-")) {
		return true;
	}
	else {
		return false;
	}
}

bool func_checkFloat(String ^sII1) {	
	return sII1->Contains(".");
}

String ^func_trim(String ^sII1) {
	bool flag = true;
	bool flag2 = false;
	bool bneg = false;
	String ^sII2;
	String ^sII3;
	
	if (sII1->StartsWith("-")) {
		sII2 = sII1->Substring(1);
		bneg = true;
	}
	else {
		sII2 = sII1;
		bneg = false;
	}
	sII1 = sII2;
	if (sII1->Length >= 1) {
		sII3 = sII1;
		flag = true;
		flag2 = false;

		while ((flag == true)) {
			if ((sII2->StartsWith("0")) || (sII2->StartsWith(" ")))  {
				flag = true;
				flag2 = true;
				sII1 = sII2;
				sII2 = sII1->Substring(1);
			}
			else {
				flag = false;
			}
			
		}
		if (bneg) {
			sII2 = "-";
			sII1 = sII1->Concat(sII2, sII1);
		}
		return sII1;
	}
	return sII1;
}

String ^func_rtrim(String ^sI1) {
	String ^sI3;
	String ^sI2;
	bool flag;
	Int32 i, k, n;
	
	sI2 = sI1;
	if (sI1->Length > 0) {
		sI3 = sI1;
		flag = true;
		n = sI3->Length;
		//sI2 = "";
		if (func_checkFloat(sI3)) {
			while ((sI3->Length > 0) && (sI3->EndsWith("0"))) {
				sI3 = sI3->Substring(0, sI3->Length - 1);
			}
		}
		n = sI3->Length;
		i = 0;
		k = 0;
		flag = true;
		if (sI3->Length > 0) {
		while (flag == true) {			
			if ((i < sI3->Length) && (sI3->Substring(i, 1)->Equals("0"))) {
				k ++;
			}
			else {
				flag = false;
			}
			if (i < sI3->Length) {
				i ++;
			}
			else {
				flag = false;
			}
		}

		sI3 = sI3->Substring(k, n - k);
		if (sI3->StartsWith(".")) {
			sI3 = sI3->Concat("0", sI3);
		}

		if (sI3->EndsWith(".")) {
			sI3 = sI3->Substring(0, sI3->Length - 1);
		}
		}
		sI1 = sI3;
	}
	if (sI1->Equals(""))
		sI1 = "0";
	return sI1;
}

String ^func_rtrim2(String ^sI1) {
	String ^sI3;
	String ^sI2;
	bool flag;
	Int32 i, k, n;
	
	sI2 = sI1;
	if (sI1->Equals("0"))
		return "0";
	if (sI1->Length > 0) {
		sI3 = sI1;
		flag = true;
		n = sI3->Length;
		//sI2 = "";
		while (sI3->EndsWith("0")) {
			sI3 = sI3->Substring(0, sI3->Length - 1);
		}
		n = sI3->Length;
		i = 0;
		k = 0;
		flag = true;
		if (sI3->Equals("") == false) {
		while (flag == true) {			
			if (sI3->Substring(i, 1)->Equals("0")) {
				k ++;
			}
			else {
				flag = false;
			}
			if (i < sI3->Length - 1) {
				i ++;
			}
			else {
				flag = false;
			}
		}

			sI3 = sI3->Substring(k, n - k);
			if (sI3->StartsWith(".")) {
				sI3 = sI3->Concat("0", sI3);
			}

		
		if (sI3->EndsWith(".")) {
			sI3 = sI3->Substring(0, sI3->Length - 1);
		}
		}
		else 
			sI3 = "0";
		sI1 = sI3;
	}
	if (sI1->Equals(""))
		sI1 = "0";
	return sI1;
}

String ^func_insComma(String ^sI1, Int32 n) {
	String ^sI2;
	String ^sI3;
	String ^sI4;
	String ^sTemp;
	Int32 i, j;
	bool bzero;

	sI1 = func_rtrim2(sI1);
	sI2 = sI1;
	if (n == sI1->Length) {
		return sI1;
	}
	else if (n <= 0) {
		sI2 = "0.";
		j = -n;
		for (i = 1; i <= j; i ++) {
			sI2 = sI2->Concat(sI2, "0");
		}
		sI1 = sI1->Concat(sI2, sI1);
		return sI1;
	}
	i = sI1->Length;
	if (i - n >= 0) {		
		sI2 = sI1->Substring(0, n);	
		sI4 = sI2;
		i = sI2->Length;
		sI3 = sI1->Substring(n);
		sI2 = ".";
		sI2 = sTemp->Concat(sI2, sI3);
		sI4 = sTemp->Concat(sI4, sI2);
		sI2 = sI4;
		bzero = false;
		sI3 = sI2;
		while (sI3->StartsWith("0")) {
			sI3 = sI3->Substring(1);
			bzero = true;
		}
		if (bzero) {
			sI2 = "0";
			sI2 = sI2->Concat(sI2, sI3);
		}
		return sI2;
	}
	else if (n < 0) {
		sI3 = "0.";
		n = n - (sI1->Length) - 2;
		while (n > 0){
			sI3 = sI3->Concat(sI3, "0");
			n --;
		}
		sI2 = sI2->Concat(sI3, sI1);
	}
	if (n - i > 0) {
		sI2 = sI1;
		j = n - i;
		sTemp = "";
		while (j > 0) {
			sTemp = sTemp->Concat(sTemp, "0");
			j --;
		}
		sI2 = sI2->Concat(sI2, sTemp);
	}
	if (sI2->StartsWith("0")) {
		if (sI2->StartsWith("0.")) {		
		}
		else {
			sTemp = "0.0";
			sI2 = sI2->Concat(sTemp, sI2);
		}
	}
	else if (sI2->StartsWith(".")) {
		sTemp = "0";
		sI2 = sI2->Concat(sTemp, sI2);
	}
	sI2 = func_trim(sI2);
	if (sI2->EndsWith("."))
		sI2 = sI2->Substring(0, sI2->Length - 1);
	return sI2;
}


String ^func_insComma2(String ^sI1, Int32 n) {
	String ^sI2;
	String ^sI3;
	String ^sI4;
	String ^sTemp;
	Int32 i, j;
	bool bzero;

	sI2 = sI1;
	if (n < 1) {
		sI2 = "0.";
		j = -1 * n - sI1->Length;
		for (i = 1; i <= j; i ++) {
			sI2 = sI2->Concat(sI2, "0");
		}
		sI1 = sI1->Concat(sI2, sI1);
		return sI1;
	}
	i = sI1->Length;
	if (i - n >= 0) {		
		sI2 = sI1->Substring(0, i - n);	
		sI4 = sI2;
		i = sI2->Length;
		sI3 = sI1->Substring(i - n);
		sI2 = ".";
		sI2 = sTemp->Concat(sI2, sI3);
		sI4 = sTemp->Concat(sI4, sI2);
		sI2 = sI4;
		bzero = false;
		sI3 = sI2;
		while (sI3->StartsWith("0")) {
			sI3 = sI3->Substring(1);
			bzero = true;
		}
		if (bzero) {
			sI2 = "0";
			sI2 = sI2->Concat(sI2, sI3);
		}
		if (sI2->EndsWith("."))
			sI2 = sI2->Substring(0, sI2->Length - 1);
		return sI2;
	}
	else if (n < 0) {
		sI3 = "0.";
		n = n - (sI1->Length) - 2;
		while (n > 0){
			sI3 = sI3->Concat(sI3, "0");
			n --;
		}
		sI2 = sI2->Concat(sI3, sI1);
	}
	if (n - i > 0) {
		sI2 = sI1;
		j = n - i;
		sTemp = "";
		while (j > 0) {
			sTemp = sTemp->Concat(sTemp, "0");
			j --;
		}
		sI2 = sI2->Concat(sI2, sTemp);
	}
	if (sI2->StartsWith("0")) {
		if (sI2->StartsWith("0.")) {		
		}
		else {
			sTemp = "0.0";
			sI2 = sI2->Concat(sTemp, sI2);
		}
	}
	else if (sI2->StartsWith(".")) {
		sTemp = "0";
		sI2 = sI2->Concat(sTemp, sI2);
	}
	sI2 = func_trim(sI2);
	return sI2;
}

String ^func_insDot(String ^sI1, Int32 n) {
	String ^sI2;
	String ^sI3;
	
	if (n < 1) {
		return sI1;
	}
	sI2 = sI1->Substring(0, n + 1);	
	sI2 = sI2->Concat(sI2, ".");
	sI3 = sI1->Substring(n - 1);
	sI2 = sI2->Concat(sI2, sI3);
	return sI2;
} 



bool func_isNumber(String ^sII1) {
	String ^sII2;
	String ^sTemp2;
	Int32 i, j, k;	
	Int32 n;
	bool	flag;
	
	j = sII1->Length - 1;
	sII2 = sII1;
	if (sII2->Equals("0")) {
		return true;
	}
	k = 0;
	n = 0;
	flag = true;
	i = j;
	while ( i > 0) {
		sTemp2 = sII2->Substring(i, 1);
		if ((sTemp2->Equals(".")) || (sTemp2->Equals("5")) ||
			(sTemp2->Equals("1")) || (sTemp2->Equals("6")) ||
			(sTemp2->Equals("2")) || (sTemp2->Equals("7")) ||
			(sTemp2->Equals("3")) || (sTemp2->Equals("8")) ||
			(sTemp2->Equals("4")) || (sTemp2->Equals("9")) ||
			(sTemp2->Equals("0")) || (sTemp2->Equals("-")) || 
			(sTemp2->Equals(",")))
		{
			k ++;
			if (sTemp2->Equals("-")) {
				if (k == 1) {
					flag = true;
				}
				else {
					flag = false;
					i = -1000;
					k = -1000;
					return false;
				}
				
			}
			
			if (sTemp2->Equals(".")) {
				n ++;
			}
			if (n > 1) {
				flag = false;
				i = -1000;
				k = -1000;
				return false;
			}
			else {
				flag = true;
			}
			
		}	
		else {
			flag = false;
			i = -1000;
			k = -1000;
			return false;
		}
		i --;
	}
	if (k != j) {
		flag = false;
	}
	return flag;	
}



Int32 func_numFloat(String ^sII1) {
	String ^sII2;
	String ^sTemp2;
	Int32 i, j, k;	
	Int32 n;
	
	j = sII1->Length - 1;
	if (sII1->StartsWith("0.")) {
		n = (sII1->Length - 2);
		return n;
	}
	else if (sII1->StartsWith("-0.")) {
		n = (sII1->Length - 3);
		return n;
	}
	else {
		sII2 = sII1;
		k = 0;
		n = 0;
		for ( i = j; i >= 0; i --) {
			sTemp2 = sII2->Substring(i, 1);
			if (sTemp2->Equals(".")) {
				n = i;
				i = -1;
			}	
		}
	}  
	if (n == 0)
		j = 0;
	else
		j = sII1->Length - n - 1;
	return j;
}

Int32 func_decLength(String ^sII1) {
	Int32 k, l, n;
	n = sII1->Length;
	if (func_checkNeg(sII1))
		n --;
	k = func_numFloat(sII1);
	if (k == 0)
		l = 0;
	else
		l = 1;
	return n - k - l;
}

String ^func_stripDelimiter(String ^sII1) {
	String ^sII2;
	String ^sTemp;
	String ^sTemp2;
	bool bneg;
	Int32 i, j, k;
	Int32  a;

	func_initArray(0, sII1->Length);
	sII2 = sII1;
	bneg = func_checkNeg(sII2);
	if (bneg) {
		sII2 = sII2->Substring(1);
	}
	if (sII1->StartsWith("0.")) {
		return sII1->Substring(2);
	}
	else if (sII1->StartsWith("-0.")) {
		return sII1->Substring(3);		
	}
	else {  
		k = -1;
		j = sII2->Length;
		for ( i = 0; i <= 0; i ++) {
			sTemp2 = sII2->Substring(i, 1);
			if (sTemp2->Equals(",")) {
			}
			else if (sTemp2->Equals(".")) {
				k ++;
				ara[k] = -1000;
			}
			else {
				k ++;				
				ara[k] = Convert::ToInt32(sTemp2);
			}
		}
		sII2 = "";
		for (i = 0; i <= k; i ++) {
			if (ara[i] == -1000) {
				sTemp = ".";
			}
			else {
				a = ara[i];
				sTemp = String::Format("{0,3:G}",a);
				sTemp = sTemp->Trim();
			}
			sII2 = sII2->Concat(sTemp, sII2);
		}
		if (sII1->StartsWith("0.")) {
			sTemp = "0";
			sII2 = sII2->Concat(sTemp, sII2);			
		}
		else if (sII1->StartsWith(".")) {
			sTemp = "0";
			sII2 = sII2->Concat(sTemp, sII2);			
		}
		sII1 = sII2;
		if (bneg) {
			sTemp = "-";
			sII1 = sII1->Concat(sTemp, sII1);
		}
		return sII1;		
	}
	
	return sII1;
	
}


String ^func_stripFloat(String ^sII1) {
	String ^sII2;
	String ^sTemp;
	String ^sTemp2;
	Int32 i, j, k;
	Int32  a;
	sII2 = sII1;
	if (sII1->StartsWith("0.")) {
		return sII1->Substring(2);
	}
	else if (sII1->StartsWith("-0.")) {
		return sII1->Substring(3);		
	}
	else {  
		k = -1;
		j = sII1->Length;
		if (j - 1 >= 1) {
			sII2 = "";
			for ( i = j - 1; i >= 0; i --) {
				sTemp2 = sII1->Substring(i, 1);
				if (sTemp2->StartsWith(".")) {
				}
				else if (sTemp2->Equals("-") == false) {
					k ++;
					a = Convert::ToInt32(sTemp2);
					sTemp = String::Format("{0,3:G}", a);
					sTemp = sTemp->Trim();
					sII2 = sII2->Concat(sTemp, sII2);
				}
			}
		}
	}
	sII1 = func_rtrim(sII2);
	if (func_checkNeg(sII1))
		sII1 = sII1->Concat("-", sII1);
	return sII1;	
}

String ^func_f10zero2(Int32 nn) {
	String ^sII2;
	Int32 i;
	
	if (nn < 1) {
		return "1";
	}
	else {
		sII2 = "1";
		for (i = 1; i <= nn; i++) {
			sII2 = sII2->Concat(sII2, "0");
		}
	}
	return sII2;
}


String ^func_f10zero(String ^sII1) {
	String ^sII2;
	Int32 i, n;
	n = sII1->Length - 1;
	sII2 = "1";
	for (i = 1; i <= n; i++) {
		sII2 = sII2->Concat(sII2, "0");
	}
	return sII2;
}

String ^func_delzero(String ^sII1, Int32 i) {
	String ^sII2;
	String ^sTemp;
	String ^sTemp2;
	Int32 j, k;
	Int32  a;
	
	sII2 = sII1;
	j = sII2->Length - 1;
	if ((sII1->StartsWith("0.")) || (sII1->StartsWith("-0."))) {	
		i = 0;
		while (sII2->StartsWith("0")) {
			sII2 = sII2->Substring(1);
			i ++;
		}		
	}
	else {
		k = 0;
		sII2 = "";
		for ( i = j; i > 0; i --) {
			sTemp2 = sII2->Substring(i, 1);
			if (sTemp2->StartsWith(".")) {
			}
			else {
				k ++;
				a = Convert::ToInt32(sTemp2);
				sTemp = String::Format("{0,3:G}", a);
				sTemp = sTemp->Trim();
				sII2 = sII2->Concat(sII2, sTemp);
			}
		}
	}
	return sII2;	
}

String ^func_mul10(String ^sII1, Int32 k) {
	String ^sII2;
	Int32 i;
	
	sII2 = sII1;
	for (i = 1; i <= k; i ++) {
		sII2 = sII2->Concat("0", sII2);
	}
	return sII2;	
}

String ^func_unformatNumber(String ^sII1) {
	String ^sII2;
	String ^sTemp;
	String ^sTemp2;
	String ^sII3;
	String ^sII4;
	String ^sII7;
	Int32 i, j, k;	
	Int32 n, m, m2, m3, m4;
	bool	flag, bneg;
	Int32  a;
	
	if (sII1->Length > 10000)
		return sII1;
	func_initArray(-1, sII1->Length);
	j = sII1->Length - 1;
	sII2 = sII1;
	sII7 = sII1;
	bneg = func_checkNeg(sII7);

	if (bTrim)
		sII1 = func_rtrim(sII1);

	sII2 = sII1;
	
	if (sII2->Length == 0) {
		return "0";
	}
	if (sII2->Equals("-0")) {
		
		return "0";
	}
	if ((sII2->Length == 1) && (sII2->Equals("0"))) {		
		return sII1;
	}
	if ((sII2->StartsWith("0.")) || (sII2->StartsWith("-0."))) {
		return sII1;
	}
	if ((sII2->Length <= 3) && (func_checkFloat(sII2))){
		return sII1;
	}
	sII2 = sII1;
	j = sII2->Length - 1;
	k = -1;
	n = -1;
	flag = true;
	i = 0;
	m = 0;
	m2 = 0;
	m3 = 0;
	m4 = 0;
	while ( i <= j) {
		sTemp2 = sII2->Substring(i, 1);
		if ((sTemp2->Equals(".")) || (sTemp2->Equals("5")) ||
			(sTemp2->Equals("1")) || (sTemp2->Equals("6")) ||
			(sTemp2->Equals("2")) || (sTemp2->Equals("7")) ||
			(sTemp2->Equals("3")) || (sTemp2->Equals("8")) ||
			(sTemp2->Equals("4")) || (sTemp2->Equals("9")) ||
			(sTemp2->Equals("0")) || (sTemp2->Equals("-")) ||
			(sTemp2->Equals(","))) 
		{
			if (sTemp2->Equals(",")) {
				m ++;
			}
			else if (sTemp2->Equals(".")) {
				m3 = k;
				n ++;
				k ++;
				ara[k] = -999;
			}
			else if (sTemp2->Equals("-")) {
				m2 = 1;
				m4 ++;
			}
			else {
				k ++;
				ara[k] = Convert::ToInt32(sTemp2);
				m3 = k + 1;
			}

		}	
		else {
			flag = false;
			i = 999999;
		}
		i ++;
	}
	n = 0;
	
	sTemp = "";
	for (i = 0; i <= k; i++) {
		n ++;
		if (ara[i] < 0) {
			if (ara[i] = -999) {
				sTemp = sTemp->Concat(sTemp, ".");
			}
		}
		else {
			a = ara[i];
			sTemp2 = String::Format("{0,3:G}", a);
			sTemp2 = sTemp2->Trim();
			sTemp = sTemp->Concat(sTemp, sTemp2);
		}
		
	}
	sII2 = sTemp;
	sII4 = sII2;
	sII3 = "";
	sII1 = sII1->Concat(sII4, sII3);
	if (sII1->StartsWith(",0")) {
		sII1 = sII1->Substring(2);
	}
	if (sII1->StartsWith("0")) {
		sII1 = sII1->Substring(1);
	}
	if (sII1->StartsWith(",")) {
		sII1 = sII1->Substring(1);
	}
	if ((func_checkFloat(sII1)) && (sII1->StartsWith("."))) {
		sII2 = "0";
		sII1 = sII1->Concat(sII2, sII1);
	}
	if (bneg) {
		sII2 = "-";
		sII1 = sII1->Concat(sII2, sII1);
	}
	if (sII1->Equals(""))
		sII1 = "0";
	return sII1;	
}

Int32 func_numDigit(String ^sI1) {
	String ^sI2;
	Int32 n;
	
	if (sI1->Equals("0")) 
		return 1;
	else {
		sI2 = func_unformatNumber(sI1);
		n = sI2->Length;
		if (func_checkNeg(sI1)) {
			n --;
		}
		if (func_checkFloat(sI1)) {
			n --;
		}
	}
	return n;
}

String ^func_formatNumber(String ^sII1)  {
	String ^sII2;
	String ^sTemp;
	String ^sTemp2;
	String ^sII3;
	String ^sII4;
	String ^sII7;
	Int32 i, j, k;	
	Int32 n, m, m2, m3, m4;
	bool	flag;
	Int32  a;
	if (sII1->Length > 10000)
		return sII1;
	if (sII1->Equals("0")) 
		return "0";
	if (sII1->Contains(","))
		return sII1;
	func_initArray(-1, sII1->Length);
	j = sII1->Length - 1;
	sII2 = sII1;
	sII7 = sII1;

	if (sII2->Length == 0) {
		return "0";
	}
	if ((sII2->StartsWith("-0")) && (j == 2)) {
		return "0";
	}
	
	if (sII2->Equals("0")) {
		return sII1;
	}
	if ((sII2->StartsWith("0.")) || (sII2->StartsWith("-0."))) {
		return sII1;
	}
	else if ((sII2->Length <= 3) && (func_checkFloat(sII2))){
		return sII1;
	}
	sII1 = func_unformatNumber(sII1);
	if (bFormat == false)
		return sII1;
	j = sII1->Length - 1;
	sII2 = sII1;
	sII7 = sII1;
	if (func_checkNeg(sII1)) {
		sII2 = sII1->Substring(1);
	}
	j = sII2->Length - 1;
	k = -1;
	n = 0;
	flag = true;
	i = 0;
	m2 = 0;
	m = 0;
	m3 = 0;
	m4 = 1;
	while ( i <= j) {
		sTemp2 = sII2->Substring(i, 1);
		if ((sTemp2->Equals(".")) || (sTemp2->Equals("5")) ||
			(sTemp2->Equals("1")) || (sTemp2->Equals("6")) ||
			(sTemp2->Equals("2")) || (sTemp2->Equals("7")) ||
			(sTemp2->Equals("3")) || (sTemp2->Equals("8")) ||
			(sTemp2->Equals("4")) || (sTemp2->Equals("9")) ||
			(sTemp2->Equals("0")) || (sTemp2->Equals("-"))) 
		{
			if (sTemp2->Equals(".")) {
				i = 999999;
				n = k;
				m ++;
				m4 ++;
			}
			else if (sTemp2->Equals("-")) {
				m2 ++;	
				m4 ++;
				m3 ++;
			}
			else {
				k ++;
				ara[k] = Convert::ToInt32(sTemp2);
				n = k + 1;
			}	
		}
		else {
			flag = false;
			i = 999999;
		}
		i ++;
	}
	sTemp = "";
	m2 = 0;
	m = 0;
	for (i = k; i >= 0; i--) {
		m2 ++;
		if (ara[i] < 0) {
		}
		else if (i <= n) {
			a = ara[i];
			sTemp2 = String::Format("{0,3:G}", a);
			sTemp2 = sTemp2->Trim(); 
			sTemp = sTemp->Concat(sTemp2, sTemp);
			if ((m2 == 3) && (i > 0)) {
				sTemp2 = ",";
				m ++;
				sTemp = sTemp->Concat(sTemp2, sTemp);
				m2 = 0;
			}
		}
		
	}
	sII2 = sTemp;
	sII4 = sII2;
	if (func_checkFloat(sII1)) {
		sII4 = sTemp->Concat(".", sII1->Substring(n + m4));
		if (sII4->StartsWith(".."))
			sII4 = sII4->Substring(1);
		sII3 = sII2;
	}
	else {
		sII3 = "";
	}
	
	sII1 = sII1->Concat(sII3, sII4);
	if (sII1->StartsWith(",0")) {
		sII1 = sII1->Substring(2, sII1->Length - 1);
	}
	if (sII1->StartsWith("0")) {
		sII1 = sII1->Substring(1);
	}
	if (sII1->StartsWith(",")) {
		sII1 = sII1->Substring(1);
	}
	if ((func_checkFloat(sII1)) && (sII1->StartsWith("."))) {
		sII2 = "0";
		sII1 = sII1->Concat(sII2, sII1);
	}
	if (func_checkNeg(sII7)) {
		sII2 = "-";
		sII1 = sII1->Concat(sII2, sII1);
	}
	if (sII1->Equals(""))
		sII1 = "0";
	return sII1;	
}

bool func_isValid(String ^sI1) {
	String ^sI2;	
	sI2 = func_unformatNumber(func_trim(sI1));
	if (sI2->Length <= 6000010) {
		return true;
	}
	else {
		return false;
	}	
}

String ^func_comp(String ^sI10, Int32 nLength) {
	Int32 i, k, n;
	String ^sTemp;
	String ^sTemp2;
	Int32  a;
	
	if (sI10->StartsWith("*"))
		return sI10;
	n = sI10->Length - 1;
	if (n == 0) {
		a = 9 - Convert::ToInt32(sI10);
		sTemp= String::Format("{0,3:G}", a);
		sTemp = sTemp->Trim();
	}
	else {
		k = n;
		sTemp = "";
		for ( i = 0; i <= n; i ++) {
			sTemp2 = sI10->Substring(i, 1);
			if ((sTemp2->Equals("-")) || (sTemp2->Equals("."))) {
			}
			else {
				a = 9 - Convert::ToInt32(sTemp2);
				sTemp2 = String::Format("{0,2:G}", a)->Trim();
				sTemp = sTemp->Concat(sTemp, sTemp2);
			}
		}	
	}
	return sTemp;
}


String ^func_add(String ^sI1, String ^sI2, Int32 lsize) {
	Int32	i;
	Int32 j;
	Int32	k;
	Int32 l;
	Int32 m;
	Int32 n;
	Int32 ff1, ff2;
	Int32  a;
	
	String ^sTemp;
	String ^sTemp2;
	String ^sI3;
	Int32 nLength;
		
	func_initArray(0, sI1->Length + sI2->Length + 5);
	if ((sI1->StartsWith("*")) || (sI2->StartsWith("*"))) {
		return "*Not a valid number";
	}
	sTemp = "";
	sTemp2 = "";
	
	if (sI1 == "") 
		ff1 = 0;
	else
		ff1 = 1;
	if (sI2 == "") 
		ff2 = 0;
	else
		ff2 = 1;
	
	if ((ff1 == 0) && (ff2 == 0)) {
		return "0";
	}
	else if (ff1 == 0) {
		return sI2;
	}
	else if (ff2 == 0) {
		return sI1;
	}
	
	if (sI1->Length >= sI2->Length) {
		nLength = sI1->Length - 1;
	}
	else {
		nLength = sI2->Length - 1;
	}
	nLength ++;
	j = sI1->Length - 1;
	m = j;
	k = nLength - m - 1;
	for ( i = m; i >= 0; i --) {
		sTemp2 = sI1->Substring(i, 1);
		if ((sTemp2->Equals(".") == false) && (sTemp2->Equals(",") == false))  
			ara[m - i] = Convert::ToInt32(sTemp2);
		k ++;
		
	}
	j = sI2->Length - 1;
	n = j;
		k = nLength - n - 1;
		for ( i = n; i >= 0; i --) {
			sTemp2 = sI2->Substring(i, 1);
			if ((sTemp2->Equals(".") == false) && (sTemp2->Equals(",") == false))  
				arb[n - i] = Convert::ToInt32(sTemp2);
			k ++;
		}		
		
			k = 0;
			j = nLength;
			for ( i = 0; i <= nLength; i ++) {
				
				l = ara[i] + arb[i];
				
				if (l > 9) {
					l = l - 10;
					arc[k] = arc[k] + l;
					arc[k + 1] = arc[k + 1] + 1;
					if (arc[k + 1] > 9) {
						arc[k + 1] = arc[k + 1] - 10;
					}		
				}
				else {
					arc[k] = arc[k] + l;
					if (arc[k] > 9) {
						arc[k] = arc[k] - 10;
						arc[k + 1] = arc[k + 1] + 1;
						if (arc[k + 1] > 9) {
							arc[k + 1] = arc[k + 1] - 10;
						}		
						
					}
				}
				j --;
				k ++;
			}
			sI2 = "";
			for (i = 0; i <= nLength; i ++) {
				a = arc[i];
				sTemp = String::Format("{0,3:G}", a);
				sI1= sTemp->Trim();				
				sI2 = sI2->Concat(sI1, sI2);		
			}
			if (sI2->StartsWith("0")) {
				sI2 = sI2->Substring(1);
			}
			sI3	= sI2;
			
			if (sI3->Length < 1) {
				sI3 = "0";
			}
			else if (sI3->Equals("-")) {
				sI3 = "0";
			}
			
			return sI3;
}


String ^func_csub(String ^sI1, String ^sI2) {
	String ^sI3;
	String ^sTemp;
	String ^sTemp2;
	bool bneg1, bneg2;
	Int32 nLength;	
	
	bneg1 = func_checkNeg(sI1);
	bneg2 = func_checkNeg(sI2);		
	sTemp = "";
	
	if ((bneg1 == bneg2) && (sI1->Equals(sI2)) && (sI1->Length == sI2->Length)) {
		return "0";
	}
	
	if ((sI1->Equals("0"))) {
		sTemp2 = "-";
		sTemp = sTemp->Concat(sTemp2, sI2);
		return sTemp;
	}
	
	if (bneg1 == true) {
		sI1 = sI1->Substring(1);
	}
	if (sI1->Length >= sI2->Length) {
		nLength = sI1->Length;
	}
	else {
		nLength = sI2->Length;
	}
	
	if (bneg2 == true) {
		sI2 = sI2->Substring(1);
	}
	if (sI1->Length != sI2->Length) {
		if ((bneg1 == true) && (bneg2 == false)) {			
			sI3 = func_add(sI1, sI2, nLength);
			sTemp = "-";
			sTemp = sTemp->Concat(sTemp, sI3); 
		}
		else if ((bneg1 == false) && (bneg2 == true)) {	
			sI3 = func_add(sI1, sI2, nLength + 1);
			sTemp = sI3;
		}
		else if ((bneg1 == true) && (bneg2 == true)) {
			if (sI1->Length > sI2->Length)  {
				sTemp = func_comp(sI1, nLength);
				sI3 = func_add(sTemp, sI2, nLength);
				sTemp = func_comp(sI3, nLength);
				sTemp2 = "-";
				sTemp = sTemp->Concat(sTemp2, sTemp);
			}
			else {
				sTemp = func_comp(sI2, nLength);
				sI3 = func_add(sTemp, sI1, nLength);
				sTemp = func_comp(sI3, nLength);
			}
		}
		else {
			if (sI1->Length < sI2->Length)  {
				sTemp = func_comp(sI2, nLength + 1);
				sI3 = func_add(sTemp, sI1, nLength + 1);
				sTemp = func_comp(sI3, nLength + 1);
				sTemp2 = "-";
				sTemp = sTemp->Concat(sTemp2, sTemp);
			}
			else {
				if (sI1->StartsWith("0")) {
					while (sI1->StartsWith("0")) {
						sI1 = sI1->Substring(1);
						nLength --;
					}					
				}
				sTemp = func_comp(sI1, nLength + 1);
				sI3 = func_add(sTemp, sI2, nLength + 1);
				sTemp = func_comp(sI3, nLength + 1);
			}
		}
	}
	else {
		if ((bneg1 == true) && (bneg2 == false)) {			
			sI3 = func_add(sI1, sI2, nLength + 1);
			if (sI3->Equals("0")) {
			}
			else {
				sTemp = "-";
				sTemp = sTemp->Concat(sTemp, sI3); 
			}
		}
		else if ((bneg1 == false) && (bneg2 == true)) {	
			sI3 = func_add(sI1, sI2, nLength + 1);
			sTemp = sI3;		
		}
		else if ((bneg1 == true) && (bneg2 == true)) {
			sTemp = func_comp(sI2, nLength + 1);
			sI3 = func_add(sTemp, sI1, nLength + 1);
			sTemp = func_comp(sI3, nLength + 1);
			sTemp = func_comp(sTemp, nLength + 1);
			sTemp = func_comp(sTemp, nLength);
			
		}
		else {
			if (sI1->CompareTo(sI2) > 0) {
				sTemp = func_comp(sI1, nLength + 1);
				sI3 = func_add(sTemp, sI2, nLength + 1);
				sTemp = func_comp(sI3, nLength + 1);
			}
			else {
				sTemp = func_comp(sI2, nLength + 1);
				sI3 = func_add(sTemp, sI1, nLength + 1);
				sTemp = func_comp(sI3, nLength + 1);
				sTemp = func_comp(sTemp, nLength + 1);
				sTemp = func_comp(sTemp, nLength + 1);
				if (sI1->CompareTo(sI2) < 0) {
					sTemp2 = "-";
					sTemp = sTemp->Concat(sTemp2, sTemp);
				}
			}
		}
		
	}
	if (sTemp->StartsWith("-0")) {
		sTemp = sTemp->Substring(1);
		while (sTemp->StartsWith("0")) {
			sTemp = sTemp->Substring(1);
		}
		sTemp2 = "-";
		sTemp = sTemp->Concat(sTemp2, sTemp);
	}
	while ((sTemp->Length > 1) && (sTemp->StartsWith("0"))) {
		sTemp = sTemp->Substring(1);
	}
	if (sTemp->Length < 1) {
		sTemp = "0";
	}
	else if (sTemp->Equals("-")) {
		sTemp = "0";
	}

	sI3	= sTemp;
	return sI3;
}


String ^func_cadd(String ^sI1, String ^sI2) {
	String ^sI3;
	String ^sI4;
	bool bneg1, bneg2;
	Int32	nLength;
	
	if (sI1->Length < 1) {
		sI1 = "0";
	}
	if (sI2->Length < 1) {
		sI2 = "0";
	}
	if (sI1->Length >= sI2->Length) {
		nLength = sI1->Length;
	}
	else {
		nLength = sI2->Length;
	}
	if (sI1->StartsWith("-")) {
		bneg1 = true;
		sI1 = sI1->Substring(1);
	}
	else {
		bneg1 = false;
	}
	if (sI2->StartsWith("-")) {
		bneg2 = true;
		sI2 = sI2->Substring(1);
	}
	else {
		bneg2 = false;
	}

	if ((bneg1 == true) && (bneg2 == true)) {
		sI4 = "-";
		sI3 = func_add(sI1, sI2, nLength);
		sI3 = sI3->Concat(sI4, sI3);
	}	 
	else if ((bneg1 == false) && (bneg2 == true)) {
		if ((sI1->CompareTo(sI2) < 0) && (sI1->Length <= sI2->Length)){
			sI4 = "-";
			sI3 = func_csub(sI2, sI1);
			sI3 = sI3->Concat(sI4, sI3);
		}
		else {
			sI4 = "";
			sI3 = func_csub(sI1, sI2);
			sI3 = sI3->Concat(sI4, sI3);
		}		
	}
	else if ((bneg1 == true) && (bneg2 == false)) {
		if ((sI1->CompareTo(sI2) < 0) && (sI1->Length <= sI2->Length)){
			sI4 = "";
			sI3 = func_csub(sI2, sI1);
			sI3 = sI3->Concat(sI4, sI3);
		}
		else {
			if (sI1->Equals(sI2)) {
				return "0";
			}
			sI4 = "-";
			sI3 = func_csub(sI1, sI2);
			sI3 = sI3->Concat(sI4, sI3);
		}
	}
	else {
		sI3 = func_add(sI1, sI2, nLength);
	}
	if ((sI3->Length > 1) && (sI3->StartsWith("0"))) {
		sI3 = sI3->Substring(1);
	}
	if (sI3->Length < 1) {
		sI3 = "0";
	}
	else if (sI3->Equals("-")) {
		sI3 = "0";
	}
	sI3 = func_rtrim(sI3);
	return sI3;
}

String ^func_multiply(String ^sI1, String ^sI2) {
	String ^bTen;
	String ^sI3;
	Int32 i;
	Int32 j;
	Int32 k;
	Int32 l;
	Int32 m;
	Int32 n;
	Int32 z;
	Int32 ff1, ff2;
	String ^sTemp;
	String ^sTemp2;
	String ^sFig1;
	String ^sFig2;
	String ^sI6;
	String ^sI7;
	bool bintNeg1, bintNeg2;
	Int32  a;
	
	func_initArray(0, sI1->Length + sI2->Length + 5);
	if ((sI1->StartsWith("*")) || (sI2->StartsWith("*"))) {
		return "*Not a valid number";
	}
	if ((sI1->Equals("0")) || (sI2->Equals("0")))
		return "0";
	else if (sI1->Equals("1")) {
		sTemp2 = sI2;
		if ((func_checkNeg(sI1)) || (func_checkNeg(sI2))) {
			sTemp2 = sTemp2->Concat("-", sTemp2);
		}
		return sTemp2;
	}
	else if (sI2->Equals("1")) {
		sTemp2 = sI1;
		if ((func_checkNeg(sI1)) || (func_checkNeg(sI2))) {
			sTemp2 = sTemp2->Concat("-", sTemp2);
		}
		return sTemp2;
	}
	
	if ((sI1->Equals("0"))|| (sI2->Equals("0"))) {
		return "0";
	}
	m = 0;
	sTemp = "";
	sTemp2 = "";

	bTen = "1";
	m = sI2->Length;
	for (i = 0; i < m; i ++) {
		bTen = bTen->Concat(bTen, "0");
	}
	m --;
		if (sI2->Equals(bTen->Substring(0, sI2->Length))) {
			sI7 = sI1;
			if (func_checkFloat(sI1)) {
				sI7 = func_unformatNumber(func_stripFloat(sI1));
				n = func_decLength(sI1);
				k = m - n;
				if (k < 0) {
					k = k - 1;
					sI7 = func_insComma(sI7, k);
				}
				else if (k > 0){
					sI6 = "";
					while (k > 0) {
						sI6 = sI6->Concat(sI6, "0");
						k --;
					}
					sI7 = sI7->Concat(sI7, sI6);
				}
				sI7 = func_unformatNumber(func_trim(sI7));
				sI6 = "0";
				if (sI7->StartsWith(".")) {
					sI7 = sI7->Concat(sI6, sI7);
				}
				sI3 = sI7;
			}
			else {
				sI3 = "";
				while (m > 0) {
					sI3 = sI3->Concat(sI3, "0");
					m --;
				}
				sI3 = sI3->Concat(sI7, sI3);
			}	
			return sI3;
		}

	
	if (sI1 == "") 
		ff1 = 0;
	else
		ff1 = 1;
	if (sI2 == "")
		ff2 = 0;
	else
		ff2 = 1;
	
	if ((ff1 == 0) && (ff2 == 0)) {
		return "0";
	}
	else if (ff1 == 0) {
		return "0";
	}
	else if (ff2 == 0) {
		return "0";
	}

	if (sI1->StartsWith("-")) {
		bintNeg1 = true;
		sI1 = sI1->Substring(1);
	}
	else {
		bintNeg1 = false;
	}
	sFig1 = sI1;
	j = sI1->Length - 1;
	m = j;
	k = 0;
	for ( i = 0; i <= j; i ++) {
		sTemp2 = sI1->Substring(i, 1);
		k ++;
		if ((sTemp2->Equals(".") == false) && (sTemp2->Equals(",") == false))
			ara[k] = Convert::ToInt32(sTemp2);
	}
	if (sI2->StartsWith("-")) {
		bintNeg2 = true;
		sI2 = sI2->Substring(1);
	}
	else {
		bintNeg2 = false;
	}
	j = sI2->Length - 1;
	n = j;
	sFig2 = sI2;
	
		k = 0;
		for ( i = 0; i <= j; i ++) {
			sTemp2 = sI2->Substring(i, 1);
			k ++;
			if ((sTemp2->Equals(".") == false)  && (sTemp2->Equals(",") == false))
				arb[k] = Convert::ToInt32(sTemp2);
		}	
		    m ++;
			n ++;
			for ( i = 1; i <= m; i ++) {
				for ( j = 1; j <= n; j ++) {			
					k = i + j - 1;
					l = ara[i] * arb[j];
					if (l > 9) {
						arc[k] = arc[k] + (l - (l / 10) * 10);
						arc[k - 1] = arc[k - 1] + (l / 10);
					}
					else {
						arc[k] = arc[k] + l;
					}
				}		
			}
			sI2 = "";
			for (i = k; i >= 0; i --) {
				
				if (arc[i] > 9) {
					l = arc[i];
					z = arc[i] - ((arc[i] / 10) * 10);
					arc[i - 1] = arc[i - 1] + ( l / 10); 
					arc[i] = z;
					if (i == 0) {
						arc[i] = arc[i] + (( l / 10) * 10);
					}
				}
				a = arc[i];
				sTemp = String::Format("{0,3:G}", a);
				sI1 = sTemp->Trim();
				sI2 = sI2->Concat(sI1, sI2);		
			}
			sI3	= sI2;
			if (bintNeg1 != bintNeg2) {
				sI2 = "-";
				sI3 = sI3->Concat(sI2, sI3);				
			}
			if (sI3->StartsWith("0.00")) {
				sI3 = sI3->Substring(4);
			}
			while (sI3->StartsWith("0")) {
				sI3 = sI3->Substring(1);
			}
			return sI3;	
}


String ^func_mdiv(String ^sI1, String ^sI2, Int32 MAX_DIGITS) {
	String ^bTen;
	String ^sI3;
	String ^sI4;
	String ^sI7;
	String ^sI8;
	String ^sI10;
	String ^sI13;
	String ^sI6;
	String ^sTemp;
	Int32 i, ii, jj, kk, nn, ns;
	bool bneg1, bneg2;
	bool flag, flag2;
	Int32 nl1, nl2, nl3, nl4;
	bool birrational = false;
	if ((sI1->StartsWith("*")) || (sI2->StartsWith("*"))) {
		return "*Not a valid number";
	}
	bneg1 = false;
	bneg2 = false;
	
	if (sI1->StartsWith("-")) {
		bneg1 = true;
	}
	if (sI2->StartsWith("-")) {
		bneg2 = true;
	}

	nl1 = sI1->Length;
	nl2 = sI2->Length;
	if (nl1 > nl2)
		MAX_DIGITS += nl1;
	else
		MAX_DIGITS += nl2;
	nl3 = nl1 - nl2;
	nl4 = nl3;
	flag2 = true;
	bten = false;
	sI7 = "0";
	jj = 0;
	nn = 0;
	kk = 1;
	sI10 = sI2;
	i = 0;
	bTen = "1";
	for (i = 0; i < sI2->Length; i ++) {
		bTen = bTen->Concat(bTen, "0");
	}
	if (sI1->Equals("0"))
		return "0";

		i = 0;
		nn = sI2->Length - 1;
		if (sI2->Equals(bTen->Substring(0, sI2->Length))) {
			bten = true;
			if (func_checkFloat(sI1)) {
				kk = func_decLength(sI1);
				kk ++;
				sI10 = func_stripFloat(sI1);
				sI3 = func_insComma(sI10, kk);
				return sI3;
			}
			else {
				i ++;
				if ((i == 1) && (sI1->Length < sI2->Length)) {
					sI10 = "0.";
					nn = nn - (sI1->Length - 1);
					while (nn > 1) {
						sI10 = sI10->Concat(sI10, "0");
						nn --;
					}
					sI3 = sI10->Concat(sI10, sI1);
					return sI3;
				}
				else {					
					if (dRound) {
						sI3 = sI1->Substring(0,sI2->Length - 1);
					}
					else  {
						sI3 = func_insComma(sI1, sI1->Length - sI2->Length + 2);
					}
					return sI3;
				}
				return sI3;
			}
		}	
	
			if (sI2->Length == 1) {
				if (sI1->Substring(0, 1)->CompareTo(sI2->Substring(0, 1)) >= 0)
					ns = sI2->Length;
				else
					ns = sI2->Length + 1;
				if (ns > sI1->Length)
					ns = sI1->Length;
				sI13 = sI1->Substring(0, ns);
			}
			else {
				sTemp = func_rtrim2(sI2);
				if (sTemp->Equals(sI2) == false) {
					ns = sI2->Length + 1;
					if (ns > sI1->Length)
						ns = sI1->Length;
					sI13 = sI1->Substring(0, ns);
				}
				else {
					if (sI1->Substring(0, 1)->CompareTo(sI2->Substring(0, 1)) >= 0)
						ns = sI2->Length;
					else
					ns = sI2->Length + 1;
					if (ns > sI1->Length)
						ns = sI1->Length;
					sI13 = sI1->Substring(0, ns);
				}
			}
	sI7 = "";
	sI8 = "FIRST";
	i = sI13->Length;
	while (flag2 == true) {
		flag = true;
		sI4 = "0";
		ii = 0;
		if (sI8->Equals("0") == false) {
			sI3 = sI13;
			while (flag == true) {
				sI3 = func_csub(sI3, sI2);
				if (sI3->StartsWith("-")){
					flag = false;
					ii = 1;				
				}
				else {
					sI4 = func_cadd(sI4, "1");
				}
			}	
		}		
		
		sI7 = sI7->Concat(sI7, sI4);
		sI6 = func_multiply(sI2, sI4);	
		sI8 = func_csub(sI13, sI6);
		if (i > MAX_DIGITS)
			flag2 = false;
		else if (i <= sI1->Length - 1) {
			if (sI8->Equals("0")) {
				sI8 = "";
			}
			sI8 = sI8->Concat(sI8, sI1->Substring(i, 1));
			sI13 = sI8;
			i ++;
		}
		else {
			flag2 = false;
		}
	}
	if (bneg1 != bneg2) {
		sTemp = "-";
		sI7 = sI7->Concat(sTemp, sI7);
	}
	if (sI7->Length - 2 > 0) {
		if (sI7->Substring(sI7->Length - 1, 1)->CompareTo("4") > 0) {
			sI6 = sI7->Substring(0, sI7->Length - 2);
			sI7 = func_cadd(sI6, "1");
		}
	}
	if (sI7->StartsWith("0"))
		sI7->Substring(1);
	return sI7;
}


String ^func_procMul(String ^sI1, String ^sI2, bool bdisplayed) {
	String ^sI3;
	String ^sI6;
	String ^sI7;
	String ^sFig1;
	String ^sFig2;
	String ^sI9;
	String ^sI10;
	String ^sTemp;
	String ^sZ;
	bool bfloat1, bfloat2, bneg1, bneg2, bten;
	Int32 ndouble1, k, l, i, n, nl1, nl2;
	valarray<int> sA, sB;
	sFig1 = sI1;
	sFig2 = sI2;	
	sI1 = sFig1;
	sI2 = sFig2;
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}	
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}			
	bneg1 = func_checkNeg(sI1);
	bneg2 = func_checkNeg(sI2);	
	if (bneg1) {
		sI1 = sI1->Substring(1);
	}
	if (bneg2) {
		sI2 = sI2->Substring(1);
	}	
	sI9 = sI1;
	sI10 = sI2;	

	if ((sI1->StartsWith("0")) && ((sI1->Length == 1) || (sI2->StartsWith("0"))) && (sI2->Length == 1)) {
		bfloat1 = true;
		bfloat2 = true;
		sI3 = "0";
	}
	else {		
		bfloat1 = func_checkFloat(sFig1);
		bfloat2 = func_checkFloat(sFig2);
		sI6 = sFig1;
		sI7 = sFig2;
		if (bneg1) 
			sI6 = sFig1->Substring(1);
		if (bneg2)
			sI7 = sFig2->Substring(1);
		bten = false;
		if ((sI6->StartsWith("10")) || (sI7->StartsWith("10"))) {		
			if ((bfloat1) && (bfloat2 == false) && (sI7->Length > 1)) {
				n = sI7->Length;
				l = 1;
				i = 1;
				while (i < n) {
					if (sI7->Substring(i, 1)->Equals("0")) {
						l ++;
					}
					i ++;
				}
				if (sI7->Length == l) {
					sI6 = func_rtrim2(func_stripFloat(sI6));
					l = l - func_numFloat(sFig1) + sI6->Length - 1;
					sI6 = func_insComma(sI6, l);
					sI3 = sI6;
					bten = true;
				}
				
			}
			else if ((bfloat1 == false) && (bfloat2) && (sI6->Length > 1)) {
				n = sI6->Length;
				l = 2;
				i = 2;
				while (i < n) {
					if (sI6->Substring(i, 1)->Equals("0")) {
						l ++;
					}
					i ++;
				}
				if (sI7->Length <= l) {					
					sI7 = func_rtrim2(func_stripFloat(sI7));
					l = l - func_numFloat(sFig2) + sI7->Length;
					sI7 = func_insComma(sI7, l);
					sI3 = sI7;
					bten = true;
				}				
			}
		}
		if (bten == false) {		
			sI3 = "0";
			if (bfloat1 == true) {
				sI6 = func_stripFloat(sI1);
				nl1 = func_numFloat(sFig1);
			}
			else {
				sI6 = sI1;
				nl1 = 0;
			}	
			if (bfloat2 == true) {
				sI7 = func_stripFloat(sI2);
				nl2 = func_numFloat(sFig2);
			}
			else {
				sI7 = sI2;
				nl2 = 0;
			}
			if ((bfloat1) || (bfloat2)) {
				if (nl1 > nl2) {
					if (nl2 > 0) {						
						nl1 = nl1 - nl2;
						nl2 = nl2 - 2;
						k = 0;
					}
					else {
						nl2 = 0;
						k = 0;
					}
				}
				else if (nl2 > nl1) {
					if (nl1 > 0) {
						nl2 = nl2 - nl1;
						nl1 = nl1 - 2;						
						k = 0;
					}
					else {
						nl1 = 0;
						k = 0;
					}
				}
				sI1 = func_rtrim(sI6);
				sI2 = func_rtrim(sI7);
				sI6 = sI1;
				sI7 = sI2;
				ndouble1 = 0;

				if (sFig1->Contains(".")) {
					while (sI6->EndsWith("0")) {
						sI6 = sI6->Substring(0, sI6->Length - 1);
					}
					nl1 = func_numFloat(sFig1);
				}
				if (sFig2->Contains(".")) {
					while (sI7->EndsWith("0")) {
						sI7 = sI7->Substring(0, sI7->Length - 1);
					}
					nl2 = func_numFloat(sFig2);

				}
				sI3 = func_rtrim(func_multiply(sI6, sI7));
				if ((sFig1->Contains(".") == false) || (sFig2->Contains(".") == false)) {
					ndouble1 = sI3->Length;
				}
				else if ((sFig1->Contains(".") == true) && (sFig2->Contains(".") == true)) {
					ndouble1 = sI3->Length;
					nl1 = func_numFloat(sFig1);
					nl2 = func_numFloat(sFig2);
					k = 0;
				}
				else if ((sFig1->Contains(".") == true) || (sFig2->Contains(".") == true)) {
					ndouble1 = sI3->Length;
					nl1 = func_numFloat(sFig1);
					nl2 = func_numFloat(sFig2);
					k = 0;
				}
				ndouble1 = ndouble1 - ((nl1 + nl2) + k);				
				sTemp = func_insComma(sI3, ndouble1);		
				if (func_checkFloat(sI3))
					sI3 = func_rtrim(sTemp);
				else {
					sI3 = sTemp;
				}
			}
			else {
				sI3 = func_multiply(sI1, sI2);
			}			
		}
	}
	sZ = "";
	if (bneg1 != bneg2) {
		sTemp = "-";
		sI3 = sTemp->Concat(sTemp, sI3);
	}
	if (sI3->EndsWith("."))
		sI3 = sI3->Substring(0, sI3->Length - 1);
	if (func_checkFloat(sI3))
		sI3 = func_rtrim2(sI3);
	sI1 = sFig1;
	sI2 = sFig2;
	if (bdisplayed) {
	sZ = sZ->Concat(sZ, "The result of multiplication of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " by ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI1 = String::Format("{0,10:G}", func_numDigit(sI3))->Trim();
	sZ = sZ->Concat(sZ, " (", sI1, "-digit)");
	sZ = sZ->Concat(sZ, "\n\n");
	return sZ->Trim();
	}
	else {
		return sI3;
	}
}


String ^func_procAdd(String ^sI1, String ^sI2, bool bdisplayed) {
	String ^sI3;
	String ^sI6;
	String ^sI7;
	String ^sI8;
	String ^sI9;
	String ^sFig1;
	String ^sFig2;
	String ^sZ;
	bool  bfloat1, bfloat2, bneg1, bneg2, bGotoResult;
	Int32 nl1, nl2;
	sFig1 = sI1;
	sFig2 = sI2;
	sI1 = sFig1;
	sI2 = sFig2;	
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}	
	if (func_isNumber(sI2) == false) {		
		return "*Not a valid number";
	}
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}	
	bneg1 = func_checkNeg(sI1);
	bneg2 = func_checkNeg(sI2);

	if ((sI2->StartsWith("0")) && (sI2->Length == 0)) {
		sI3 = sI1;
		bGotoResult = true;
	}
	else if (sI2->Equals("0")) {
		sI3 = sI1;
		bGotoResult = true;
	}
	else if (sI1->Equals("0")) {
		sI3 = sI2;
		bGotoResult = true;
	}
	else if (((sI1->StartsWith("0")) && (sI1->Length == 0)) || ((sI2->Equals("0")))) {
		sI3 = sI2;
		bGotoResult = true;
	}
	else {
		bGotoResult = false;
	}			 
	
	bfloat1 = func_checkFloat(sI1);
	bfloat2 = func_checkFloat(sI2);
	if (bdisplayed) {
	}
	
	if (bGotoResult == false) {		 
		if (func_checkNeg(sI1)) 
			sI1 = sI1->Substring(1);
		if (func_checkNeg(sI2))
			sI2 = sI2->Substring(1);

		nl1 = func_numFloat(sI1);		
		nl2 = func_numFloat(sI2);
		if ((bfloat1) && (bfloat2)) {
			if (nl1 > nl2) {
				nl2 = nl1;
			}
			else {
				nl1 = nl2;
			}
			sI6 = func_procMul(sI1, func_f10zero2(nl1), false);
			sI7 = func_procMul(sI2, func_f10zero2(nl2), false);
		}
		else if ((bfloat1) || (bfloat2 == false)) {
			nl2 = nl1;
			nl1 = 0;
			sI6 = func_stripFloat(sI1);
			sI7 = func_procMul(sI2, func_f10zero2(nl2), false);
		}
		else if ((bfloat1 == false) || (bfloat2)) {
			nl1 = nl2;
			nl2 = 0;
			sI7 = func_stripFloat(sI2);
			sI6 = func_procMul(sI1, func_f10zero2(nl1), false);
		}
		else {
			sI6 = sI1;
			sI7 = sI2;
		}

		if (func_checkNeg(sI1)) 
			sI1 = sI1->Substring(1);
		if (func_checkNeg(sI2))
			sI2 = sI2->Substring(1);

		sI8 = sI1->Substring(0, func_decLength(sI1));
		sI9 = sI2->Substring(0, func_decLength(sI2));


		if ((bneg1 == false) && (bneg2)) {
			sI3 = func_csub(sI6, sI7);
			sZ = func_csub(sI8, sI9);
		}
		else if ((bneg1) && (bneg2 == false)) {
			sI3 = func_csub(sI7, sI6);
			sZ = func_csub(sI9, sI8);
		}
		else if ((bneg1) && (bneg2)) {
			sI3 = func_cadd(sI6, sI7);
			sZ = func_cadd(sI8, sI9);
		}
		else {
			sI3 = func_cadd(sI6, sI7);
			sZ = func_cadd(sI8, sI9);
		}

		if ((bfloat1 == false) && (bfloat2 == false))
			sI3 = sZ;
		else if ((bfloat1) || (bfloat2)) {
			nl1 = func_numFloat(sI1);;
			nl2 = func_numFloat(sI2);
			
			sI3 = func_stripFloat(sI3);
			if ((sI1->StartsWith("0.")) && (sI2->StartsWith("0.")) || (func_decLength(sI1) == func_decLength(sI2))) {
				if (nl1 > nl2)
					sI3 = func_insComma(sI3, sI3->Length - nl1);
				else 
					sI3 = func_insComma(sI3, sI3->Length - nl2);
			}
			else {
				if (sI3->StartsWith(sZ) == false)
					sI3 = func_insComma(sI3, sZ->Length + 1);
				else
					sI3 = func_insComma(sI3, sZ->Length);
			}
			if ((bneg1) && (bneg2))
				sI3 = sI3->Concat("-", sI3);
		}	
	}
	sI1 = sFig1;
	sI2 = sFig2;
	if ((sI3->StartsWith("-")) && (sI3->Length == 1)) {
		sI3 = "0";
	}

	if (bdisplayed) {
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of addition of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " and ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	return sZ->Trim();}
	else {
		if (sI3->StartsWith("-."))
			sI3 = sI3->Concat("-", sI3->Substring(2, sI3->Length - 2));
		return sI3;
	}
	}

String ^func_procSub(String ^sI1, String ^sI2, bool bdisplayed) {
	String ^sI3;	
	String ^sI6;
	String ^sI7;
	String ^sI8;
	String ^sI9;
	String ^sFig1;
	String ^sFig2;
	String ^sZ;
	Int32 nl1, nl2;
	bool bfloat1, bfloat2, bneg1, bneg2, bneg3, bGotoResult;
	sFig1 = sI1;
	sFig2 = sI2;
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}
	
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}	
	
	if (sI1->Equals("0")) {
		if (func_checkNeg(sI2))
			return sI2->Substring(1);
		else
			return sI2->Concat("-", sI2);
	}
	if ((sI2->StartsWith("0")) && (sI2->Length == 0)) {
		sI3 = sI1;
		bGotoResult = true;
	}
	else if ((sI1->StartsWith("0")) && (sI1->Length == 0)) {
		sI3 = sI2;
		bGotoResult = true;
	}
	else {
		bGotoResult = false;
	}	

	bfloat1 = func_checkFloat(sI1);
	bfloat2 = func_checkFloat(sI2);	
	bneg1 = func_checkNeg(sI1);
	bneg2 = func_checkNeg(sI2);
	
	sI1 = func_unformatNumber(sI1);
	sI2 = func_unformatNumber(sI2);
	
	if (bGotoResult == false) {
		if (bneg1)
			sI1 = sI1->Substring(1);
		if (bneg2)
			sI2 = sI2->Substring(1);
						
		nl1 = func_numFloat(sI1);		
		nl2 = func_numFloat(sI2);
		if ((bfloat1) && (bfloat2)) {
			if (nl1 > nl2) {
				nl2 = nl1;
			}
			else {
				nl1 = nl2;
			}
			sI6 = func_procMul(sI1, func_f10zero2(nl1), false);
			sI7 = func_procMul(sI2, func_f10zero2(nl2), false);
		}
		else if ((bfloat1) || (bfloat2 == false)) {
			nl2 = nl1;
			nl1 = 0;
			sI6 = func_stripFloat(sI1);
			sI7 = func_procMul(sI2, func_f10zero2(nl2), false);
		}
		else if ((bfloat1 == false) || (bfloat2)) {
			nl1 = nl2;
			nl2 = 0;
			sI7 = func_stripFloat(sI2);
			sI6 = func_procMul(sI1, func_f10zero2(nl1), false);
		}
		else {
			sI6 = sI1;
			sI7 = sI2;
		}

		sI8 = sI1->Substring(0, func_decLength(sI1));
		sI9 = sI2->Substring(0, func_decLength(sI2));

		if ((bneg1 == false) && (bneg2)) {
			sI3 = func_cadd(sI6, sI7);
			sZ = func_cadd(sI8, sI9);
		}
		else if ((bneg1) && (bneg2 == false)) {
			sI3 = func_cadd(sI6, sI7);
			sZ = func_cadd(sI8, sI9);
		}
		else if ((bneg1) && (bneg2)) {
			sI3 = func_csub(sI7, sI6);
			sZ = func_csub(sI9, sI8);
		}
		else {
			sI3 = func_csub(sI6, sI7);
			sZ = func_csub(sI8, sI9);
		}
	
		if ((bfloat1 == false) && (bfloat2 == false))
			sI3 = sZ;
		else { 
			bneg3 = func_checkNeg(sI3);
			if (bneg3)
				sI3 = sI3->Substring(1);
			nl1 = func_numFloat(sI1);
			nl2 = func_numFloat(sI2);
			if (nl2 >= nl1)
				sI3 = func_insComma(sI3, sI3->Length - nl2);
			else
				sI3 = func_insComma(sI3, sI3->Length - nl1);
		}
	}
	sI1 = sFig1;
	sI2 = sFig2;
	if (sI3->StartsWith("-."))
		sI3 = sI3->Concat("-0.", sI3->Substring(2));
	if (sI3->StartsWith("0.-"))
		sI3 = sI3->Concat("-0.", sI3->Substring(3));
	if ((sI3->StartsWith("-0")) && (sI3->StartsWith("-0.") == false))
		sI3 = sI3->Concat("-", sI3->Substring(2));
	if (sI3->EndsWith("."))
		sI3 = sI3->Substring(0, sI3->Length - 1);
	
	if (bdisplayed) {
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of subtraction of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " from ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	return sZ->Trim();
	}
	else {
		if (sI3->Equals("")) 
			sI3 = "0";
		return sI3;
	}
}


String ^func_procDiv(String ^sI1, String ^sI2, bool bdisplayed, Int32 MAX_DIGITS2, bool bPrime) {
	String ^sI5;
	String ^sI6;
	String ^sI7;
	String ^sI8;
	String ^sI9;
	String ^sI10;
	String ^sFig1;
	String ^sFig2;
	String ^sTemp;
	String ^sZ;
	bool bfloat1, bfloat2, bneg1, bneg2, bGotoResult;
	Int32 nl1, nl2, nl1b, nl2b;
	Int32 MAX_DIGITS;
	Int32 a, b;
	if (sI2->Equals("0")) {		
		return "Error: Divided by zero.";
	}
	sFig1 = sI1;
	sFig2 = sI2;
	bzero = false;
	bten = false;
	if (func_isNumber(sI1) == false) {		
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}	
	bneg1 = func_checkNeg(sFig1);
	bneg2 = func_checkNeg(sFig2);
	if ((sI1->StartsWith("0")) && (sI1->Length == 1)) {
		sI7 = "0";
		bfloat1 = true;
		bfloat2 = true;
		bGotoResult = true;
	}
	else {
		bGotoResult = false;
	}
	if (bdisplayed) {
	}
	if (bGotoResult == false) {
		bfloat1 = func_checkFloat(sFig1);
		bfloat2 = func_checkFloat(sFig2);
		nl1 = 0;
		nl2 = 0;
		nl1b = func_numFloat(sFig1);
		nl2b = func_numFloat(sFig2);
		sI6 = func_rtrim(func_stripFloat(sFig1));
		sI7 = func_rtrim(func_stripFloat(sFig2));
		a = sI6->Length - sI7->Length;
		if (a < 0) {
			if (sI7->Length - sI6->Length > 2)
				MAX_DIGITS = sI7->Length + 10;
			else
				MAX_DIGITS = 10;
		}
		else
			MAX_DIGITS = sI6->Length;
		if (MAX_DIGITS < 42)
			MAX_DIGITS = 42;
		sI6 = "1";
		sI7 = "1";
		if ((bfloat1) && (bfloat2)) {
			if (bneg1)
				sI1->Substring(1);
			if (bneg2)
				sI2->Substring(2);
			if ((sI1->StartsWith("0.")) && (sI2->StartsWith("0."))) {
				if (nl1b >= nl2b) {
					nl1 += nl1b + MAX_DIGITS;
					nl2 = nl1;
				}
				else if (nl2b > nl1b) {
					nl1 += nl2b + MAX_DIGITS;
					nl2 = nl1;
				}
			}
			else if ((sI1->StartsWith("0.") == false) && (sI2->StartsWith("0.") == false)) {
				if (nl1b >= nl2b) {
					nl1 += nl1b + MAX_DIGITS;
				}
				else if (nl2b > nl1b) {
					nl1 += nl2b + MAX_DIGITS;
				}	
			}
			else {
				if (sI1->StartsWith("0.")) {
					if (sI2->StartsWith("0.") == false) {
						if (nl1b > nl2b) {
							nl1 += nl1b + MAX_DIGITS;
						}
						else if (nl2b > nl1b) {
							nl2 += nl2b + MAX_DIGITS;
						}
					}
				}
				else if (sI2->StartsWith("0.")) {
					if (sI1->StartsWith("0.") == false) {
						if (nl1b >= nl2b) {
							nl1 += nl1b + MAX_DIGITS;
						}
						else if (nl2b > nl1b) {
							nl1 = nl2b + MAX_DIGITS;
						}
					}
				}
			}
			sI6 = func_f10zero2(nl1);
			sI7 = func_f10zero2(nl2);
		}
		else if ((bfloat1 == false) && (bfloat2 == false)) {
			if (bneg1)
				sI6 = sI1->Substring(1);
			else
				sI6 = sI1;
			if (bneg2)
				sI7 = sI2->Substring(1);
			else
				sI7 = sI2;
			nl1 = sI6->Length;
			nl2 = sI7->Length;
			if (sI6->Length <= sI7->Length) {
				sI6 = func_f10zero2(sI7->Length + MAX_DIGITS);
				sI7 = func_f10zero2(0);
			}
			else {
				nl1 = sI7->Length + MAX_DIGITS;
				nl2 = 0;
				sI6 = func_f10zero2(nl1);
				sI7 = func_f10zero2(nl2);
			}
		}
		else if ((bfloat1) || (bfloat2)) {
			if (bfloat1)
				if ((sFig2->StartsWith("0.")) || (sFig2->StartsWith("-0.")))
					sI6 = func_f10zero2(nl1 + nl2 + MAX_DIGITS);
				else {
					sI6 = func_f10zero2(nl1 + MAX_DIGITS);
					sI7 = "0";
				}
			else
				sI6 = func_f10zero2(sFig2->Length + MAX_DIGITS);
			if (bfloat2) {
				if (bfloat1 == false) {
					sI6 = func_f10zero2(sI2->Length + sI1->Length + MAX_DIGITS);
					sI7 = func_stripFloat(sI7); 

				}
				else if ((sFig2->StartsWith("0.")) || (sFig2->StartsWith("-0."))) {
					sI6 = func_f10zero2(nl2 + MAX_DIGITS);
					sI7 = func_f10zero2(nl2);
				}
				else {
					sI7 = func_f10zero2(nl2 + MAX_DIGITS);
				}
			}
			else {
				nl1 = nl2 + func_numFloat(sFig1) + MAX_DIGITS;
				nl2 = 0;
				sI6 = func_f10zero2(nl1);
				sI7 = func_f10zero2(nl2);
			}
		}
		sI1 = func_procMul(sFig1, sI6, false);
		sI2 = func_procMul(sFig2, sI7, false);
		a = nl1 - nl1b - MAX_DIGITS;
		b = nl2 - nl2b - MAX_DIGITS;
		if (bneg1) 
			sI1 = sI1->Substring(1);
		if (bneg2)
			sI2 = sI2->Substring(1);
		sI5 = func_mdiv(sI1, sI2, MAX_DIGITS2);
		sI6 = sFig1;
		sI7 = sFig2;
		if (bneg1)
			sI6 = sI6->Substring(1);
		if (bneg2)
			sI7 = sI7->Substring(1);
		if (sI6->StartsWith("0.")) {
			if (sI7->StartsWith("0."))
				nl2 = 1 - func_numFloat(sI6) + func_numFloat(sI7);
			else
				nl2 = 2 - func_numFloat(sI6) - func_decLength(sI7);
		}
		else {
			nl2 = func_decLength(sI6) - func_decLength(sI7);
		}
		sI1 = sFig1;
		sI2 = sFig2;
		if (bneg1) 
			sI1 = sI1->Substring(1);
		if (bneg2)
			sI2 = sI2->Substring(1);
		sI8 = sI1->Substring(0, func_decLength(sI1));
		sI9 = sI2->Substring(0, func_decLength(sI2));		
		if ((func_decLength(sI1) == func_decLength(sI2)) && (sI8->CompareTo(sI9) == 0))
			nl2 ++;
		else if (sI1->Substring(0, 1)->CompareTo(sI2->Substring(0, 1)) > 0)
			nl2 ++;
		else if ((sI2->Length > 1) && (sI1->Substring(0, 1)->CompareTo(sI2->Substring(0, 1)) > 0))
			nl2 ++;
		sI5 = func_insComma(sI5, nl2);
		sI7 = sI5;
	}
	if (sI7->StartsWith("."))
		sI7 = sI7->Concat("0", sI7);
	if (bneg1 != bneg2) {
		if (sI7->StartsWith("-") == false) {
			sTemp = "-";
			sI7 = sTemp->Concat(sTemp, sI7);
		}
	}	
	if (func_checkFloat(sI7)) {
		sI7 = func_rtrim2(sI7);
	}
	if (sI7->EndsWith("."))
		sI7 = sI7->Substring(0, sI7->Length - 1);
	if ((bPrime == false)) {
		sI6 = sI7->Substring(0, func_decLength(sI7));
		sI8 = func_procMul(sI6, sI2, false);
		sI1 = sFig1;
		if (bneg1)
			sI1 = sI1->Substring(1);
		sI5 = func_csub(sFig1->Substring(0, func_decLength(sI1)), sI8->Substring(0, func_decLength(sI8)));
	}	
	if (bdisplayed) {
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of division of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sFig1));
	sZ = sZ->Concat(sZ, " by ");
	sZ = sZ->Concat(sZ, func_formatNumber(sFig2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI7));
	sI6 = String::Format("{0,61000:G}", func_numDigit(sI7));
	sI6 = sI6->Trim();
	sI10 = " (";
	sI6 = sI10->Concat(sI10, sI6, "-Digit)");
	sZ = sZ->Concat(sZ, sI6);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	}
	if (bdisplayed) {
		return sZ;
	}
	else
		return sI7;
}


String ^func_trimFloat(String ^sI1, Int32 p) {
	Int32 k, i, q, n;
	String ^sTemp;
	String ^sTemp2;
	String ^sTemp3;
	String ^sI2;
	String ^sDec;
	bool bneg, bzero;
	bzero = false;
	n = func_numFloat(sI1);
	bneg = func_checkNeg(sI1);
	if (bneg)
		n --;
	if (bneg)
		sI1 = sI1->Substring(1);
	if (n > p) {
		if (sI1->Substring(func_decLength(sI1) + p, 1)->Equals("0")) {
			if (bneg)
				sI1 = sI1->Concat("-", sI1);
			return sI1;
		}
		if (sI1->StartsWith("0.")) {
			k = 1;
			bzero = true;
		}
		else
			k = func_decLength(sI1);
		i = k + 1;
		q = 0;
		while (i <= sI1->Length - 1) {
			if (sI1->Substring(i, 1)->Equals("0"))
				q ++;
			i ++;
		}
		sDec = sI1->Substring(0, k);
		sTemp2 = sI1->Substring(k + 1, p);
		sTemp3 = sTemp3->Concat(sDec, ".", sTemp2);
		if (k + p + 1 < sI1->Length) {
			sI2 = sI1->Substring(k + p + 1, 1);
			if (sI2->CompareTo("4") > 0) {
				sTemp3 = func_stripFloat(sTemp3);
				sTemp = func_rtrim(func_cadd(sTemp3, "1"));
				if (bzero == false)
					sTemp3 = func_insComma(sTemp, k);
				else
					sTemp3 = func_insComma(sTemp, -q);
			}
		}
		else if (bzero) {
			sTemp3 = func_rtrim(func_stripFloat(sTemp3));
			sTemp = func_cadd(sTemp3, "1");
			sTemp3 = func_insComma(sTemp, -q);
		}
		if (bneg)
			sTemp3 = sTemp3->Concat("-", sTemp3);
		if (sTemp3->EndsWith("."))
			sTemp3 = sTemp3->Substring(0, sTemp3->Length - 1);
		return sTemp3;
	}
	if (bneg)
		sI1 = sI1->Concat("-", sI1);
	return sI1;
}

String ^func_factorial(String ^sII1) {	
	String ^sII2;
	String ^sII3;
	sII2 = "1";
	while (sII1->CompareTo("0") > 0) {
		sII3 = func_multiply(sII1, sII2);
		sII2 = sII3;
		sII1 = func_csub(sII1, "1");
	}
	return sII2;
}

String ^func_sqrt(String ^sII1) {
	String ^a;
	String ^b;
	String ^c;
	String ^d;

	a = func_mdiv(d, "2", 0);
	b = func_multiply(a, a);
	c = func_csub(d, b);
	while (c->StartsWith("-")) {
		d = a;
		a = func_mdiv(d, "2", 0);
		b = func_multiply(a, a);
		c = func_csub(sII1, b);
	}
	d = func_multiply(a, a);
	c = func_csub(d, sII1);
	while (c->StartsWith("-")) {
		a = func_cadd(a, "1");
		d = func_multiply(a, a);
		c = func_csub(d, sII1);
	}
	return a;
}


bool func_shrink(String ^sII1, String ^sII2) {
	String ^dG;
	String ^sI3;
	
	dRound = true;
	sI3 = func_mdiv(sII1, sII2, 0);
	dRound = false;
	dG = func_csub(sII1, func_multiply(sI3, sII2));	
	if (dG->Equals("0")) {
		return true;
	}
	else {
		return false;
	}
	
}

bool func_endLoop(String ^sII1, String ^sII2) {
	if ((sII1->CompareTo(sII2) > 0) && (sII1->Length == sII2->Length)){
		return true;
	}
	else {
		return false;
	}
	
}

bool func_isOdd(String ^sII1) {
	String ^sII2;
	String ^sII3;
	String ^sII4;
	
	dRound = true;
	sII2 = func_mdiv(sII1, "2", 0);
	dRound = false;
	sII3 = func_multiply(sII2, "2");
	sII4 = func_csub(sII1, sII3);
	if (sII4->Equals("0")) {
		return false;
	}
	else {
		return true;
	}
}

