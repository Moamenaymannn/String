#include <iostream>





 //lowerCase

  void newLowerCase (char arr1[]){
 int j=0;

     while(arr1[j]!= '\0'){

    if (arr1[j] >= 'A' && arr1[j] <= 'Z')

    printf("%c",arr1[j]+32) ;

   else  printf("%c",arr1[j]) ;
  j++;
  };

};
//uppercase

  void newUpperCase (char arr1[]){
 int j=0;

     while(arr1[j]!= '\0'){

 if (arr1[j] >= 'a' && arr1[j] <= 'z')
    printf("%c",arr1[j]-32) ;

   else  printf("%c",arr1[j]) ;
  j++;
  };

};
 


//strlen

  int newStrlen(char array[]){
  int i =0;
  while(array[i]!= '\0'){

  i++;
  }
  return i;
  }
