#include <iostream>
#include <string>

using namespace std;

string encryptVigenere(string plainText, string key) {
    string encryptedText = "";
    int keyLength = key.length();

    for (int i = 0; i < plainText.length(); ++i) {
        char plainChar = plainText[i];
        char keyChar = key[i % keyLength];

        plainChar = toupper(plainChar);
        keyChar = toupper(keyChar);

        if (isalpha(plainChar)) {
            char encryptedChar = 'A' + (plainChar + keyChar) % 26;
            encryptedText += encryptedChar;
        } else {
            encryptedText += plainChar;
        }
    }

    return encryptedText;
}

int main() {
    string plainText, key;

    cout << "Nermucel texty: ";
    getline(cin, plainText);

    cout << "Nermucel banalin: ";
    getline(cin, key);

    string encryptedText = encryptVigenere(plainText, key);
    cout << "Gaxtnagrvac text: " << encryptedText << endl;

    return 0;
}