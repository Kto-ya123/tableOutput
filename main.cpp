#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    int N, M;
    fin >> N >> M;
    string inputString;
    vector<vector<string>> table;
    for(int line(0); line < N; line++){
        fin >> inputString;
        vector<string> elementsLine;
        for(int column(0); column < M; column++){
            int endElement = inputString.find(',');
            string element = inputString.substr(0, endElement);
            inputString = inputString.substr(endElement + 1);
            elementsLine.push_back(element);
        }
        table.push_back(elementsLine);
    }
    for(const auto& line : table){
        for(int i(0); i < line.size(); i++){
            if(i != 0){
                cout << " ";
            }
            cout << setw(10) << line[i];
        }
        cout << endl;
    }
    return 0;
}
