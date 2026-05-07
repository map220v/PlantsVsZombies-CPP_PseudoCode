// Class: talkingGame


/* talkingGame::~talkingGame() */

void __thiscall talkingGame::~talkingGame(talkingGame *this)

{
  *(undefined ***)this = &PTR__talkingGame_06936500;
  Sexy::LazySingleton<talkingGame>::~LazySingleton((LazySingleton<talkingGame> *)this);
  return;
}


/* talkingGame::~talkingGame() */

void __thiscall talkingGame::~talkingGame(talkingGame *this)

{
  ~talkingGame(this);
  AK::FreeHook(this);
  return;
}


/* talkingGame::talkingGame() */

void __thiscall talkingGame::talkingGame(talkingGame *this)

{
  long lVar1;
  undefined8 uVar2;
  
  Sexy::LazySingleton<talkingGame>::LazySingleton((LazySingleton<talkingGame> *)this);
  this[8] = (talkingGame)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__talkingGame_06936500;
  *(undefined8 *)(this + 0x18) = 0;
  lVar1 = Android::Util::GetJNIEnv();
  *(long *)(this + 0x10) = lVar1;
  if (lVar1 != 0) {
    FUN_0547429c(&DAT_06b7c788);
    std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)lVar1);
    uVar2 = _JNIEnv::NewGlobalRef(*(_jobject **)(this + 0x10));
    *(undefined8 *)(this + 0x18) = uVar2;
  }
  return;
}

