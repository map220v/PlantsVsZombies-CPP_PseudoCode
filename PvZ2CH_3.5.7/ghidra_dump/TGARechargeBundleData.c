// Class: TGARechargeBundleData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGARechargeBundleData::TGARechargeBundleData() */

void __thiscall TGARechargeBundleData::TGARechargeBundleData(TGARechargeBundleData *this)

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
  std::string::string((string *)(this + 0x28),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGARechargeBundleData::~TGARechargeBundleData() */

void __thiscall TGARechargeBundleData::~TGARechargeBundleData(TGARechargeBundleData *this)

{
  std::vector<TGABundle,std::allocator<TGABundle>>::~vector
            ((vector<TGABundle,std::allocator<TGABundle>> *)(this + 0x48));
  std::vector<TGABundle,std::allocator<TGABundle>>::~vector
            ((vector<TGABundle,std::allocator<TGABundle>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* TGARechargeBundleData::TGARechargeBundleData(TGARechargeBundleData const&) */

void __thiscall
TGARechargeBundleData::TGARechargeBundleData
          (TGARechargeBundleData *this,TGARechargeBundleData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  std::vector<TGABundle,std::allocator<TGABundle>>::vector
            ((vector<TGABundle,std::allocator<TGABundle>> *)(this + 0x30),(vector *)(param_1 + 0x30)
            );
  std::vector<TGABundle,std::allocator<TGABundle>>::vector
            ((vector<TGABundle,std::allocator<TGABundle>> *)(this + 0x48),(vector *)(param_1 + 0x48)
            );
  return;
}

