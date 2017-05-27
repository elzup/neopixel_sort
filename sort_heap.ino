
void heapSort() {
    printText("HEAP ");
    initialize();
    set_delay(12, 1);
    shuffle();

    for (int i = (NUMPIXELS / 2) - 1; i >= 0; i--) {
        shiftDown(i, NUMPIXELS);
    }
    set_delay(1, 1);
    for (int i = NUMPIXELS - 1; i >= 1; i--) {
        swap(0, i);
        shiftDown(0, i - 1);
    }
    pixels.show();
    destory();
}

void shiftDown(int root, int bottom) {
    int maxChild, temp;
    while ((root * 2 <= bottom)) {
        if (root * 2 == bottom) {
            maxChild = root * 2;
        } else if (m[root * 2] > m[root * 2 + 1]) {
            maxChild = root * 2;
        } else {
            maxChild = root * 2 + 1;
        }
        if (m[root] < m[maxChild]) {
            swap(root, maxChild);
            root = maxChild;
        } else {
            break;
        }
    }
}

