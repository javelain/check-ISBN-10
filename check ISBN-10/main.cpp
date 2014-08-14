#include <iostream>
#include<conio.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int n ,lastdigit ,sum = 0;
	char ISBN [] = "0000000000";
	string input;

	cout<<"Enter the 9 first digit : ";
	cin>>n;

	int tmp = n;

    while(n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }

    ostringstream convert;
    convert << tmp;
    input = convert.str();

    for(int i = 0; i <input.size(); i++){
        ISBN[8 - i] = input[input.size() - i - 1];
    }

    if (sum % 11 == 10)
        ISBN[9] = 'X';
    else
        ISBN[9] = (char)(((int)'0') + sum % 11);

    cout <<"The ISBN is : "<< ISBN;

    getch();
	return 0;
}
