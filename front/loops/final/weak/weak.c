void main() {
    int a[128];
    int b[128];
    int c[128];
    int d[128];
    int e[128];
    for (int i = 1; i < 128; i++) {
        d[i] = e[i] - a[i-1];
        a[i] = b[i] + c[i];
    }
}