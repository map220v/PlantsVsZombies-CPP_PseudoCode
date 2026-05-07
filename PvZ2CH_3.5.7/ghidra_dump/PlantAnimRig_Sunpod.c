// Class: PlantAnimRig_Sunpod


/* PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod() */

void __thiscall PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod(PlantAnimRig_Sunpod *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1630;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunpod_067a1898;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod() */

void __thiscall PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod(PlantAnimRig_Sunpod *this)

{
  ~PlantAnimRig_Sunpod(this + -0x10);
  return;
}


/* PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod() */

void __thiscall PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod(PlantAnimRig_Sunpod *this)

{
  ~PlantAnimRig_Sunpod(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod() */

void __thiscall PlantAnimRig_Sunpod::~PlantAnimRig_Sunpod(PlantAnimRig_Sunpod *this)

{
  ~PlantAnimRig_Sunpod(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunpod::StaticClassInit() */

void PlantAnimRig_Sunpod::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sunpod");
    (*pcVar2)(plVar1,asStack_10,FUN_03f678a0,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sunpod::StaticGetClass() */

long * PlantAnimRig_Sunpod::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Sunpod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sunpod::GetClass() const */

long * PlantAnimRig_Sunpod::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Sunpod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunpod::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Sunpod::PlayAttack(PlantAnimRig_Sunpod *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  switch(*(undefined4 *)(this + 0x3b8)) {
  case 0:
    std::string::append(asStack_58,"attack",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_58,"attack 2",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_58,"attack 3",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_58,"attack 4",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_58,"attack 5",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(int *)(this + 0x3bc) = iVar1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3c0),param_2);
  PlantAnimRig::SetState((PlantAnimRig *)this,2);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunpod::SetLevel(int) */

void __thiscall PlantAnimRig_Sunpod::SetLevel(PlantAnimRig_Sunpod *this,int param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_58[0] = -1;
  local_58[1] = 0xffffffff;
  *(int *)(this + 0x3b8) = param_1;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03f672dc(*(undefined8 *)(this + 0x20));
  Sexy::PASpriteDef::GetLabelFrameRange
            (*(PASpriteDef **)(*(long *)(lVar2 + 0x50) + 0x18),(string *)(lVar2 + 0x48),local_58,
             local_58 + 1);
  lVar2 = FUN_03f672dc(*(undefined8 *)(this + 0x20));
  fVar4 = *(float *)(*(long *)(lVar2 + 0x50) + 0xc);
  fVar5 = (float)local_58[0];
  cVar1 = PopAnimRig::IsAnimActive((PopAnimRig *)this,*(undefined4 *)(this + 0x3bc));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtReflectionDelegate *)(this + 0x3c0));
    (*pcVar3)(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  lVar2 = FUN_03f672dc(*(undefined8 *)(this + 0x20));
  *(float *)(*(long *)(lVar2 + 0x50) + 0xc) =
       (fVar4 + *(float *)(*(long *)(lVar2 + 0x50) + 0xc)) - fVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sunpod::PlantAnimRig_Sunpod() */

void __thiscall PlantAnimRig_Sunpod::PlantAnimRig_Sunpod(PlantAnimRig_Sunpod *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a1630;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sunpod_067a1898;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3c0));
  *(undefined4 *)(this + 0x3b8) = 0;
  return;
}


/* PlantAnimRig_Sunpod::StaticNew() */

PlantAnimRig_Sunpod * PlantAnimRig_Sunpod::StaticNew(void)

{
  PlantAnimRig_Sunpod *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Sunpod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sunpod::PlayIdleLooped() */

void __thiscall PlantAnimRig_Sunpod::PlayIdleLooped(PlantAnimRig_Sunpod *this)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"");
  nop();
  switch(*(undefined4 *)(this + 0x3b8)) {
  case 0:
    std::string::append(asStack_40,"idle",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_40,"idle2",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_40,"idle3",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_40,"idle4",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_40,"idle5",(size_t)__n);
  }
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,1);
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

