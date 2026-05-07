// Class: Sexy::ResStreamsManager::RSBDesc


/* Sexy::ResStreamsManager::RSBDesc::RSBDesc() */

void __thiscall Sexy::ResStreamsManager::RSBDesc::RSBDesc(RSBDesc *this)

{
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  CompiledMap::CompiledMap((CompiledMap *)(this + 0x30));
  CompiledMap::CompiledMap((CompiledMap *)(this + 0x40));
  CompiledMap::CompiledMap((CompiledMap *)(this + 0x50));
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}


/* Sexy::ResStreamsManager::RSBDesc::~RSBDesc() */

void __thiscall Sexy::ResStreamsManager::RSBDesc::~RSBDesc(RSBDesc *this)

{
  ResStreamsGroup *pRVar1;
  ResStreamsPool *pRVar2;
  ResStreamsGroup *this_00;
  ResStreamsPool *this_01;
  
  if (*(ColourFit **)(this + 0x20) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x20));
  }
  pRVar1 = *(ResStreamsGroup **)(this + 0x68);
  if (pRVar1 != (ResStreamsGroup *)0x0) {
    this_00 = pRVar1 + *(long *)(pRVar1 + -8) * 0xc0;
    if (pRVar1 != this_00) {
      do {
        this_00 = this_00 + -0xc0;
        ResStreamsGroup::~ResStreamsGroup(this_00);
      } while (*(ResStreamsGroup **)(this + 0x68) != this_00);
    }
    EATextSquish::ColourFit::~ColourFit((ColourFit *)(this_00 + -8));
  }
  pRVar2 = *(ResStreamsPool **)(this + 0x78);
  if (pRVar2 != (ResStreamsPool *)0x0) {
    this_01 = pRVar2 + *(long *)(pRVar2 + -8) * 0x58;
    if (pRVar2 != this_01) {
      do {
        this_01 = this_01 + -0x58;
        ResStreamsPool::~ResStreamsPool(this_01);
      } while (*(ResStreamsPool **)(this + 0x78) != this_01);
    }
    EATextSquish::ColourFit::~ColourFit((ColourFit *)(this_01 + -8));
  }
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}

