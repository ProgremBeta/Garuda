#include <bits/stdc++.h>

using namespace std;


void normalizar(char input[]) {
    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        input[i] = tolower(input[i]);
    }
}


bool ordenDirecto(const char input[]) {
    int length = strlen(input);
    for (int i = 0; i < length - 1; i++) {
        if (input[i] > input[i + 1]) {
            return false;
        }
    }
    return true;
}


bool ordenInverso(const char input[]) {
    int length = strlen(input);
    for (int i = length - 1; i > 0; i--) {
        if (input[i] > input[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100]; 

    
    cin.getline(input, sizeof(input)); 

    
    normalizar(input);

    
    bool resultado = ordenDirecto(input) || ordenInverso(input);
    cout << (resultado ? "yes" : "no") << endl; 

    cout<<"Hola mundo";

    return 0;
}

