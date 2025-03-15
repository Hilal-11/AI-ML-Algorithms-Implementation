#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    // int random = rand();
    // cout<<random;

    // for (int i = 0; i < 10; i++){
    //     cout<<rand() % (1 , 100 + 1)<<endl;
    // }

    // generate random numbers wothout seeding
    cout<<"Generate random numbers without seeding "<<endl;
    for(int i = 0; i < 10; i++) {
        int random = rand();
        cout<<"random number = "<<random<<endl;
    }


    // seed the random numbers generated with current time
    srand(time(0));
    cout<<"\nGenerate random numbers with seeding "<<endl;
    for(int i = 0; i < 10; i++){
        int result = rand();
        cout<<"random number with seeding = "<<result<<endl;
    }


    // Generating Random Numbers in a Specific Range
        //  random number=min+(rand()%(max−min+1))

    // example

    int random_number = 1+(rand() % (100-1+1));
    cout<<random_number<<"\n \n";


    // Generating Random Numbers in a Specific Range
    int min = 1;
    int max = 100;

    for(int i = 1; i <= 10; i++) {
        int random = min+(rand() % (max-min+1));
        cout<<random<<endl;
    }

    

    return 0;
}