// Group-3 OOPL Project Code
#include <iostream>
#include <fstream>
using namespace std;

int Guess;
int Total;

class Question

{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, string, int, int);

    void askQuestion();
};

void setEncapsulationQuestions(Question q[])
{

    q[0].setValues("The keyword private restricts the access of class or struct members to:", "constant function", "static function", "member function", "clients", 3, 10);
    q[1].setValues("What is the difference between an object and a class? ", "An object is an extension of the class construct whose default access privilege is public.", "The term object is just another way of referring to the public data members of a class.", "An object is an initialized class variable.", "A class is an initialized object variable.", 3, 10);
    q[2].setValues("An object is _____________ of a class.", "an instance", "an interface", "an encapsulation", "a member funciton", 1, 10);
    q[3].setValues(" Which feature can be implemented using encapsulation?", "Inheritence", "Abstraction", "Polymorphism", "Overloading", 2, 10);
    q[4].setValues("How can Encapsulation be achieved?", "Using Access Specifiers", "Using only private members", "Using inheritance", "Using Abstraction", 1, 10);
}

void setInheritenceQuestions(Question q[])
{

    q[0].setValues("How many basic types of inheritance are provided as OOP feature?", "1", "2", "3", "4", 4, 10);
    q[1].setValues(" Which among the following best describes the Inheritance?", "Copying the code already written", "Using the code already written once", "Using already defined functions in programming language", "Using the data and functions into derived segment", 4, 10);
    q[2].setValues(" Which among the following is correct for multiple inheritance?", "class student{public: int marks;}s; class stream{int total;}; class topper:public student, public stream{ };", "class student{int marks;}; class stream{ }; class topper: public student{ };", "class student{int marks;}; class stream:public student{ };", "class student{ }; class stream{ }; class topper{ };", 1, 10);
    q[3].setValues(" What are the things are inherited from the base class?", " Constructor and its destructor", " Operator=() members", " Friends", " All of the above", 4, 10);
    q[4].setValues(" Members which are not intended to be inherited are declared as ________________", " Public members", "  Protected members", " Private members", " Private or Protected members", 3, 10);
}

void setPolymorphismQuestions(Question q[])
{

    q[0].setValues(" Which among the following best describes polymorphism?", "  It is the ability for a message/data to be processed in more than one form", " It is the ability for a message/data to be processed in only 1 form", " It is the ability for many messages/data to be processed in one way", "  It is the ability for undefined message/data to be processed in at least one way", 1, 10);
    q[1].setValues(" Which type of function among the following shows polymorphism?", "Inline function ", " Virtual function", " Undefined functions", "  Class member functions", 2, 10);
    q[2].setValues(" Which among the following can’t be used for polymorphism?", " Static member functions", "  Member functions overloading", " Predefined operator overloading", " Constructor overloading", 1, 10);
    q[3].setValues(" Which among the following can show polymorphism?", " Overloading ||", " Overloading +=", " Overloading <<", " Overloading &&", 3, 10);
    q[4].setValues(" Which of the following explains Polymorphism?", " int func(int, int); float func1(float, float); ", " int func(int); int func(int);", " int func(float); float func(int, int, char);", " int func(); int new_func();", 3, 10);
}

void setAbstractionQuestions(Question q[])
{

    q[0].setValues(" Which among the following best defines abstraction?", " Hiding the implementation", " Showing the important data", " Hiding the important data", " Hiding the implementation and showing only the features", 4, 10);
    q[1].setValues(" Class is _________ abstraction.", " Object", " Logical", " Real", " Hypothetical", 2, 10);
    q[2].setValues(" Abstraction can apply to ____________", " Control and data", "Only data", " Only Control", " Classes", 1, 10);
    q[3].setValues(" Which among the following is not a level of abstraction?", " Logical level", " Physical level", " View level", " External level", 4, 10);
    q[4].setValues(" We ___________________ to an abstract class.", " Can create pointers", " Can create references", " Can create pointers or references", " Can’t create any reference, pointer or instance", 3, 10);
}

