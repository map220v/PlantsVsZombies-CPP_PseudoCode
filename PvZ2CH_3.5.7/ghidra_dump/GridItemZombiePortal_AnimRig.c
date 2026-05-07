// Class: GridItemZombiePortal_AnimRig


/* GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig() */

void __thiscall
GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig(GridItemZombiePortal_AnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0676da80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePortal_AnimRig_0676dba0;
  std::string::~string((string *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig() */

void __thiscall
GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig(GridItemZombiePortal_AnimRig *this)

{
  ~GridItemZombiePortal_AnimRig(this + -0x10);
  return;
}


/* GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig() */

void __thiscall
GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig(GridItemZombiePortal_AnimRig *this)

{
  ~GridItemZombiePortal_AnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig() */

void __thiscall
GridItemZombiePortal_AnimRig::~GridItemZombiePortal_AnimRig(GridItemZombiePortal_AnimRig *this)

{
  ~GridItemZombiePortal_AnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal_AnimRig::StaticClassInit() */

void GridItemZombiePortal_AnimRig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"GridItemZombiePortal_AnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d65bc4,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombiePortal_AnimRig::StaticGetClass() */

long * GridItemZombiePortal_AnimRig::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePortal_AnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePortal_AnimRig::GetClass() const */

long * GridItemZombiePortal_AnimRig::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombiePortal_AnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombiePortal_AnimRig::GridItemZombiePortal_AnimRig() */

void __thiscall
GridItemZombiePortal_AnimRig::GridItemZombiePortal_AnimRig(GridItemZombiePortal_AnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined ***)this = &PTR_GetClass_0676da80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombiePortal_AnimRig_0676dba0;
  Set8BytesTo0(this + 0x218);
  return;
}


/* GridItemZombiePortal_AnimRig::StaticNew() */

GridItemZombiePortal_AnimRig * GridItemZombiePortal_AnimRig::StaticNew(void)

{
  GridItemZombiePortal_AnimRig *this;
  
  this = ::operator_new(0x220);
  GridItemZombiePortal_AnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal_AnimRig::PlayOpen(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemZombiePortal_AnimRig::PlayOpen
          (GridItemZombiePortal_AnimRig *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 1;
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal_AnimRig::PlayClose(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemZombiePortal_AnimRig::PlayClose
          (GridItemZombiePortal_AnimRig *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 3;
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal_AnimRig::PlayIdle() */

void __thiscall GridItemZombiePortal_AnimRig::PlayIdle(GridItemZombiePortal_AnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 2;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombiePortal_AnimRig::ShowPortalLayers(std::string) */

void __thiscall
GridItemZombiePortal_AnimRig::ShowPortalLayers(GridItemZombiePortal_AnimRig *this,string *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  PACommand *this_00;
  string asStack_c8 [8];
  string asStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  pair<std::string_const,std::string> apStack_a8 [16];
  pair<std::string_const,std::string> apStack_98 [16];
  pair<std::string_const,std::string> apStack_88 [16];
  pair<std::string_const,std::string> apStack_78 [16];
  pair<std::string_const,std::string> apStack_68 [16];
  pair<std::string_const,std::string> apStack_58 [16];
  pair<std::string_const,std::string> apStack_48 [16];
  pair<std::string_const,std::string> apStack_38 [16];
  pair<std::string_const,std::string> apStack_28 [16];
  pair<std::string_const,std::string> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_c8,"portal_window_");
  nop();
  if (((DAT_06ad8128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad8128), iVar2 != 0)) {
    this_00 = (PACommand *)&local_8;
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_a8,"egypt","egypt");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_98,"eighties","80s");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_88,"beach","beach");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_78,"dark","darkages");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_68,"dino","dino");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_58,"future","futureworld");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_48,"iceage","iceage");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_38,"lostcity","lostcity");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_28,"pirate","pirate");
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],char_const(&)[2],void>
              (apStack_18,"west","wildwest");
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           *)&DAT_06ad81e8,apStack_a8,10,&local_b8,(string *)&local_b0);
    __cxa_guard_release(&DAT_06ad8128);
    __cxa_atexit(std::
                 map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::~map,&DAT_06ad81e8,&DAT_06a88000);
    do {
      this_00 = this_00 + -0x10;
      Sexy::PACommand::~PACommand(this_00);
    } while (this_00 != (PACommand *)apStack_a8);
  }
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)&DAT_06ad81e8,param_2);
  FUN_05475d88(asStack_c0,uVar3);
  thunk_FUN_05475e00(this + 0x218,param_2);
  local_b8 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                      *)&DAT_06ad81e8);
  while( true ) {
    local_b0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06ad81e8);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)&local_b0);
    if (!bVar1) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b8);
    FUN_031dcc6c((string *)&local_b0,asStack_c8,lVar4 + 8);
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b8);
    bVar1 = (bool)std::operator==((string *)(lVar4 + 8),asStack_c0);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)&local_b0,bVar1);
    std::string::~string((string *)&local_b0);
    FUN_03d65600((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b8);
  }
  std::string::~string(asStack_c0);
  std::string::~string(asStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

