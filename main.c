#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct {
    char student_id[20];
    char student_name[50];
    char student_phone[30];
} Student;
void addNewStudent() {
    int size = 10;
    Student sinhvien[size];
    printf("Enter the number of students(Max 10 students):\n");
    getchar();
    char student_id[20];
    char student_name[50];
    char student_phone[30];
    for (int i = 0; i < size; ++i) {
        while (1) {
            printf("enter student id: %d", i + 1);
            fgetc(stdin);
            fgets(sinhvien[size].student_id, 20, stdin);
            if (strlen(sinhvien[size].student_id) != 5) {
                printf("enter student id must 5 characters\n");
            } else break;
        }

        printf("please enter student name: %s\n", student_name);
        fgetc(stdin);
        fgets(sinhvien[i].student_name, 50, stdin);
        printf("please enter student phone: %s\n", student_phone);
        fgetc(stdin);
        fgets(sinhvien[i].student_phone, 30, stdin);
    }
}

void displayListStudent() {
    char student_id[20];
    char student_name[50];
    char student_phone[30];

    printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone\n");
    for (int i = 0; i < 10; ++i) {
        printf("%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
        getc(stdin);
    }
}

void saveAndReadListStudent() {
    char student_id[20];
    char student_name[50];
    char student_phone[30];
    FILE *fp;
    fp = fopen("danhsachsinhvien.txt", "w+");
    printf("enter something to save file: \n");

    if (fp != NULL) {
        printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone");
        for (int i = 0; i < 10; ++i) {
            fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
            fgetc(stdin);
        }
    }
    fclose(fp);
    printf("---Read File data---");
    fp = fopen("danhsachsinhvien.txt", "r");
    if (fp != NULL) {
        printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone");
        for (int i = 0; i < 10; ++i) {
            fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
            fgetc(stdin);
        }
    }
}
int main() {
    int choice, addNewStudent, displayListStudent, saveAndReadListStudent;
    int size = 10;
    char student_id[20];
    char student_name[50];
    char student_phone[30];
    Student sinhvien[size];
    printf("-------Menu------\n");
    printf("1. Them moi sinh vien.\n");
    printf("2. Hien thi danh sach sinh vien.\n");
    printf("3. Luu danh sach sinh vien ra file.\n");
    printf("4. Doc danh sach sinh vien tu file.\n");
    printf("5. Thoat chuong trinh.\n");
    printf("please enter choice of you: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("them moi sinh vien\n");
            break;
        case 2:
            printf("hien thi danh sach sinh vien\n");
            break;
        case 3:
            printf("luu danh sach sinh vien ra file\n");
            break;
        case 4:
            printf("doc danh sach sinh vien tu file\n");
            break;
        case 5:
            printf("thoat chuong trinh\n");
            break;
    }
    printf("Enter the number of students(Max 10 students): \n");
    getc(stdin);
    gets(sinhvien);
    printf("enter student id: ");
    fgetc(stdin);
    fgets(sinhvien[size].student_id, 20, stdin);
    if (strlen(sinhvien[size].student_id) != 5) {
        printf("enter student id must 5 characters\n");
    }
    fgets(sinhvien[size].student_id, 20, stdin);
    printf("please enter student name: \n");
    fgetc(stdin);
    fgets(sinhvien[size].student_name, 50, stdin);
    printf("please enter student phone: \n");
    fgetc(stdin);
    fgets(sinhvien[size].student_phone, 30, stdin);
    printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone\n");
    for (int i = 0; i < 10; ++i) {
        printf("%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
        getc(stdin);
    }
    FILE *fp;
    fp = fopen("danhsachsinhvien.txt", "w+");
    printf("  enter something to save file: : \n");
    if (fp != NULL) {
        fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone");
        for (int i = 0; i < 10; ++i) {
            fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
            fgetc(stdin);
        }
    }
    fclose(fp);
    printf("read file data: \n");
    fp = fopen("danhsachsinhvien.txt", "r");
    if (fp != NULL) {
        fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", "", "student id", "|", "student name", "|", "phone");
        for (int i = 0; i < 10; ++i) {
            fprintf(fp, "%-10s%-20s%-10s%-20s%-10s%-20s", student_id, "|", student_name, "|", student_phone, "|\n");
            fgetc(stdin);
        }
    }
}