void setOPoverloadingQuestions(Question q[])
{

    q[0].setValues(" What is a binary operator?", " Operator that performs its action on a single operand", " Operator that performs its action on two operand", " Operator that performs its action on three operand ", " Operator that performs its action on any number of operands", 2, 10);
    q[1].setValues(" Which is the correct example of a unary operator?", " &", " ==", " --", " /", 3, 10);
    q[2].setValues(" Which is the correct statement about operator overloading?", " Only arithmetic operators can be overloaded", " Only non-arithmetic operators can be overloaded", " Precedence of operators are changed after overlaoding", " Associativity and precedence of operators does not change", 4, 10);
    q[3].setValues(" Which of the following operators can’t be overloaded?", " ::", " +", " -", " []", 1, 10);
    q[4].setValues(" How does C++ compiler differs between overloaded postfix and prefix operators?", "C++ doesn't allow both operators to be overloaded in a class", "A postfix ++ has a dummy parameter", "A prefix ++ has a dummy parameter", "By making prefix ++ as a global function and postfix as a member function", 2, 10);
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()

{
    cout << endl;

    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    cout << "What is your answer?(in number)" << endl;
    cin >> Guess;

    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Correct !" << endl;

        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << endl;
    }

    else
    {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }
}

int repeatQuiz(Question q[], int choice)
{

    int count = 0;

    switch (choice)
    {
    case 1:
        setEncapsulationQuestions(q);
        break;
    case 2:
        setInheritenceQuestions(q);
        break;
    case 3:
        setPolymorphismQuestions(q);
        break;
    case 4:
        setAbstractionQuestions(q);
        break;
    case 5:
        setOPoverloadingQuestions(q);
        break;

    default:
        break;
    }

    for (int i = 0; i < 5; i++)
    {
        q[i].askQuestion();
        count++;
    }
    return count;
}

void working7()
{
    cout << "\n\n\tNOW THAT YOU HAVE READ FEW THINGS , WOULD LIKE TO PLAY SOME QUIZ (Y/N) \n";
    char resp1;
    int resp2;
    // int count=0;
    cin >> resp1;

    if (resp1 == 'y')
    {
        cout << endl;
        cout << "\tCHOOSE TOPIC" << endl;
        cout << "\t1.Encapsulataion\n\t2.Inheritence\n\t3.Polymorphism\n\t4.Abstraction\n\t5.Operator Overloading" << endl;
        cin >> resp2;
    }

    else
    {
        cout << "\n\tPROGRAM ENDED" << endl;
        return;
    }

    switch (resp2)
    {
    case 1:
        cout << " \tYOU HAVE ENTERED ENCAPSULATION QUIZ " << endl;
        break;
    case 2:
        cout << " \tYOU HAVE ENTERED INHERITENCE QUIZ " << endl;
        break;
    case 3:
        cout << " \tYOU HAVE ENTERED POLYMORPHISM QUIZ " << endl;
        break;
    case 4:
        cout << " \tYOU HAVE ENTERED ABSTRACTION QUIZ " << endl;
        break;
    case 5:
        cout << " \tYOU HAVE ENTERED OPERATOR OVERLOADING QUIZ " << endl;
        break;

    default:
        break;
    }

    Question q[10];

    //  int ques_arr[10];

    // int ans_arr[] = {1, 3, 3, 2, 4};

    int count;          // will count the number of questions in one section
    int finalcount = 0; // will count final no. of ques for score

    while (resp1 != 'n') // recursive loop for quiz.
    {

        finalcount += repeatQuiz(q, resp2);
        cout << "\tWOULD YOU LIKE TO PLAY MORE (y/n)" << endl;
        cin >> resp1;
        if (resp1 == 'y') // repeating quiz so differnt topics can be played. just more intetactive
        {

            cout << endl;
            cout << "\tCHOOSE TOPIC" << endl;
            cout << "\t1.Encapsulataion\n\t2.Inheritence\n\t3.Polymorphism\n\t4.Abstraction\n\t5.Operator Overloading" << endl;
            cin >> resp2;
        }

        else
        {
            //  cout << "\n\tPROGRAM ENDED" << endl;
            break;
        }

        switch (resp2)
        {
        case 1:
            cout << " \tYOU HAVE ENTERED ENCAPSULATION QUIZ " << endl;
            break;
        case 2:
            cout << " \tYOU HAVE ENTERED INHERITENCE QUIZ " << endl;
            break;
        case 3:
            cout << " \tYOU HAVE ENTERED POLYMORPHISM QUIZ " << endl;
            break;
        case 4:
            cout << " \tYOU HAVE ENTERED ABSTRACTION QUIZ " << endl;
            break;
        case 5:
            cout << " \tYOU HAVE ENTERED OPERATOR OVERLOADING QUIZ " << endl;
            break;

        default:
            break;
        }
    }

    cout << "\n\n\tTOTAL SCORE ---- " << Total << " --- OUT OF --- " << finalcount * 10 << endl;

    int passingmark = finalcount * 5;
    if (Total >= passingmark)
    {
        cout << "\t<--- QUIZ PASSED --->" << endl;
    }

    else
    {
        cout << "\t<--- QUIZ FAILED --->" << endl;
    }
}

