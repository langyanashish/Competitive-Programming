#include <iostream>
#include <string>
#include <sstream>

using namespace :: std; // bad idea, I am just lazy to type "std" so much
int main (){


    const int arrSize = 5;

    int arr [arrSize] = {0}; //initialize arr zeros
    string line;
    getline(cin,line);


    cout <<"you entered " << line<<endl; // just to check the string you entered
    stringstream ss (line);

    int i = 0;
    while ( ss>>arr[i++] && i < arrSize); // this might look a bit ugly


    for (int i =0; i < arrSize; i++) // checking the content of the list
        cout<<arr[i]<<" ";

    getchar();


    return 0;



}
