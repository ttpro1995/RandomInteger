//Haha TTpro

#include <iostream>
#include"classRandom.h"
#include<fstream>
#include <stdlib.h>
bool CheckDub(int out, int*Array,int n);
int main()
{
    std::ofstream fout;
    fout.open("randomInt.txt");
    Random A;
    std::cout<<"Random Integer";
    int a,b,num;
    std::cout<<std::endl;
    std::cout<<"max =";
    std::cin>>a;
    std::cout<<"min =";
    std::cin>>b;
    std::cout<<"how many ?";
    std::cin>>num;
    while ((num>(a - b))||(a<b))
    {
          system("cls");
        std::cout<<"data input not correct, please retry \n"
                <<"max > min\nnum<(max-min)\n";
          std::cout<<std::endl;
    std::cout<<"max =";
    std::cin>>a;
    std::cout<<"min =";
    std::cin>>b;
    std::cout<<"how many ?";
    std::cin>>num;

    }
int *Array = new int [num];
for(int i=1;i<=num;i++)
{
    int out=A.random_integer(a,b);
    bool  check = CheckDub(out,Array,i);
   if (check){
    std::cout<<out<<"  ";
   fout<<out<<std::endl;
   }
   else {
    i--;
   }
}
 fout<<std::endl;
    std::cout<<std::endl;
fout.close();
std::cout<<"result are save in text file \nPress any key to exit\n";
std::cin.get();
std::cin.ignore();
delete []Array;
}

bool CheckDub(int out, int*Array,int n)
{
    for (int i=0;i<n;i++)
    {
        if (out==Array[i]) return false;
    }
    Array[n]=out;
    return true;

}