void setFile(string *whereToSave, string fileAddress)
{
    *whereToSave = "";

    string textLine;

    ifstream file(fileAddress);

    while (getline(file, textLine))
    {
        *whereToSave += textLine;
        *whereToSave += "\n";
    }

    file.close();
}

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
        varB = "sample_string";
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

        cout << "Values of the variables now: " << endl;
        cout << "Var A = " << getVarA() << endl;
        cout << "Var B = " << getVarB() << endl;

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
        string s = "./TextFiles/encapsulationDefination.txt";
        setFile(&encDef, s);
        setDefinition(encDef);

        s = "./TextFiles/encapsulationCode.txt";
        setFile(&encCode, s);
        setCode(encCode);
    }
};

class AbstractionHelper
{
public:
    
    class circle
    {
    public:
        virtual void getarea()
        {
            int r;
            cout << "enter the radius of circle" << endl;
            cin >> r;
            cout << "area of circle is " << (3.14) * (r * r) << endl;
        }
    };
    class rectangle : public circle
    {
    public:
        void getarea()
        {
            int l, b;
            cout << "enter the length and breadth of rectangle" << endl;
            cin >> l >> b;
            cout << "area of rectangle is " << l * b << endl;
        }
    };

    void testing()
    {
        cout << "Enter 1 for calculating Area of Circle" << endl;
        cout << "Enter 2 for calculating Area of Rectangle" << endl;
        int ch1;
        cout << "Enter Your Choice: ";
        cin >> ch1;
        switch (ch1)
        {
        case 1:
        {
            circle obj;
            obj.getarea();
            break;
        }
        case 2:
        {
            circle *ptr;
            rectangle r1;
            ptr = &r1;
            ptr->getarea();
            break;
        }
        default:
            cout << "Invalid Choice" << endl;
        }

        cout << " Here we got the area using getarea() function using virtual function concept" << endl;
    }
};

class Abstraction : public AbstractionHelper, public Code, public Definition

{
    string absDef;
    string absCode;

public:
    Abstraction()
    {
        absDef = "";
        absCode = "";

        string absDefFileAdd = "./TextFiles/abstractionDefinition.txt";

        setFile(&absDef, absDefFileAdd);

        setDefinition(absDef);

        string absCodeFileAdd = "./TextFiles/abstractionCode.txt";

        setFile(&absCode, absCodeFileAdd);

        setCode(absCode);
    }
};

class Length
{
    int kilometer;
    int meter;

public:
    Length()
    {
        kilometer = 0;
        meter = 0;
    }

    Length(int km, int m)
    {
        kilometer = km;
        meter = m;
    }

    void setKilometers(int km)
    {
        kilometer = km;
    }

    void setMeters(int m)
    {
        meter = m;
    }

    int getKilometers()
    {
        return kilometer;
    }

    int getMeters()
    {
        return meter;
    }

    virtual void printLength()
    {
        cout << "From class Length: " << endl;
        cout << "Length = " << kilometer << "km , " << meter << "m." << endl;
    }

    Length operator+(Length object)
    {
        int obj1InMeter = kilometer * 1000 + meter;
        int obj2InMeter = object.kilometer * 1000 + object.meter;

        int totalMeters = obj1InMeter + obj2InMeter;

        Length answer;
        answer.meter = totalMeters % 1000;
        answer.kilometer = totalMeters / 1000;
        return answer;
    }

    void set()
    {
        cout << "Enter km for object: ";
        cin >> kilometer;

        cout << "Enter m for object: ";
        cin >> meter;
    }
};

class PolymorphismHelper : public Length
{
    int var1;
    float var2;

public:
    PolymorphismHelper()
    {
        var1 = 1;
        var2 = 1.1;
    }

    void setPolyVariables(int i)
    {
        var1 = i;
    }

    void setPolyVariables(float f)
    {
        var2 = f;
    }

    void setPolyVariables(int i, float f)
    {
        var1 = i;
        var2 = f;
    }

