#include"Audio.h"
#include"Video.h"
int main() {
	// Example usage with separate objects
	Audio audio;
	Video video;

	audio.filter();        // Apply filtering
	audio.exportMedia();   // Apply exporting
	audio.play();          // Play media

	video.filter();        // Apply filtering
	video.exportMedia();   // Apply exporting
	video.play();          // Play media

	return 0;
}