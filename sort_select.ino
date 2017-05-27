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
            swap(i, sm, false);
        }
        swap(i, sm, true);
    }
    pixels.show();
    destory();
}

