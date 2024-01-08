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

	// Medya dosyalarýný oynatma
	audio.play();
	video.play();

	// Medya dosyalarýna filtre uygulama
	audio.accept(filterVisitor);
	video.accept(filterVisitor);

	// Medya dosyalarýný dýþa aktarma
	audio.accept(exportVisitor);
	video.accept(exportVisitor);

	return 0;
}