#include <iostream>
#include <string>
using namespace std;

void fruitstuff(string fruit, int number) {
    cout << "I like " << fruit << " and I have " << number << " bananas." << endl;
    cout << "I have " << number << " " << fruit << "." << endl;
}

int main()
{
    string redfruit = "apples";
    int fruitnum = 35;
    fruitstuff(redfruit, fruitnum);
    return 0;
}