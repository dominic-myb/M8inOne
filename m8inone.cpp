#include "defs.h"
#include "stdio.h"

int main() {
  AllInit();

  u64 playBitBoard = 0ULL;
  // int index = 0;

  // for(index = 0; index < 64; index++){
  //   printf("Index: %d\n", index);
  //   PrintBitBoard(ClearMask[index]);
  //   printf("\n");
  // }

  SETBIT(playBitBoard, 61);
  PrintBitBoard(playBitBoard);

  CLRBIT(playBitBoard, 61);
  PrintBitBoard(playBitBoard);

  return 0;
}