    void testingOfFunctionOverloading()
    {
        cout << "Let's test the functional overloading: " << endl;

        cout << "Select what you want to set.(only int:1, only float:2, both int and float:else): ";

        int whatUserWantToSet;
        cin >> whatUserWantToSet;

        if (whatUserWantToSet == 1)
        {
            cout << "Enter the int that you want to set: ";
            int integerThatUserWantToSet;
            cin >> integerThatUserWantToSet;
            var1 = integerThatUserWantToSet;
        }
        else if (whatUserWantToSet == 2)
        {
            cout << "Enter the float value that you want to set: ";
            float floatThatUserWantToSet;
            cin >> floatThatUserWantToSet;
            var2 = floatThatUserWantToSet;
        }
        else
        {
            cout << "Enter the int that you want to set: ";
            int integerThatUserWantToSet;
            cin >> integerThatUserWantToSet;
            var1 = integerThatUserWantToSet;
            cout << "Enter the float value that you want to set: ";
            float floatThatUserWantToSet;
            cin >> floatThatUserWantToSet;
            var2 = floatThatUserWantToSet;
        }

        cout << "Final value of integer = " << var1 << endl;
        cout << "Final value of float = " << var2 << endl;
    }

    void testingOfOperatorOverloading()
    {
        cout << "We have made a Length class for you to demostrate OPERATOR-OVERLOADING." << endl;
        cout << "We have a overloaded + operator that will add two Length type objects." << endl;

        Length obj1;
        obj1.set();

        Length obj2;
        obj2.set();

        Length obj3 = obj1 + obj2;

        cout << "By using operator overloading we got: " << endl;
        cout << "Kilometers of object3(object1 + object2) = " << obj3.getKilometers() << endl;
        cout << "Meters of object3(object1 + object2) = " << obj3.getMeters() << endl;
    }

    void printLength()
    {
        cout << "From class PolymorphismHelper: " << endl;
        cout << "obj.getKilometers() = " << getKilometers() << endl;
        cout << "obj.getMeters() = " << getMeters() << endl;
    }

    void testingOfFunctionOverriding()
    {
        cout << "We have defined a print function in Length class and another one in this helper class." << endl;

        PolymorphismHelper polyObj;
        polyObj.setKilometers(5);
        polyObj.setMeters(300);

        cout << endl
             << "polyObj.printLength(): " << endl;
        polyObj.printLength();

        cout << endl
             << "Length::polyObj.printLenth(): " << endl;
        polyObj.Length::printLength();
    }
    void working()
    {
        int ch;
        cout << "Enter 1 for Function Overloading" << endl;
        cout << "Enter 2 for Operator Overloading" << endl;
        cout << "Enter 3 for Function Overriding" << endl;
        cout << "Enter Your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            testingOfFunctionOverloading();
            break;
        case 2:
            testingOfOperatorOverloading();
            break;
        case 3:
            testingOfFunctionOverriding();
            break;
        }
    }
};

class PolymorphismTypes
{
public:
    void compileTimePolymorphism()
    {
        string def;
        string CTPfileAddress = "./TextFiles/compileTimePolymorphism.txt";
        setFile(&def, CTPfileAddress);
        cout << def;
    }

    void runTimePolymorphism()
    {
        string def;
        string RTPfileAddress = "./TextFiles/runTimePolymorphism.txt";
        setFile(&def, RTPfileAddress);
        cout << def;
    }

    void polTypesWorking()
    {
        cout << endl
             << "Enter 1 for CompileTime-Polymorphism." << endl;
        cout << "Enter ANY OTHER NUMBER for RunTime-Polymorphism." << endl;

        int usersTypeChoise;
        cin >> usersTypeChoise;

        switch (usersTypeChoise)
        {
        case 1:
            compileTimePolymorphism();
            break;

        default:
            runTimePolymorphism();
            break;
        }
    }
    void working2()
    {
        int ch;
        cout << "Enter 1 for Compile Time Polymorphism" << endl;
        cout << "Enter 2 for Run Time Polymorphism" << endl;
        cout << "Enter 3 for Working of both the above types" << endl;
        cout << "Enter Your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            compileTimePolymorphism();
            break;
        case 2:
            runTimePolymorphism();
            break;
        case 3:
            polTypesWorking();
            break;
        }
    }
};

class Polymorphism : public PolymorphismHelper, public PolymorphismTypes, public Definition, public Code
{
    string polDef;
    string polCode;

public:
    Polymorphism()
    {

        string polDefFileAdd = "./TextFiles/polymorphismDefination.txt";
        setFile(&polDef, polDefFileAdd);
        setDefinition(polDef);

        string polCodeFileAdd = "./TextFiles/polymorphismCode.txt";
        setFile(&polCode, polCodeFileAdd);
        setCode(polCode);
    }
};

