#include <iostream>
using namespace std;
const int COUNT = 16;
int count(long int number);
int total(int card[COUNT], int i);
int top_number(int card[COUNT], int k, int times);
int main() {
  long int number_0, number_1;
  int i, sum_0 = 0, master_2, master_5, visa_4;
  int card[COUNT];
  cout << "請輸入您的信用卡卡號:";
  cin >> number_0;
  number_1 = number_0;
  i = count(number_0);
  for(int j = 0 ; j < i ; j++)
    {
      card[j] = number_1 % 10;
      number_1 /= 10;
    }
  sum_0 = total(card, i);
  master_2 = top_number(card, i, 6);
  master_5 = top_number(card, i, 2);
  visa_4 = top_number(card, i, 1);
  if(10 - sum_0 % 10 != card[0] && 10 - sum_0 % 10 != 10)
   cout << "假卡";
  else if(visa_4 == 4)
    cout << "Visa Card";
  else if(master_2 >= 222100 && master_2 <= 272099)
    cout << "MasterCard";
  else if(master_5 >= 51 && master_5 <= 55)
   cout << "MasterCard";
  else
    cout << "其他卡";
  }

//計算卡號加權總合  
int total(int card[COUNT], int i)
  {
    
    int a=0, b=0, sum_0=0;
     for(int j = 1 ; j < i ; j++)
     {
      a = j % 2 + 1;
      b = card[j] * a / 10 + card[j] * a % 10;
      sum_0 += b;
     }
    return sum_0;
  }

//計算卡號位數
int count(long int number)
  {
   int i=0;
  while (number != 0)
   {
    number /= 10;
    i++;
   }
   return i;
  }

//取卡號前幾位數
int top_number(int card[COUNT], int k, int times)
  {
    int top_number_1 = 0;
    for(int i = 0 ; i < times ; i++)
    { 
      int power = 1;
      for(int  j = 1 ; j < times - i  ; j++)
      {
        power *= 10;
      }
      top_number_1 += card[k-1-i] * power;
    }
    return top_number_1; 
  }
