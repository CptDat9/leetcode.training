int divide(int dividend, int divisor) {
   if (divisor == 0) {
        printf("Error: Division by zero\n");
        return 0; // Có thể tùy chỉnh theo nhu cầu
    }

    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX; // Tránh tràn số, trả về giá trị lớn nhất của int
    }

    return dividend / divisor;
}
