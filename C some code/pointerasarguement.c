#include <stdio.h>

// Define structure
struct student {
    char name[20];
    int roll;
};

// Function to display student details
void display(struct student *s, int n) {
    for(int i = 0; i < n; i++) {
        printf("Name: %s\tRoll: %d\n", (s+i)->name, s[i].roll);
    }
}

int main() {
    // Array of structures
    struct student stu[3] = {
        {"Ram", 1},
        {"Sita", 2},
        {"Hari", 3}
    };

    // Pass the structure array to the function
    display(stu, 3);

    return 0;
}
