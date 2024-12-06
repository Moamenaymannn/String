#include <iostream>
    #include <cstring>
    #include "string.h"
    using namespace std;

    class newString {
    private:
    int size;
    char * ptr;
//===========================================================================// Resived string
    public:
    newString(char*s){
    size = strlen(s);
    ptr = new char [size +1];
     for(int i=0; i<=size;i++){
     this->ptr[i]=s[i];
     };
    }
//==========================================================================// CopyString
    void copyString(char* s){
     this -> size = strlen(s);
     delete[]ptr;
     this -> ptr = new char [size +1];
     for(int i=0; i<=size;i++){
     this->ptr[i]=s[i];
     };
    }
    //==========================================================================// Upper Case
    void stringUpperCase (){
     newUpperCase(this->ptr);
     cout<<"\n";
    }
    //==============================================================================// Lower Case
  void stringLowerCase (){
     newLowerCase(this->ptr);
     cout<<"\n";
    }
//====================================================================================//Concate string
    void String_concate(char *s){
    char *temp;
    int i=0;
    int j=0;
    int tempSize = this->size;
        temp = new char[tempSize+1];
        for (int i = 0; i <= tempSize; i++) {
        temp[i] = this->ptr[i];
    };
    delete []ptr;
    this -> size += newStrlen(s);
    this -> ptr = new char [size+1];
    while( temp[i]!='\0'){
      this->ptr[i]=temp[i];
      i++;};

    while( s[j]!='\0'){
      this->ptr[i]=s[j];
      j++;
      i++;};
    ptr[i]='\0';
    delete []temp;
    }

//============================================================================//Display String
    void display(){
    for(int i=0; i<size;i++){
     cout<<ptr[i];}
     cout<<"\n";
    };
    ~newString(){
    delete []ptr;
};
};
    int main()
{

     char *test = "Hello World";
     char *test2=" Welcome LInux";

    newString stringTest(test);
    stringTest.display();
    stringTest.stringUpperCase();
    stringTest.display();

    stringTest.String_concate(test2);
    stringTest.display();
    stringTest.copyString(test2);
    stringTest.display();

    stringTest.stringUpperCase();
    stringTest.stringLowerCase();
    stringTest.display();
        return 0;
    }
