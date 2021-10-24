#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class Definition{
 string def;
 public:
 void setDefinition(string s){
   def=s;
 }
string getDefinition(){
 return def;
}
};
class Encapsulation:public Definition{
 int enc;
  string encDef;
 public:
 Encapsulation(){
   encDef="";
   string textLine;
   ifstream encFile("./fileIOTesting/encapsulation.txt");

   while(getline(encFile, textLine))
   {
     encDef += textLine;
     encDef += "\n";
   }
  setDefinition(encDef);
 }

 

};

int main(){
  Encapsulation obj;
 cout<< obj.getDefinition();

  return 0;
}
