
void printText(char *text) {
    unsigned char b[256];
    int k = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 8; ++j) {
            b[k++] = 0;
        }
        unsigned char mat[40];
        char_to_mat(text[i], mat);
        for (int j = 0; j < 40; ++j) {
            b[k++] = mat[j];
        }
    }
    showText(b);
}

void char_to_mat(char c, char *mat) {
    if (c == 'A') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'B') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    }
}

void showText(char *b) {
    int off = pixels.Color(0, 0, 0);
    int on = pixels.Color(255, 255, 255);
    for (int i = 0; i < NUMPIXELS; ++i) {
        pixels.setPixelColor(i, b[i] == 1 ? on : off);
    }
    pixels.show();
    delay(DELAY_VAL);
}
