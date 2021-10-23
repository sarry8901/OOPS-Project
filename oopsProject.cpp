#include<bits/stdc++.h>
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
   encDef="def_of_enc";
  setDefinition(encDef);
 }

 

};

int main(){
  Encapsulation obj;
 cout<< obj.getDefinition();

  return 0;
}
