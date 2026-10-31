#include <iostream>
#include <string>

using namespace std;

// --- PROTOTYPE FUNGSI ---
string encrypt(string text);

int main() {
    string result = encrypt("Yogyakarta");
    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}

// --- DEFINISI FUNGSI ENCRYPT ---
string encrypt(string text) {
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        // Cek huruf vokal (besar dan kecil)
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
            text[i] = '*'; // Ubah jadi bintang
        }
    }
    return text;
}