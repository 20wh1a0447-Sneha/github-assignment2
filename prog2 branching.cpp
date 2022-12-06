#include <iostream>

using namespace std;

int main() {
    char ch;
    ch='a','e','i','o','u','y';
   cin>>ch;
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
       cout<<ch<<" " "Vowels";
   }
       else if(ch=='y'){
       cout<<ch<<" " "sometimes vowel and consonant";
          }
          else{
              cout<<ch<<" " "consonant";
          }
   return 0;
}
