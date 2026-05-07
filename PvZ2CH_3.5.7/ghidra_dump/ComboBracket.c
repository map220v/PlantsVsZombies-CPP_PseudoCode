// Class: ComboBracket


/* ComboBracket::~ComboBracket() */

void __thiscall ComboBracket::~ComboBracket(ComboBracket *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* ComboBracket::ComboBracket() */

void __thiscall ComboBracket::ComboBracket(ComboBracket *this)

{
  Sexy::Color::Color((Color *)(this + 8));
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ComboBracket::ComboBracket(ComboBracket const&) */

void __thiscall ComboBracket::ComboBracket(ComboBracket *this,ComboBracket *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 8),(Insets *)(param_1 + 8));
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}

