void main() {
    int a[128];
    int b;
    for (int i = 0; i < 128; ++i) {
        if (a[i] > b) {
            b = a[i];
        }
    }  
}