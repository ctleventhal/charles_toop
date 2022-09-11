#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    cout << "3/c Charles Leventhal \nTOOP HW2" << endl;
    string inputFilename;
    string line;
    int quantity;
    double cost;
    double discount;
    cout << "How many items are you purchasing?: ";
    cin >> quantity;
    cout << "\nHow much does the item cost?: ";
    cin >> cost;
    if (0 < quantity) {
        discount=0;
        if (11 < quantity){
          discount= .05;
           if (45 < quantity){
             discount= .10;
                if (250 < quantity)
                   discount= .15;

           }}}
cout << "\n You are buying " << quantity << " items at a " << (100*discount) << "% discount cost of $" << (cost * quantity * (1 - discount)) << ". You saved $" << (cost*quantity*discount) << "! \n";

ifstream myFile;
while (inputFilename != "input.txt") {
cout << "\nPlease enter a filename: ";
cin >> inputFilename;
myFile.open (inputFilename, ios::app);
cout << "\ninputFilename: " << inputFilename<< endl;
}


for (int i=1; i<6 ; i++){
getline(myFile, line);
cout << "\n" << i << ". " << line;
}
myFile.close();

}
