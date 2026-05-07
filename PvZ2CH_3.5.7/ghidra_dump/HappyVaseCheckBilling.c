// Class: HappyVaseCheckBilling


/* HappyVaseCheckBilling::~HappyVaseCheckBilling() */

void __thiscall HappyVaseCheckBilling::~HappyVaseCheckBilling(HappyVaseCheckBilling *this)

{
  *(undefined ***)this = &PTR__HappyVaseCheckBilling_067119d0;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 8));
  Sexy::LazySingleton<HappyVaseCheckBilling>::~LazySingleton
            ((LazySingleton<HappyVaseCheckBilling> *)this);
  return;
}


/* HappyVaseCheckBilling::~HappyVaseCheckBilling() */

void __thiscall HappyVaseCheckBilling::~HappyVaseCheckBilling(HappyVaseCheckBilling *this)

{
  ~HappyVaseCheckBilling(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseCheckBilling::CheckBillingPoint(std::string const&) */

void __thiscall
HappyVaseCheckBilling::CheckBillingPoint(HappyVaseCheckBilling *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find(this_00,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    piVar2 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::at(this_00,param_1);
    if (local_8 == ___stack_chk_guard) {
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::GemsRecharge,*piVar2);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseCheckBilling::HappyVaseCheckBilling() */

void __thiscall HappyVaseCheckBilling::HappyVaseCheckBilling(HappyVaseCheckBilling *this)

{
  undefined4 *puVar1;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<HappyVaseCheckBilling>::LazySingleton
            ((LazySingleton<HappyVaseCheckBilling> *)this);
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 8);
  *(undefined ***)this = &PTR__HappyVaseCheckBilling_067119d0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)this_00);
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds3");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x14;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds4");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x69;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds5");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0xd7;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds6");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x14a;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds700");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 800;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds1500");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x6a4;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds3000");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0xd7a;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds6000");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 7000;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds7500");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x238c;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SpecialBundle");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x1e0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.NewcomerBundle05");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x32;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.NewcomerBundle06");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 100;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.diamonds.newer.present");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 10;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle12");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x96;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle30");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x15e;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle45");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 500;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle68");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 700;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle128 ");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 1000;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle348");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0xce4;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.EndlessBundle388");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 600;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SecretBundle01");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 10;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SecretBundle02");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0x32;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SecretBundle03");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 0xfa;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SecretBundle04");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 600;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SecretBundle05");
  puVar1 = (undefined4 *)
           std::
           map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         *)this_00,asStack_10);
  *puVar1 = 200;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

