#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }
        int temp = *(arr + minIndex);
        *(arr + minIndex) = *(arr + i);
        *(arr + i) = temp;
    }
}
void printArray(int* arr, int n) {
    cout << "数组元素: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    int* arr = new int[n];
    cout << "请输入 " << n << " 个整数:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "元素[" << i << "]: ";
        cin >> *(arr + i); 
    }
    cout << "\n原始数组:" << endl;
    printArray(arr, n);
    cout << "\n指针和内容信息:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "指针 arr+" << i << " = " << (arr + i)
            << ", 内容 *(arr+" << i << ") = " << *(arr + i) << endl;
    }
    sortArray(arr, n);
    cout << "\n排序后的数组:" << endl;
    printArray(arr, n);
    cout << "\n排序后的指针和内容信息:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "指针 arr+" << i << " = " << (arr + i)
            << ", 内容 *(arr+" << i << ") = " << *(arr + i) << endl;
    }
    delete[] arr;
    arr = nullptr;  
    cout << "\n内存已释放，程序结束。" << endl;
    return 0;
}