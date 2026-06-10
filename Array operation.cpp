#include <iostream>
using namespace std;

class ArrayOperation {
private:
    int arr[100], n;

public:
    void insertElements() {
        cout << "Enter the number of elements: ";
        cin >> n;

        cout << "Enter the elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void findMaximum() {
        int max = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Maximum element = " << max << endl;
    }

    void sortDescending() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Array in decreasing order:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayOperation arrayObj;

    arrayObj.insertElements();
    arrayObj.findMaximum();
    arrayObj.sortDescending();

    return 0;
}
