#include <stdio.h>
#include <string.h>
void encrypt(char text[], int key) {
   for (int i = 0; text[i] != '\0'; i++) {

       text[i] = text[i] + key;  
   }
}
void decrypt(char text[], int key) {
   for (int i = 0; text[i] != '\0'; i++) {
       text[i] = text[i] - key;
   }
}
int main() {
   char text[100];
   int key;
   printf("Enter text: ");
   fgets(text, sizeof(text), stdin);
   printf("Enter key (1-25): ");
   scanf("%d", &key);
   encrypt(text, key);
   printf("\nEncrypted Text: %s\n", text);
   decrypt(text, key);
   printf("Decrypted Text: %s\n", text);
   return 0;
}
