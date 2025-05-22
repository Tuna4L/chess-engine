#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // needed for uint64_t

int main()
{

	//TODO: consider using a typedef for uint64_t
	// TODO: append to array, possibly struct... use enum indicing: WQ, BQ, WP, etc.

	// if I decide to use a struct, wrap the starting position init into a function passed the struct as a pointer.




	uint64_t *bitboards;
	bitboards = malloc(12 * sizeof(uint64_t));


	// initialize the starting position
	uint64_t whitePawns = 0xFFULL << 8;
	uint64_t blackPawns = 0xFFULL << 56; // Note: 0xFFULL is hexadecimal for 8 bits

	uint64_t whiteRooks = (1ULL) | (1ULL << 7);
	uint64_t blackRooks = (1ULL << 56) | (1ULL << 63);

	uint64_t whiteKnights = (1ULL << 1) | (1ULL << 6);
	uint64_t blackKnights = (1ULL << 57) | (1ULL << 62);

	uint64_t whiteBishops = (1ULL << 2) | (1ULL << 5);
	uint64_t blackBishops = (1ULL << 58) | (1ULL << 61);

	uint64_t whiteQueen = (1ULL << 3)
	uint64_t blackQueen = (1ULL << 59);

	uint64_t whiteKing = (1ULL << 4);
	uint64_t blackKing = (1ULL << 60); // end starting position init




	// Load position from fen string
	void LoadPosition(char *fen)
	{
		// TODO
	}
	
	// update the bitboard after a piece is moved
	void updateBitBoard(Move move)
	{
		// TODO
		// int pieceToMove = squares[startSquare];
		// int pieceToCapture = squares[TargetSquare]; 
	}








	// free memory
	free(bitboards);
	return 0;
}
