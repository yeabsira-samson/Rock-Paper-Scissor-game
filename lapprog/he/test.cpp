#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 bool isPalindrome(string word){
  int start=0;
  int end=word.length()-1;
  while(start<end){
    if(word[start]!=word[end]){
    return false;
  }
  start++;
  end--;
  }
  return true;
 }
   int main(){
    string word;
    cout<<"Enter the word";
    cin>>word;
    if(isPalindrome(word)){
      cout<<"The word is a palindromr";
    }else{
      cout<<"The word is not palindrome";
    }
    return 0;

   }