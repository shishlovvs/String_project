//string_separation

//constructors_delegation_in_string
#pragma warning(disable:4326)
#include"Header.h"


//-------------------------------------------------------------------------------------------------------//
 



//#define CONSTRUCTORS_CHECK
//#define OPERATOR_PLUS_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef CONSTRUCTORS_CHECK
	String str;		//Default constructor
	str.print();

	String str1 = "Hello";	//Single-argument constructor
	//str1.print();
	cout << str1 << endl;

	String str2 = str1;		//Copy constructor
	cout << str2 << endl;

	String str3;
	str3 = str2;	//Shallow copy - ������������� �����������
	cout << str3 << endl;
#endif // CONSTRUCTORS_CHECK

	/*String str1 = "Hello";
	str1 = str1;
	cout << str1 << endl;*/

#ifdef OPERATOR_PLUS_CHECK
	String str1 = "Hello";
	String str2 = "World";
	cout << delimiter << endl;
	String str3 = str1 + str2;
	cout << delimiter << endl;
	cout << str3 << endl;
	/*cout << delimiter << endl;
	str1 += str2;
	cout << delimiter << endl;
	cout << str1 << endl;*/

	//Move-������ (Move-semantic) �++ 11
	//Move-constructor (����������� ��������)
	//Move-assignment  (�������� ��������� ��������)
	//reference to r-value: Class&&  
#endif // OPERATOR_PLUS_CHECK

	String str1(25);		//Default constructor;
	str1.print();
	String str2 = "Hello";	//Single-argument constructor
	//cout << str2 << endl;
	str2.print();
	String str3("World");	//Single-argument constructor
	cout << str3 << endl;
	String str4();	//����� �� ��������� ������, ����������� ������� str4, 
					//������� ������ �� ��������� � ���������� ������ ������ String
	//cout << str4 << endl;
	String str5{};	//����� ����� ������������ �� ���������.
	cout << str5 << endl;
	String str6{ "��������� � ����������� ����� ���������� � �������� �������" };
	cout << str6 << endl;
	String str7 = str6;
	cout << str7 << endl;
	cout << str2 + " " + str3 << endl;
}