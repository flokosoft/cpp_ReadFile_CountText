#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int get_lines(const string& pfad) {
    int zeilen = 0;
    ifstream file(pfad);
    if(file.is_open()) {
        while (!file.eof()) {
            string z;
            getline(file, z) ;
            zeilen++;

        }
    }
    else {
        zeilen--;
    }
    file.close();
    return zeilen;
}

int get_words(const string& pfad) {
    int words = 0;
    ifstream file(pfad);
    if(file.is_open()) {
        while (!file.eof()) {
            string w;
            file >> w;
            words++;
        }
    }
    else {
        words--;
    }
    file.close();
    return words;
}

int main() {
    string pfad = "faust.txt";

    cout << "Zeilen: " << get_lines(pfad) << endl;
    cout << "Wörter: " << get_words(pfad) << endl;

    return 0;
}
