#include <stdio.h>

typedef struct STUDENT_COUNCIL {
    char name[50];
    int roll_number;
} SC;

int main() {
    SC s1 = {"Harshit Khanna", 97092039};
    SC s2 = {"Rias gremory", 54353464};

    printf("%s %d", s1.name, s2.roll_number);
    return 0;
}