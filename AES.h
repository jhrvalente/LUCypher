#define block_length 	128
#define Nb 	block_length/32
#define Nk 	4
#define Nr 	10

typedef unsigned char Byte;
typedef Byte Word[4];

Byte* k [Nk];
Byte Rcon [7][4];
Byte state [4][Nb];
Byte* keyschedule [Nb*(Nr+1)];

void AddRoundKey(Byte[4][Nb], Byte*, int);
void MixColumns();
void ShiftRows(Byte [4][Nb]);
void SubBytes(Byte [4][Nb]);
void InvMixColumns(void);
void InvShiftRows(Byte [][Nb]);
Byte* RotWord(Byte*);
Byte* SubWord(Byte*);
int shift_m(int, int);
Byte finiteMultiplication(Byte, Byte);
Byte ** keyExpansion(Byte **);
void AES_E(Byte [], Byte* []);
void AES_D(Byte [], Byte* []); 