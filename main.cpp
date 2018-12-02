
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

/**
 * The program reads numbers from a file and prints the sum of them
 * Example: main.exe ./tests/input.in
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, const char * argv[])
{
    
    int a = 0;
    double sum = 0;
    double average;
    int count =0 ;
    float *array = new float [count];
    

    
    std::ifstream myReadFile;
    myReadFile.open(argv[1]);
    while (myReadFile >> a)
    {
        count++;
        sum = sum += a;
        
    }
    
    myReadFile.close();
    std::cout << "The sum is: " << sum << "\n";
   
    myReadFile.open(argv[1]);
    

    for (int a = 0 ; a < count ; a++)
    {
        myReadFile >> array[a];     
        
    }
    
    average = sum / count;
    cout << "Avreage is: " << average << endl ;
    
    for (int i = 0 ; i < count ; i++)
    {
        if (average < array[i])
        cout << "Number bigger than average  " << array[i] << endl;
        
    }
    

    myReadFile.close();
    delete [] array ;


    return 0;
}


