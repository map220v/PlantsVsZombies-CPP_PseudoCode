// Class: PlantAnimRig_Puffshroom


/* PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom() */

void __thiscall PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom(PlantAnimRig_Puffshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067a0350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Puffshroom_067a05b8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom() */

void __thiscall PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom(PlantAnimRig_Puffshroom *this)

{
  ~PlantAnimRig_Puffshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom() */

void __thiscall PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom(PlantAnimRig_Puffshroom *this)

{
  ~PlantAnimRig_Puffshroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom() */

void __thiscall PlantAnimRig_Puffshroom::~PlantAnimRig_Puffshroom(PlantAnimRig_Puffshroom *this)

{
  ~PlantAnimRig_Puffshroom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Puffshroom::StaticClassInit() */

void PlantAnimRig_Puffshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Puffshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03f64eb4,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Puffshroom::StaticGetClass() */

long * PlantAnimRig_Puffshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Puffshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Puffshroom::GetClass() const */

long * PlantAnimRig_Puffshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Puffshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Puffshroom::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Puffshroom::PlayAttack(PlantAnimRig_Puffshroom *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("special_stage%d",asStack_58,(ulong)(*(int *)(this + 0x3b8) + 1));
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
  *(undefined4 *)(this + 0x218) = 2;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Puffshroom::Vanish(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Puffshroom::Vanish(PlantAnimRig_Puffshroom *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"idle_stage4");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Puffshroom::SetLevel(int) */

void __thiscall PlantAnimRig_Puffshroom::SetLevel(PlantAnimRig_Puffshroom *this,int param_1)

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
  lVar2 = FUN_03f6499c(*(undefined8 *)(this + 0x20));
  Sexy::PASpriteDef::GetLabelFrameRange
            (*(PASpriteDef **)(*(long *)(lVar2 + 0x50) + 0x18),(string *)(lVar2 + 0x48),local_58,
             local_58 + 1);
  lVar2 = FUN_03f6499c(*(undefined8 *)(this + 0x20));
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
  lVar2 = FUN_03f6499c(*(undefined8 *)(this + 0x20));
  *(float *)(*(long *)(lVar2 + 0x50) + 0xc) =
       (fVar4 + *(float *)(*(long *)(lVar2 + 0x50) + 0xc)) - fVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Puffshroom::PlantAnimRig_Puffshroom() */

void __thiscall PlantAnimRig_Puffshroom::PlantAnimRig_Puffshroom(PlantAnimRig_Puffshroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067a0350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Puffshroom_067a05b8;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_Puffshroom::StaticNew() */

PlantAnimRig_Puffshroom * PlantAnimRig_Puffshroom::StaticNew(void)

{
  PlantAnimRig_Puffshroom *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Puffshroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Puffshroom::PlayIdleLooped() */

void __thiscall PlantAnimRig_Puffshroom::PlayIdleLooped(PlantAnimRig_Puffshroom *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 1;
  local_8 = ___stack_chk_guard;
  pickIdleAnimation(*(int *)(this + 0x3b8));
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

