#include<iostream>
#include"Audio.h"
#include"Video.h"
#include"MediaFilterVisitor.h"
#include"MediaExportVisitor.h"

int main() {

	Audio audio;
	Video video;

	MediaFilterVisitor filterVisitor;
	MediaExportVisitor exportVisitor;

	// Medya dosyalar�n� oynatma
	audio.play();
	video.play();

	// Medya dosyalar�na filtre uygulama
	audio.accept(filterVisitor);
	video.accept(filterVisitor);

	// Medya dosyalar�n� d��a aktarma
	audio.accept(exportVisitor);
	video.accept(exportVisitor);

	return 0;
}