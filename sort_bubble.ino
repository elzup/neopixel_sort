void bubbleSort() {
    printText("BUBBL");
    initialize();
    set_delay(1, 200);
    shuffle();
    for (int i = 0; i < NUMPIXELS; i++) {
        for (int j = 0; j < NUMPIXELS - 1 - i; j++) {
            swap(j, j + 1, m[j] > m[j + 1]);
        }
    }
    pixels.show();
    destory();
}

