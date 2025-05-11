#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Giả lập đọc nhiệt độ CPU
float getCPUTemperature() {
    // Ở đây chúng ta giả lập nhiệt độ, giá trị thực có thể lấy bằng API hoặc file hệ thống
    // trên Linux thường có thể đọc từ: /sys/class/thermal/thermal_zone*/temp
    return (float)(rand() % 2000) / 10.0; // Nhiệt độ ngẫu nhiên từ 0.0 đến 200.0
}

int main() {
    // Thiết lập seed cho random
    srand(time(NULL));

    // Lấy thời gian hiện tại
    time_t t = time(NULL);
    struct tm *currentTime = localtime(&t);

    // Lấy nhiệt độ CPU
    float cpuTemp = getCPUTemperature();

    // Hiển thị kết quả với định dạng
    printf("Date       Time     Temperature\n");
    printf("%02d/%02d/%04d %02d:%02d:%02d %.1f\n",
           currentTime->tm_mday,
           currentTime->tm_mon + 1,  // Tháng bắt đầu từ 0
           currentTime->tm_year + 1900,  // Năm bắt đầu từ 1900
           currentTime->tm_hour,
           currentTime->tm_min,
           currentTime->tm_sec,
           cpuTemp);

    return 0;
}