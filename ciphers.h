typedef enum EncryptionScheme {CAESAR=1, CAESAR_EXTENDED} EncryptionScheme;
char shift;
char * cypher_name;

void encrypt(char *, EncryptionScheme);
void decrypt(char *, EncryptionScheme);