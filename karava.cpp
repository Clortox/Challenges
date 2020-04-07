//tyler Perkins
//11-24-17
//
//Karava's Encryption Algorithm
//take some input ie "apple"
//reverse the input "elppa"
//replace values such that:
//   a => 0
//   e => 1
//   o => 2
//   u => 3
//
//add "aca" to the end of the word
//
//Input are all strings; all input is lowercase; all output are strings

#include <iostream>
#include <string>

//arguments:
// ./a.out

int main(int argc, char *argv[]){
   std::cout << "ALL INPUT IS ASUMMED TO BE VALID" << std::endl;

   std::cout << "Input String: ";
   std::string inputString;
   std::cin >> inputString;
   //std::cerr << "I got: " << inputString << "\n";

   //reverse the string
   std::string revStr;
   for(int i=inputString.length()-1; i>=0; i--){
      //revStr += inputString[i];
      switch(inputString[i]){
         case 'a':
            revStr += '0';
            break;
         case 'e':
            revStr += '1';
            break;
         case 'o':
            revStr += '2';
            break;
         case 'u':
            revStr += '3';
            break;
         default:
            revStr += inputString[i];
      }
   }
   //std::cerr << "revStr is: " << revStr << "\n";

   revStr += "aca";
   std::cout << "Encrypted word is: " << revStr << std::endl;
   std::cout << "Done!" << std::endl;
   return 0;
}
