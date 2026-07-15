#include "net/minecraft/locale/Language.h"

Language* Language::sInstance = nullptr;

Language* Language::getInstance() {
    return sInstance;
}
