
void mergeSort() {
    printText("MERGE");
    initialize();
    set_delay(3, 1);
    shuffle();
    revMerge(0, NUMPIXELS - 1);
    pixels.show();
    destory();
}

void revMerge(int left, int right) {
    if (right - left <= 2) {
        if (m[left] > m[right]) {
            swap(left, right);
        } else {
            noswap(left, right);
        }
        return;
    }
    int middle = (left + right) / 2;
    revMerge(left, middle);
    revMerge(middle + 1, right);
//  10 11 12 13 14
//  [10] 11 (12)
//  13 [14]
    int sl1 = middle - left + 1;
    int sl2 = right - middle;
    int stack1[sl1 + 1], stack2[sl2 + 1];
    for (int i = 0; i < sl1; i++) {
        stack1[i] = m[left + i];
        lightOff(left + i);
    }
    stack1[sl1] = 256;
    stack2[sl2] = 256;
    for (int i = 0; i < sl2; i++) {
        stack2[i] = m[middle + 1 + i];
        lightOff(middle + 1 + i);
    }
    showup();
    int i1 = 0, i2 = 0;
    for (int i = left; i <= right; i++) {
        int k = 0;
        if (stack1[i1] < stack2[i2]) {
            k = stack1[i1];
            i1 ++;
        } else {
            k = stack2[i2];
            i2 ++;
        }
        m[i] = k;
        int rgb[3];
        h_to_rgb(m[i], rgb);
        pixels.setPixelColor(i, pixels.Color(rgb[0], rgb[1], rgb[2]));
        showup();
    }
}

