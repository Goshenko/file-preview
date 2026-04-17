#include "AudioTests.hpp"
#include "VideoTests.hpp"
#include "ImageTests.hpp"
#include "DocumentTests.hpp"
#include "TextTests.hpp"
#include "SheetTests.hpp"
#include <cstdlib>
// Use automation tests for various different file types:
// Audio: .mp3
// Video: .mp4
// Pictures: .jpeg, .png
// Documents: .pdf
// Text-Based Files: .txt, .py, .cpp, etc.
// Sheets: .xslx, etc.



int main () {

	// PICTURE MEDIA TESTS
	ImageTests image;
	std::cout << "Executing Image Tests..." << std::endl;
	return QTest::qExec(&image);

	// AUDIO MEDIA TESTS
	AudioTests audio;
	std::cout << "Executing Audio Tests..." << std::endl;
	return QTest::qExec(&audio);

	// VIDEO MEDIA TESTS
	VideoTests video;
	std::cout << "Executing Video Tests..." << std::endl;
	return QTest::qExec(&video);

	// DOCUMENT FILE TESTS
	DocumentTests document;
	std::cout << "Executing Document Tests..." << std::endl;
	return QTest::qExec(&document);

	// TEXT-BASED FILE TESTS
	TextTests text;
	std::cout << "Executing Text Tests..." << std::endl;
	return QTest::qExec(&text);
	
	// SHEET FILE TESTS
	SheetTests sheet;
	std::cout << "Executing Sheet Tests..." << std::endl;
	return QTest::qExec(&sheet);

	return 0;

}
