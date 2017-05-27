void selectionSort() {
    printText("SELEC");
    initialize();
    set_delay(1, 200);
    shuffle();
    for (int i = 0; i < NUMPIXELS - 1; ++i) {
        int sm = i;
        for (int j = i + 1; j < NUMPIXELS; j++) {
            if (m[j] < m[sm]) {
                sm = j;
            }
            noswap(i, sm);
        }
        swap(i, sm);
    }
    pixels.show();
    destory();
}

