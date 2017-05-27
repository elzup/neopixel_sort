
void shakerSort() {
    printText("SHAKE");
    initialize();
    set_delay(1, 100);
    shuffle();
    int left = 0;
    int right = NUMPIXELS - 1;

    for (int i = 0; i < NUMPIXELS; i++) {
        for (int j = left; j < right; j++) {
            if (m[j] > m[j + 1]) {
                swap(j, j + 1);
            } else {
                noswap(j, j + 1);
            }
        }
        right --;
        for (int j = right; j > left; j-- ){
            if (m[j] < m[j - 1]) {
                swap(j, j - 1);
            } else {
                noswap(j, j - 1);
            }
        }
        left ++;
    }

    pixels.show();
    destory();
}

