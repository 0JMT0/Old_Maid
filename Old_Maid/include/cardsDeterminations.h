#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct card
{
	const char *face;
	const char *suit;
};

typedef struct card Card;

void card_draw(Card * const whoDraw, Card * const whoBeDraw, int player);
void sameCards(Card * const Hand);
int NoCards(Card * const Hand);

#define HAND 18
#define DECK 0
#define InHand 1