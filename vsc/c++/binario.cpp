#include <iostream>

using namespace std;

int binario(int num){
  if(num < 2)
  return num;
  else
  return num%2 + (10 * binario(num/2));
}

int main(){
  int num, bin;
  cin >> num;
  bin = binario(num);
  cout << bin;
  return 0;
}