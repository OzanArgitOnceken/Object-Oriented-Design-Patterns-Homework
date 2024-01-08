#include"Headphones.h"
#include"Speaker.h"
#include"Audio.h"
#include"Video.h"
#include"Hardware.h"

int main() { 
	Speaker speaker;
	Headphones headphones;
	Audio *audio_with_speaker = new Audio(speaker);
	Audio *audio_with_headphones = new Audio(headphones);
	Video *video_with_speaker = new Video(speaker);
	Video *video_with_headphones = new Video(headphones);
	audio_with_speaker->play();
	audio_with_headphones->play();
	video_with_speaker->play();
	video_with_headphones->play(); 
}