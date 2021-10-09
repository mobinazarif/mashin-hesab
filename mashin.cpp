#include<iostream>
#include<math.h>

using namespace std;

int main(){
  float a,b;
  string menu ;
  const float PI = 3.1415;
  cout << "Enter 2 Numbers: "<<"\n";
  cin >> a >> b;
  cout << "Enter Your choice please between(-+/Rad Cos Cot Tan Sin Fact)"<<"\n";
  cin >> menu;
  if (menu == "+")
    cout << "Result: " << a + b<<"\n";
  if (menu == "-")
    cout << "Result: " << a - b<<"\n";
  if (menu == "*")
    cout << "Result: " << a * b<<"\n";
  if (menu == "/")
  {
    if (b != 0)
      cout << "Result: " << a / b<<"\n";
    else
      cout << "ERROR!!"<<"\n";
  }
  if (menu == "Rad")
    cout << "Result: " << sqrt(a)<<"\n";
  if (menu == "Cos")
  {
    a = a * PI / 180;
    cout << "Result: " << cos(a)<<"\n";
  }
  if (menu == "Sin")
  {
    a = a * PI / 180;
    cout << "Result: " << sin(a)<<"\n";
  }
  if (menu == "Tan")
  {
    a = a * PI / 180;
    cout << "Result: " << tan(a)<<"\n";
  }
  if (menu == "Cot") {
    a = a * PI / 180;
    float x = tan(a);
    cout << "Result: " << 1 / x<<"\n";
  }
  if (menu == "Fact") {
    float fact = 1;
    int i = 1;
    while (i <= a) {
      fact *= i;
      i++;
    } 
    cout << "Result: " << fact<<"\n";
  }
  return 0;
}
