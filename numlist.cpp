//Tyler Perkins
//11-23-19
//
//given a list of numbers and a number k, return weather any two numbers
//from the list add up to k
//bonus: perform in one pass

#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char *argv[]){
   //check file usage
   std::cout << "Usage: "                             << std::endl;
   std::cout << argv[0] << " inputFile addedValue"    << std::endl;

   if(argc != 3){
      std::cerr << "invalid number of arguments! Quiting!\n";
      return 1;
   }

   std::ifstream inputfile;
   inputfile.open(argv[1]);
   if(!inputfile){
      std::cerr << "unable to open file! Quitting!\n";
      return 1;
   }

   std::vector<int> arry;
   int x;

   while(inputfile >> x){
      std::cout << x;
      arry.push_back(x);
   }
   //wrote file to the vector, continue
   //we can loop through the first half of the vector and try adding everything up to
   //our k, if nothing works then we quit
   int len = (arry.size())/(2) + (arry.size() % 2 != 0); //length of the vector, rounded up
   int k = int(argv[2]) - int('0');
   for(int i=0; i<=len; i++){
      for(int j=0; j<=arry.size(); j++){
         if((arry[i] + arry[j]) == k){
            std::cout << arry[i] << " + " << arry[j] << std::endl;
         }
      }
   }
   std::cout << "Done!" << std::endl;

   return 0;
}
