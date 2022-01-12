#include"cardsDeterminations.h"

void card_draw(Card * const whoDraw, Card * const whoBeDraw, int player)
{
	int DrawCheck = 1;
	//��P�~�P
	shuffle(whoBeDraw, InHand);
	for (size_t i = 0; i < HAND; ++i)
	{
		if (DrawCheck == 1)
		{
			if (whoBeDraw[i].face != 0)//���P�~��
			{
				Card temp = whoBeDraw[i];
				whoBeDraw[i].face = 0;
				for (size_t j = 0; j < HAND; ++j)//���쪺���P
				{
					if (whoDraw[j].face == 0)
					{
						whoDraw[j] = temp;
						if (player == 1)//���player��쪺�P
							printf("%5s of %-8s\n", whoDraw[j].face, whoDraw[j].suit);
						DrawCheck = 0;
						break;
					}
				}
			}
		}
	}
}

void sameCards(Card * const Hand)
{
	for (size_t i = 0; i < HAND; ++i)
	{
		if (Hand[i].face != 0 && Hand[i].face != "Joker")//if not 0 then save
		{
			for (size_t j = (i + 1); j < 20; ++j)
			{
				if (Hand[j].face == Hand[i].face)
				{
					Hand[i].face = 0;
					Hand[j].face = 0;
				}
			}
		}
	}
}

int  NoCards(Card * const Hand)
{
	int nocards = 1;
	for (size_t i = 0; i < HAND; ++i)
	{
		if (Hand[i].face != 0)
		{
			nocards = 0;//0�����P
			break;
		}
	}
	return nocards;
}