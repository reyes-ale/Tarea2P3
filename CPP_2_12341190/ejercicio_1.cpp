
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int fila = 0;
    int columna = 0;
    int producto = 0;

    for (int i = 0; i < 4; i++)  {
        for (int j = 0; j < 4; j++) {
            if (j == 0) {
                cout << "a[" << i << "]" << "[" << j << "]" << "=" << setw(3);
            }
            else {
                cout << setw(3)<<"a[" << i << "]" << "[" << j << "]" << "=" << setw(3);
            }
            producto = (i + 1) * (j + 1); 
            cout << producto << setw(1);
        }
        cout << endl; 
    }
}
