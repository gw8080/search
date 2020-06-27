#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    string mystr;
    string searchparam[] = {"reddit","news","slashdot","wikipedia","music","music video","stories","meme","youtube","funny","torrent","movie","forbes","academia"};
    cout << "WEB SEARCH 0.1" << endl;
    cout << endl << "Type keywords: ";
    getline (cin, mystr);
    for (int i = 0;i < sizeof(searchparam);i++){
    string command = "start explorer \"https://www.google.com/search?q=" + mystr + " " + searchparam[i] + "\"";
    system(command.c_str());
    }
return 0;
}
