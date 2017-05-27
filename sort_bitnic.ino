void bitnicSort() {
    printText("BITNC");
    initialize();
    set_delay(1, 2);
    shuffle();
    revBitnic(0, NUMPIXELS - 1, true);
    pixels.show();
    destory();
}

void checkSwap(int v1, int v2, bool asc) {
    if ((m[v1] > m[v2]) != asc) {
        noswap(v1, v2);
        return;
    }
    swap(v1, v2);
}

void cascade(int left, int right, bool asc) {
    if (left + 1 == right) {
        checkSwap(left, right, asc);
        return;
    }
    int half = (right - left + 1) / 2;
    int middle = left + half;
    for (int i = 0; i < half; ++i) {
        checkSwap(left + i, middle + i, asc);
    };
    cascade(left, middle - 1, asc);
    cascade(middle, right, asc);
}

void revBitnic(int left, int right, bool asc) {
    int half = (right - left + 1) / 2;
    int middle = left + half;
    if (left + 1 == right) {
        checkSwap(left, right, asc);
        return;
    }
    revBitnic(left, middle - 1, true);
    revBitnic(middle, right, false);
    cascade(left, right, asc);
}