class InheritanceHelper
{
public:
    void function()
    {
        class A
        {
            int a1, a2;

        public:
            int add(int x, int y)
            {
                return x + y;
            }
        };
        class B
        {
            int b1, b2;

        public:
            int subtract(int x, int y)
            {
                return x - y;
            }
        };
        class C : public A, public B
        {
            int c1, c2;

        public:
            void work()
            {
                cout << "Enter two Numbers: ";
                cin >> c1 >> c2;
                int ch;
                cout << "Enter 1 for Addition: " << endl;
                cout << "Enter 2 for Subtration: " << endl;
                cout << "Enter your choice: ";
                cin >> ch;
                if (ch == 1)
                {
                    cout << "Addition is: " << add(c1, c2) << endl;
                }
                else if (ch == 2)
                {
                    cout << "Subtraction is: " << subtract(c1, c2) << endl;
                }
            }
        };
        C obj;
        obj.work();
    }
    void explain()
    {
        function();
        cout << "Here We Have Used Inheritance for addition and subtraction " << endl;
        cout << "Class A and B are inherited Publically by Class C and their function add() and subtract() respectively are accessed by the object of Class C";
        cout << endl
             << "This is called as INHERITANCE";
    }
};

class InheritanceTypes : public Definition, public Code
{
    int choice;
    string inhDef;

public:
    void singleInheritance()
    {
        string s = "./TextFiles/singleInheritance.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);
    }
    void multipleInheritance()
    {
        string s = "./TextFiles/multipleInheritance.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);
    }
    void multilevelInheritance()
    {
        string s = "./TextFiles/multilevelInheritance.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);
    }
    void hierarchicalInheritance()
    {
        string s = "./TextFiles/hierarchicalInheritance.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);
    }
    void hybridInheritance()
    {
        string s = "./TextFiles/hybridInheritance.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);
    }

    InheritanceTypes()
    {
        cout << "Enter 1 for Single Inheritance" << endl;
        cout << "Enter 2 for Multiple Inheritance" << endl;
        cout << "Enter 3 for Multi Level Inheritance" << endl;
        cout << "Enter 4 for Hierarchical Inheritance" << endl;
        cout << "Enter 5 for Hybrid Inheritance" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            singleInheritance();
            break;
        case 2:
            multipleInheritance();
            break;
        case 3:
            multilevelInheritance();
            break;
        case 4:
            hierarchicalInheritance();
            break;
        case 5:
            hybridInheritance();
            break;
        default:
            cout << "Invalid Choice\n";
        }

        cout << getDefinition();
    }
};

class Inheritance : public Definition, public Code, public InheritanceHelper
{
    int inh;
    string inhDef;
    string inhCode;

public:
    Inheritance()
    {
        string s = "./TextFiles/inheritanceDefination.txt";
        setFile(&inhDef, s);
        setDefinition(inhDef);

        s = "./TextFiles/inheritanceCode.txt";
        setFile(&inhCode, s);
        setCode(inhCode);
    }
};

class ooOverloadingHelper
{
public:
    class Complex
    {
        int a;
        int b;

    public:
        void setData()
        {
            cout << "Enter Complex Number: ";
            cin >> a >> b;
        }
        Complex operator+(Complex &c)
        {
            Complex ans;
            ans.a = a + c.a;
            ans.b = b + c.b;
            return ans;
        }
        void getData()
        {
            cout << "We have added two Complex Numbers Using Operator Overloading: " << endl;
            cout << "Complex Number is " << a << " + " << b << "i" << endl
                 << endl;
            cout << "Here we are Added two Complex Numbers using just + sign. This is possible due to Operator Overloading. In this many operators  can be overloaded for the ease of Programming" << endl;
        }
    };
    void work()
    {
        Complex obj1, obj2, obj3;
        obj1.setData();
        obj2.setData();
        obj3 = obj1 + obj2;
        cout << "Adding two Complex Numbers: " << endl;
        obj3.getData();
    }
};

class opOverloading : public Definition, public Code, public ooOverloadingHelper
{

    string ooDef;
    string ooCode;

public:
    opOverloading()
    {
        string s = "./TextFiles/ooDefination.txt";
        setFile(&ooDef, s);
        setDefinition(ooDef);

        s = "./TextFiles/ooCode.txt";
        setFile(&ooCode, s);
        setCode(ooCode);
    }
};

