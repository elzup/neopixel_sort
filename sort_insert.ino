void insertionSort() {
    printText("INSER");
    initialize();
    set_delay(1, 20);
    shuffle();
    for (int i = 1; i < NUMPIXELS; i++) {
        for (int j = i - 1; j >= 0 && m[j] > m[j + 1]; j--) {
            swap(j, j + 1);
        }
    }
    pixels.show();
    destory();
}

