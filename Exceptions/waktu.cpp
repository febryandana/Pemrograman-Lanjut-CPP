#include <iostream>
#include <time.h>
using namespace std;


void wait()
{
    clock_t tunggu;
    int i = 0;

    tunggu = clock() + CLOCKS_PER_SEC;
    while (clock() < tunggu) {
    }
}

int main()
{
    time_t waktu;

    int i = 0;
    while(1)
    {
      system("clear || cls");
       time(&waktu);
       cout<<ctime(&waktu)<<endl;
       wait();

       system("CLS");
    }

}
