// Class: GridItemRenaiTileAnimRig


/* GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig() */

void __thiscall GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig(GridItemRenaiTileAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06763ea0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiTileAnimRig_06763fc0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig() */

void __thiscall GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig(GridItemRenaiTileAnimRig *this)

{
  ~GridItemRenaiTileAnimRig(this + -0x10);
  return;
}


/* GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig() */

void __thiscall GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig(GridItemRenaiTileAnimRig *this)

{
  ~GridItemRenaiTileAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig() */

void __thiscall GridItemRenaiTileAnimRig::~GridItemRenaiTileAnimRig(GridItemRenaiTileAnimRig *this)

{
  ~GridItemRenaiTileAnimRig(this + -0x10);
  return;
}


/* GridItemRenaiTileAnimRig::GridItemRenaiTileAnimRig() */

void __thiscall GridItemRenaiTileAnimRig::GridItemRenaiTileAnimRig(GridItemRenaiTileAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06763ea0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiTileAnimRig_06763fc0;
  return;
}


/* GridItemRenaiTileAnimRig::StaticNew() */

GridItemRenaiTileAnimRig * GridItemRenaiTileAnimRig::StaticNew(void)

{
  GridItemRenaiTileAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRenaiTileAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTileAnimRig::StaticClassInit() */

void GridItemRenaiTileAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiTileAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0e278,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiTileAnimRig::StaticGetClass() */

long * GridItemRenaiTileAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiTileAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiTileAnimRig::GetClass() const */

long * GridItemRenaiTileAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiTileAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTileAnimRig::PlayTilePushStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemRenaiTileAnimRig::PlayTilePushStart
          (GridItemRenaiTileAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"pushing");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTileAnimRig::PlayTilePullStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemRenaiTileAnimRig::PlayTilePullStart
          (GridItemRenaiTileAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"pulling");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTileAnimRig::PlayTilePushed() */

void __thiscall GridItemRenaiTileAnimRig::PlayTilePushed(GridItemRenaiTileAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"pushed");
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

