
void printText() {
    unsigned char b[256];
    b[0] = 1;
    b[10] = 1;
    b[20] = 1;
    showText(b);
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
