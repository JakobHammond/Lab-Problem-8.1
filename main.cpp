//
//  main.cpp
//  p8-1
//
//  Created by Jakob Hammond on 10/19/23.
//

#include <iostream>
using namespace std;

int main(void){
    int countCharacter(string str);
    int countVowel(string str);
    
    
    
}

int countCharacter(string str){
    return str.length();
}

int countVowel(string str){
    int vowels = 0;
    for(int i = 1; i <= countCharacter(str); i++){
        string first;
        first = str.substr(countCharacter(str) - i);
        if(first.front() == 'a' || first.front() == 'A' || first.front() == 'e' || first.front() == 'E' || first.front() == 'i' || first.front() == 'I' || first.front() == 'o' || first.front() == 'O' || first.front() == 'u' || first.front() == 'U'){
            vowels++;
        }
    }
    return vowels;
}
