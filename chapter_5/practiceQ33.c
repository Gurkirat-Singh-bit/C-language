#include <stdio.h>

void percentage(float english, float science,  float hindi, float IT, float sst);

int main() {
    percentage(88, 63, 83, 82, 85);
    return 0;
}

void percentage(float english, float science, float hindi, float IT, float sst) {
    float total_marks = english + science +  hindi + IT + sst;
    float percentage = (total_marks / 500) * 100;
    printf("Your total marks are %.2f\n", total_marks);
    printf("Your percentage is %.2f%%\n", percentage);
}
