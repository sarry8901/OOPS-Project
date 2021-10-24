#include <iostream>
#include <fstream>
using namespace std;

class Definition
{
	string def;

public:
	void setDefinition(string s)
	{
		def = s;
	}
	string getDefinition()
	{
		return def;
	}
};

class Code
{
	string code;

public:
	void setCode(string s)
	{
		code = s;
	}

	string getCode()
	{
		return code;
	}
};

class EncapsulationHelper
{
	int varA;
	string varB;

public:
	EncapsulationHelper()
	{
		varA = 0;
		varB = "string";
	}
	EncapsulationHelper(int a, string b)
	{
		varA = a;
		varB = b;
	}

	void setVarA(int a)
	{
		varA = a;
	}
	void setVarB(string b)
	{
		varB = b;
	}

	int getVarA()
	{
		return varA;
	}
	string getVarB()
	{
		return varB;
	}

	void testing()
	{
		cout << "Encapsulation Example:" << endl;

		cout << "Enter which variable you want to set(VarA:1, VarB:2): ";
		int numberEnteredByUser;
		cin >> numberEnteredByUser;

		if (numberEnteredByUser == 1)
		{
			cout << "Enter the integer value that you want to set: ";
			int numberToBeSet;
			cin >> numberToBeSet;

			setVarA(numberToBeSet);
		}
		else
		{
			cout << "Enter the string that you want to set: ";
			string stringToBeSet;
			cin >> stringToBeSet;

			setVarB(stringToBeSet);
		}

		cout << "value of VarA now = " << getVarA() << endl;
		cout << "value of VarB now = " << getVarB() << endl;
	}
};

class Encapsulation : public Definition, public Code, public EncapsulationHelper
{
	int enc;
	string encDef;
	string encCode;

public:
	Encapsulation()
	{
		// variable to store the defination of encapsulation
		encDef = "";
		// variable to store the code of encapsulation
		encCode = "";

		// string to get the line from the text file
		string textLine;

		// opening a file
		ifstream encDefFile("./TextFiles/encapsulationDefination.txt");

		// getting the content of the file
		while (getline(encDefFile, textLine))
		{
			encDef += textLine;
			encDef += "\n";
		}
		// setting the defination of the object
		setDefinition(encDef);
		// closing the file
		encDefFile.close();

		// opening a new file
		ifstream encCodeFile("./TextFiles/encapsulationCode.txt");

		// getting the content of the file
		while (getline(encCodeFile, textLine))
		{
			encCode += textLine;
			encCode += "\n";
		}

		// setting the code of the encapsulation
		setCode(encCode);

		// closing the file
		encCodeFile.close();
	}
};

int main()
{
	Encapsulation obj;
	// cout << obj.getDefinition() << endl
	// 	 << endl
	// 	 << obj.getCode();

		 obj.testing();

	return 0;
}
