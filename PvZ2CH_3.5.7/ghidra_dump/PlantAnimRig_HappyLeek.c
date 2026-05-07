// Class: PlantAnimRig_HappyLeek


/* PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek() */

void __thiscall PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek(PlantAnimRig_HappyLeek *this)

{
  *(undefined ***)this = &PTR_GetClass_067a7510;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HappyLeek_067a7778;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek() */

void __thiscall PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek(PlantAnimRig_HappyLeek *this)

{
  ~PlantAnimRig_HappyLeek(this + -0x10);
  return;
}


/* PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek() */

void __thiscall PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek(PlantAnimRig_HappyLeek *this)

{
  ~PlantAnimRig_HappyLeek(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek() */

void __thiscall PlantAnimRig_HappyLeek::~PlantAnimRig_HappyLeek(PlantAnimRig_HappyLeek *this)

{
  ~PlantAnimRig_HappyLeek(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::PlantAnimRig_HappyLeek() */

void __thiscall PlantAnimRig_HappyLeek::PlantAnimRig_HappyLeek(PlantAnimRig_HappyLeek *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a7510;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HappyLeek_067a7778;
  std::string::string((string *)(this + 0x3b8),"young_idle");
  nop();
  *(undefined4 *)(this + 0x3c0) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HappyLeek::StaticNew() */

PlantAnimRig_HappyLeek * PlantAnimRig_HappyLeek::StaticNew(void)

{
  PlantAnimRig_HappyLeek *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_HappyLeek(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::StaticClassInit() */

void PlantAnimRig_HappyLeek::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HappyLeek");
    (*pcVar2)(plVar1,asStack_10,FUN_03fae3c0,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HappyLeek::StaticGetClass() */

long * PlantAnimRig_HappyLeek::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HappyLeek",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HappyLeek::GetClass() const */

long * PlantAnimRig_HappyLeek::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HappyLeek",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::PlayGrow(int, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_HappyLeek::PlayGrow
          (PlantAnimRig_HappyLeek *this,int param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  if (param_1 == 2) {
    std::string::append(asStack_58,"old_hf",(size_t)__n);
  }
  else if (param_1 == 3) {
    std::string::append(asStack_58,"baby_young",(size_t)__n);
  }
  else if (param_1 == 1) {
    std::string::append(asStack_58,"old_hf02",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::PlayTapAttack(int, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HappyLeek::PlayTapAttack
          (PlantAnimRig_HappyLeek *this,undefined4 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  switch(param_1) {
  case 0:
    std::string::append(asStack_58,"old_kc",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_58,"old_kc_ss01",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_58,"old_kc_ss02",(size_t)__n);
    break;
  case 0xffffffff:
    std::string::append(asStack_58,"old_kc_ss03",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::PlayTapProduceSun(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_HappyLeek::PlayTapProduceSun
          (PlantAnimRig_HappyLeek *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"old_sun01");
  nop();
  if (*(int *)(this + 0x3c0) == 1) {
    std::string::append(asStack_58,"old_sun02",(size_t)__n);
  }
  else if (*(int *)(this + 0x3c0) == 2) {
    std::string::append(asStack_58,"old_sun03",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_HappyLeek::getIdleAnimationName() */

void PlantAnimRig_HappyLeek::getIdleAnimationName(void)

{
  bool bVar1;
  long in_x0;
  size_t in_x2;
  string *in_x8;
  
  FUN_05475d88();
  bVar1 = std::operator==((string *)(in_x0 + 0x3b8),"old_idle");
  if (bVar1) {
    if (*(int *)(in_x0 + 0x3c0) == 1) {
      std::string::append(in_x8,"old_idle_ss01",in_x2);
      return;
    }
    if (*(int *)(in_x0 + 0x3c0) == 2) {
      std::string::append(in_x8,"old_idle_ss02",in_x2);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::getWaterAnimName() */

void PlantAnimRig_HappyLeek::getWaterAnimName(void)

{
  string *psVar1;
  int iVar2;
  bool bVar3;
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(in_x0 + 0x3b8);
  std::string::string(in_x8,"water");
  nop();
  bVar3 = std::operator==(psVar1,"young_idle");
  if (bVar3) {
    std::string::append(in_x8,"water",(size_t)__n);
  }
  else {
    bVar3 = std::operator==(psVar1,"baby_idle");
    if (bVar3) {
      std::string::append(in_x8,"baby_idle",(size_t)__n);
    }
    else {
      bVar3 = std::operator==(psVar1,"old_idle");
      if (bVar3) {
        iVar2 = *(int *)(in_x0 + 0x3c0);
        if (iVar2 == 1) {
          std::string::append(in_x8,"old_water_02",(size_t)__n);
        }
        else if (iVar2 == 2) {
          std::string::append(in_x8,"old_water_03",(size_t)__n);
        }
        else if (iVar2 == 0) {
          std::string::append(in_x8,"old_water",(size_t)__n);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::getPlantFoodOnAnimName() */

void PlantAnimRig_HappyLeek::getPlantFoodOnAnimName(void)

{
  string *psVar1;
  bool bVar2;
  long in_x0;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(in_x0 + 0x3b8);
  std::string::string(asStack_10,"old_sun_plantfood");
  nop();
  bVar2 = std::operator==(psVar1,"young_idle");
  if (bVar2) {
    std::string::string(in_x8,"young_plantfood");
    nop();
  }
  else {
    bVar2 = std::operator==(psVar1,"baby_idle");
    if (bVar2) {
      std::string::string(in_x8,"baby_plantfood");
      nop();
    }
    else {
      bVar2 = std::operator==(psVar1,"old_idle");
      if (bVar2) {
        std::string::string(in_x8,"old_sun_plantfood");
        nop();
      }
      else {
        FUN_05474148();
      }
    }
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HappyLeek::playPlantFoodOn() */

void __thiscall PlantAnimRig_HappyLeek::playPlantFoodOn(PlantAnimRig_HappyLeek *this)

{
  undefined1 uVar1;
  int iVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x200))(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  uVar1 = 1;
  if (iVar2 == -1) {
    uVar1 = (**(code **)(*(long *)this + 400))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

