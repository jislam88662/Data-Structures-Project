#ifndef PLAYLIST_H
#define PLAYLIST_H
using namespace std;
#include "Node.h";
#include "Song.h";
#include<string>
class Playlist {
private:
	string Nameplaylist;
	Node* treeofsongs;
public:
	Playlist createplaylist(string name, Song* song);
	void  addsongs(Song*song);
	void Delete( Song*song);
	void delete2();
	void  DispalyEntirePlaylist();
	int DisplayTotalnum();
	void preorder();
	void postorder();
	void inorder();
	void shufflle();






};
#endif
