void demo(int a,int b, int c){
    test(a,b,c);
    return 0;
}
int main() {
    int a = 1 + 2 + 3;
    int b = (a + a) / (a * a);
    while (a) {
        a = a - 1;
    }

    if (a) {
        a = b;
    } else if (b) {
        b = a;
    } else if (a + b) {
    } else {
        a = a + test(a, b, a * b + c);
    }
    return 0;
}