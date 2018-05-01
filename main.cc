#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int countChar()
{
  string s = "Athens";
  const int size=s.length();
  cout << size << " Characters" << endl;
  return 0;
}

int countLine(){
   int lineCount = 0;
   string line;
   ifstream file("file.txt");

   while (getline(file, line)){
       lineCount++;
   }
   cout << lineCount << " Lines" << endl;
   return 0;
}

int main(){
   countLine();
   countChar();
   return EXIT_SUCCESS;
}




