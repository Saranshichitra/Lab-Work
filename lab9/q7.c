#include <stdio.h>
typedef struct {
    char title[100];
    char author[100];
    long id;
} book;
 struct Library {
book bk[5];
};
void add(int n) {
    book bk[n+1];
    printf("Enter the title author and id of the book you want to add");
    scanf("%s %s %lu", &bk[n].title, &bk[n].author, &bk[n].id);
}
void display(int n) {
int i;
for ( i = 0; i <= n; i++ ) {
    printf("%s %s %lu",  bk[i].title, bk[i].author, bk[i].id);
}
    }
int main() {
    int n;
    printf("How many books are there");
    scanf("%d", &n);
    add(n);
    display(n); 
    return 0;
}