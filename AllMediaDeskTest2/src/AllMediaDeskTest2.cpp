//============================================================================
// Name        : AllMediaDeskTest2.cpp
// Author      : Mitchel Barton
// Version     :
// Copyright   : Your copyright notice
// Description : AllMediaDesk Application Task 2
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 *  This program will check the number Peter enters
 *  and find the closest tidy number (digits arranged in non-decreasing order)
*/
string tidyNum(string number) {
   for (int i = number.length()-2; i >= 0; i--) {
      if (number[i] > number[i+1]) {
         number[i]--;
         for (int j=i+1; j<number.length(); j++)
            number[j] = '9';
      }
   }
   return number;
}
int main() {

	string str;
  //method to collect user input
	cout << "Please input number (i.e. 23245): " << endl;
	cin >> str;
   string num = tidyNum(str);
   cout << "Output: " << num;
   return 0;
}
