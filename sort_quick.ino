void quickSort() {
    printText("QUICK");
    initialize();
    set_delay(1, 2);
    shuffle();
    revQuick(0, NUMPIXELS - 1);
    pixels.show();
    destory();
}

void revQuick(int left, int right) {
    if (left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int pivot = m[left];
    while (true) {
        while (m[i] < pivot) {
            noswap(i, left);
            i++;
        }
        while (pivot < m[j]) {
            noswap(left, j);
            j--;
        }
        if (i >= j) {
            break;
        }
        swap(i, j);
        i ++;
        j --;
    }
    revQuick(left, i - 1);
    revQuick(j + 1, right);
}

