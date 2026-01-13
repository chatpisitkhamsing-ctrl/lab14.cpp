template <typename T>
void insertionSort(T d[], int N){
    for(int i = 1; i < N; i++){
        T key = d[i];
        int j = i - 1;

        // เรียงจากมากไปน้อย
        while(j >= 0 && d[j] < key){
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = key;

        // แสดงผลแต่ละรอบ
        cout << "Pass " << i << ":";
        for(int k = 0; k < N; k++){
            cout << d[k] << " ";
        }
        cout << "\n";
    }
}

