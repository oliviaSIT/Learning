#include "Folder.h"
#include "Message.h"

using namespace std;

namespace Chapter13_4 {
Folder::Folder(const Folder &) {
       
}

void Folder::add_to_Message(const Folder&) {}
void Folder::remove_from_Message() {}
void Folder::addMsg(Message *m) {}
void Folder::remMsg(Message *m) {}

}
