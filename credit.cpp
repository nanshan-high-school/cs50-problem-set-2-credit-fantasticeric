#include <iostream>
using namespace std;
int main() {
  long int number_1, number_0;
  int a=0, b=0, c=0, i=0, j, check_number=0, sum_0 = 0, master_2, master_5, visa_4;
  cout << "請輸入您的信用卡卡號:";
  cin >> number_0;
  check_number = number_0 % 10;
  number_1 = number_0; 
  while(number_0 != 0)
  {
  number_0 /= 10;
  a = number_0 % 10;
  b = (i + 1) % 2 + 1;
  c = a * b / 10 + a * b % 10;
  sum_0 += c;
  i++;
  }
  for(j = 0 ; j < i - 1 ; j++)
  {
    number_1 /= 10;
    if(j == i - 7)
    {
    master_2 = number_1;
    }
    if(j == i - 3)
    {
     master_5 = number_1;
    }
    if(j == i - 2)
    {
    visa_4 = number_1;
    }
  }
  if(10 - sum_0 % 10 != check_number && 10 - sum_0 % 10 != 10)
  cout <<"假卡";
  else if(visa_4 == 4)
  cout << "Visa Card";
  else if(master_2 >= 222100 && master_2 <= 272099)
  cout << "MasterCard";
  else if(master_5 >= 51 && master_5 <= 55)
  cout << "MasterCard";
  else
  cout << "其他卡";
  }
