# C Dilinde Bağlı Liste Uygulaması

Bu depo, C dilinde basit bir tek yönlü bağlı liste uygulaması içermektedir. Program, bağlı liste oluşturmayı, listenin başına düğüm eklemeyi ve listeyi yazdırmayı göstermektedir.

## Özellikler
- Yeni bir düğüm oluşturma
- Listenin başına düğüm ekleme
- Bağlı listeyi ekrana yazdırma

## Kod Genel Bakış
Bu uygulama aşağıdaki fonksiyonları içermektedir:

- `createNode(int data)`: Belirtilen veriye sahip yeni bir düğüm oluşturur.
- `addNodeAtBeginning(struct Node** head, int data)`: Listenin başına bir düğüm ekler.
- `printList(struct Node* head)`: Bağlı listeyi ekrana yazdırır.

## Kullanım
### Derleme
Programı derlemek için aşağıdaki komutu kullanabilirsiniz:
```sh
gcc linked_list.c -o linked_list
```

### Çalıştırma
Derlenen programı çalıştırmak için:
```sh
./linked_list
```

### Örnek Çıktı
```
Liste: 30 -> 20 -> 10 -> NULL
```

## Kod
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNodeAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    addNodeAtBeginning(&head, 10);
    addNodeAtBeginning(&head, 20);
    addNodeAtBeginning(&head, 30);

    printf("Liste: ");
    printList(head);

    return 0;
}
```

## Lisans
Bu proje MIT Lisansı altında lisanslanmıştır.



