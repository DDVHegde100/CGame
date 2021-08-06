#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
  srand(time(0));
  const int size=100;
  cout << "Enter a letter to begin \n ";
  char x; cin>> x;
  int position = size /2;
  while (true) {
    cout << "Start Line" ;
    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";}
    cout << "Finish Line" << endl;
    int move= rand()%3 - 1;
    position = position + move; 
    if (position <1) {cout << "You failed to reach the finish line. Try again!" <<endl; break;}
    if (position >size-1) {cout << "You're very lucky. You managed to finish!" << endl; break;}
    for(int sleep=0; sleep< 10000000 ; ++ sleep);
  }   
  return 0; 
}