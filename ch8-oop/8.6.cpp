#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myFile("/Users/likejun/ProgrammingBasics/ch8-oop/test.txt", fstream::in | fstream::out);
    string inp;

    while (myFile.tellg() != -1)
    {
        auto pos1 = myFile.tellg();
        if (getline(myFile, inp))
        {
            auto pos2 = myFile.tellg();
            myFile.clear();
            myFile.seekp(pos1);

            string opt;
            for (auto i = inp.rbegin(); i < inp.rend(); i++)
            {
                opt.push_back(*i);
            }
            myFile << opt;


            myFile.seekg(pos2);
        }
    }
    return 0;
}