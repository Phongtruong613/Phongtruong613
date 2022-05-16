#include <stdio.h>
#include <string.h>
struct hs {
    char name[50];
    int boy;
    int sex;
};
char* line(char c, int len) {
    static char s[1000];
    for (int i = 0; i < len; i++) {
        s[i] = c;
    }
    s[len] = '\0';
    return s;
}
char* center(char s[], int len) {
    int llen = len - strlen(s);
    llen /= 2;
    static char s_new[1000] = "";
    for (int i = 0; i < llen; i++) {
        s_new[i] = 32;
    }
    for (int i = 0; i < strlen(s); i++) {
        s_new[llen + i] = s[i];
    }
    for (int i = llen + strlen(s); i < len; i++) {
        s_new[i] = 32;
    }
    s_new[len] = '\0';
    return s_new;
}
void printline(char c) {
    printf("+%s+", line(c, 52));
    printf("%s+", line(c, 10));
    printf("%s+", line(c, 12));

}
void printTitle() {
    char columns[][10] = { "ho va ten","nam sinh","gioi tinh" };
    printline('=');
    printf("\n| %s ", center(columns[0], 50));
    printf("| %s ", center(columns[1], 8));
    printf("| %s |\n", center(columns[2], 10));
    printline('=');
}

void loadData(struct hs list[], int n) {
    char sex[][10] = { "___","nu","nam" };
    char title[][10] = { "ho ten","nam sinh","gioi tinh" };
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("|%51s |", list[i].name);
        printf("%9d |", list[i].boy);
        if (list[i].sex >= 0 && list[i].sex <= 2) {
            printf("%11s |", sex[list[i].sex]);
        }
        printf("\n");
        printline('-');
    }
}
void quaylai(int n) {
    if (n == 1) {
        printf("\nChuong trinh quan ly hoc sinh\n");
        printf("Chon 1: Load data \nChon 2: Nhap lieu \nChon 3: In danh sach \nChon 4: Luu danh sach \nChon 5: Thoat \n");
    }
}
void inDanhsach(const char* filePath) {
    FILE* qlhs;
    fopen_s(&qlhs, "D:\\Pp\\qlhs.dat", "r");
    if (qlhs == NULL) {
        printf("file bi loi");
        return;
    }
    struct hs list[1000];
    int i = 0;
    while (fread(&list[i], sizeof(struct hs), 1, qlhs)) i++;
    fclose(qlhs);
    printf("\n");
    printTitle();
    loadData(list, i);
}
void luuDanhSach(struct hs list[], int size) {
    FILE* qlhs;
    fopen_s(&qlhs, "D:\\Pp\\qlhs.dat", "w");
    if (qlhs == NULL) {
        printf("khong tao duoc file");
        return;
    }
    for (int i = 0; i < size; i++) {
        fwrite(&list[i], sizeof(struct hs), 1, qlhs);
        if (fwrite == 0) {
            printf("luu noi dung hoc sinh khong thanh cong");
            return;
        }
    }
    fclose(qlhs);
}
int main() {
    struct hs list[100];
    int key;
    int n = 1;
    nhap: quaylai(1);
    printf("Chon so: "); scanf_s("%d", &key);
    if (key == 5) goto end;
    switch (key) {
    case 2:
        printf("so luong hs: ");
        scanf_s("%d%*c", &n);
        for (int i = 0; i < n; i++) {
            printf("ho ten: ");
            gets(list[i].name);
            printf("nam sinh: ");
            scanf_s("%d%*c", &list[i].boy);
            printf("gioi tinh: ");
            scanf_s("%d%*c", &list[i].sex);
        }
        break;
    case 1:
        printTitle();
        loadData(list, n);
        break;
    case 3:
        inDanhsach("D:\\Pp\\qlhs.dat");
        break;
    case 4:
        luuDanhSach(list, n);
        break;
    default:
        printf("khong co phim nay, vui long chon so khac");
        break;
    }
    goto nhap;
end:
    return 0;
}