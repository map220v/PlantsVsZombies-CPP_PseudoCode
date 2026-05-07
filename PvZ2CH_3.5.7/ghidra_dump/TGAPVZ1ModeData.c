// Class: TGAPVZ1ModeData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAPVZ1ModeData::TGAPVZ1ModeData() */

void __thiscall TGAPVZ1ModeData::TGAPVZ1ModeData(TGAPVZ1ModeData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::string::string((string *)(this + 0x40),"");
  nop();
  std::string::string((string *)(this + 0x48),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGAPVZ1ModeData::~TGAPVZ1ModeData() */

void __thiscall TGAPVZ1ModeData::~TGAPVZ1ModeData(TGAPVZ1ModeData *this)

{
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}

