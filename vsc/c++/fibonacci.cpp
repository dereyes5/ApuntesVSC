#include <iostream>
using namespace std;
int fibonacci (int n){
    if (n==0||n==1){
        cout<<n<<endl;
        return n;
    } else{
        cout<<(n-1)<<","<<(n-2)<<endl;
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(int argc, char const *argv[])
{
    int n;
  cin >> n;


  fibonacci(n);
  for(int i =0; i <= n; i++)
    cout << fibonacci(i) << " ";


  return 0;
}