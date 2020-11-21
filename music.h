#ifndef MUSIC_H_INCLUDED
#define MUSIC_H_INCLUDED

void musicIntro()
{

 PlaySound("intro.wav", NULL, SND_ASYNC);

}

void player_faill()
{
PlaySound("player_died.wav", NULL, SND_ASYNC);
}

void player_win()
{
  PlaySound("player_win.wav", NULL, SND_ASYNC);
}
void dragong_fight()
{
PlaySound("dragon_fight.wav", NULL, SND_ASYNC);
}


#endif // MUSIC_H_INCLUDED
