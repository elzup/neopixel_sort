
void printText(char *text) {
    unsigned char b[256];
    int k = 0;
    // sepalate
    for (int j = 0; j < 8; ++j) { b[k++] = 0; }
    for (int i = 0; i < 5; ++i) {
        unsigned char mat[40];
        char_to_mat(text[i], mat);
        for (int j = 0; j < 40; ++j) {
            b[k++] = mat[j];
        }
        // sepalate
        for (int j = 0; j < 8; ++j) { b[k++] = 0; }
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
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            0, 1, 1, 1, 0, 1, 1, 0
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'C') {
        unsigned char n[40] = {
            0, 1, 1, 1, 1, 1, 1, 0,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            0, 1, 0, 0, 0, 0, 1, 0
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'D') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 1, 0,
            0, 0, 1, 1, 1, 1, 1, 0
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'E') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'F') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'G') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'H') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'I') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'J') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'K') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'L') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'M') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'N') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'O') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'P') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'Q') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'R') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'S') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'T') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'U') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'V') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'W') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'X') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'Y') {
        unsigned char n[40] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * 100);
    } else if (c == 'Z') {
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