// main function

int main()
{
    char c;
   // first choices for the user
    do
    {

        cout << "\n\n\t###  WELCOME TO OUR PROJECT - LEARNING OOPL WITH OOP ###\n"
             << endl;
        cout << "\tEnter 1 for Encapsulation: " << endl;
        cout << "\tEnter 2 for Abstraction: " << endl;
        cout << "\tEnter 3 for Polymorphism: " << endl;
        cout << "\tEnter 4 for Inheritance: " << endl;
        cout << "\tEnter 5 for Operator Overloading: " << endl;
        cout << "\tEnter 6 for Quiz " << endl;
        int choice;
        cout << "\t---- Now, Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Encapsulation obj;
            int ch;
            cout << "#\tEnter 1 for defination of Encapsulation: " << endl;
            cout << "#\tEnter 2 for code of Encapsulation: " << endl;
            cout << "#\tEnter 3 for working of Encapsulation: " << endl;
            cout << "\n#\tEnter your choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << obj.getDefinition();
                break;
            case 2:
                cout << obj.getCode();
                break;
            case 3:
                obj.testing();
                break;
            default:
                cout << "Invalid Choice" << endl;
            }
            break;
        }

        case 2:
        {
            Abstraction obj;
            int ch;
            cout << "#\tEnter 1 for Defination of Abstraction" << endl;
            cout << "#\tEnter 2 for Code of Abstraction" << endl;
            cout << "#\tEnter 3 for Working of Abstraction" << endl;
            cout << "\n\t----  Enter Your Choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << obj.getDefinition();
                break;
            case 2:
                cout << obj.getCode();
                break;
            case 3:
                obj.testing();
                break;
            default:
                cout << "Invalid Choice" << endl;
            }
            break;
        }
        case 3:
        {
            Polymorphism obj;
            int ch;
            cout << "#\tEnter 1 for Defination of Polymorphism" << endl;
            cout << "#\tEnter 2 for Code of Polymorphism" << endl;
            cout << "#\tEnter 3 for Working of Polymorphism" << endl;
            cout << "#\tEnter 4 for Types of Polymorphism" << endl;
            cout << "\n\t----  Enter Your Choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << endl;
                cout << obj.getDefinition();
                break;
            case 2:
                cout << endl;
                cout << obj.getCode();
                break;
            case 3:
                cout << endl;
                obj.working();
                break;
            case 4:
                cout << endl;
                obj.working2();
                break;

            default:
                cout << "Invalid Choice" << endl;
            }
            break;
        }

        case 4:
        {
            Inheritance obj1;
            int ch;
            cout << "#\tEnter 1 for defination of Inheritance: " << endl;
            cout << "#\tEnter 2 for code of Inheritance: " << endl;
            cout << "#\tEnter 3 for working of Inheritance: " << endl;
            cout << "#\tEnter 4 for Types of Inheritance: " << endl;
            //  cout<<"Enter 3 for working of Inheritance: ";
            cout << "\n\t----  Enter Your Choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << endl;
                cout << obj1.getDefinition();
                break;
            case 2:
                cout << endl;
                cout << obj1.getCode();
                break;
            case 3:
                cout << endl;
                obj1.explain();
                break;
            case 4:
            {
                cout << endl;
                InheritanceTypes obj;
                cout << obj.getDefinition();
                break;
            }
            default:
                cout << "Invalid Choice" << endl;
            }
            break;
        }

        case 5:
        {
            opOverloading obj2;
            int ch;
            cout << "#\tEnter 1 for Operator Overloading Definition" << endl;
            cout << "#\tEnter 2 for Operator Overloading Code" << endl;
            cout << "#\tEnter 3 for Operator Overloading Working" << endl;
            cout << "\n\t----  Enter Your Choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << endl;
                cout << obj2.getDefinition();
                break;
            case 2:
                cout << endl;
                cout << obj2.getCode();
                break;
            case 3:
            {
                obj2.work();
                break;
            }

            default:
                cout << "Invalid Choice" << endl;
            }

            break;
        }
        case 6:
        {
            cout << endl;
            working7();
            break;
        }

        default:
            cout << "Invalid Choice" << endl;
        }

        cout << "#####---\tDO YOU WANT TO CONTINUE ....(y/n) : ";
        cin >> c;

    } while (c == 'y');

    return 0;
}
