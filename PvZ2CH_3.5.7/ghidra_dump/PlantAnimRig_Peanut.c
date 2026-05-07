// Class: PlantAnimRig_Peanut


/* PlantAnimRig_Peanut::~PlantAnimRig_Peanut() */

void __thiscall PlantAnimRig_Peanut::~PlantAnimRig_Peanut(PlantAnimRig_Peanut *this)

{
  *(undefined ***)this = &PTR_GetClass_0680a610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peanut_0680a878;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peanut::~PlantAnimRig_Peanut() */

void __thiscall PlantAnimRig_Peanut::~PlantAnimRig_Peanut(PlantAnimRig_Peanut *this)

{
  ~PlantAnimRig_Peanut(this + -0x10);
  return;
}


/* PlantAnimRig_Peanut::~PlantAnimRig_Peanut() */

void __thiscall PlantAnimRig_Peanut::~PlantAnimRig_Peanut(PlantAnimRig_Peanut *this)

{
  ~PlantAnimRig_Peanut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Peanut::~PlantAnimRig_Peanut() */

void __thiscall PlantAnimRig_Peanut::~PlantAnimRig_Peanut(PlantAnimRig_Peanut *this)

{
  ~PlantAnimRig_Peanut(this + -0x10);
  return;
}


/* PlantAnimRig_Peanut::PlantAnimRig_Peanut() */

void __thiscall PlantAnimRig_Peanut::PlantAnimRig_Peanut(PlantAnimRig_Peanut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_0680a610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Peanut_0680a878;
  *(undefined4 *)(this + 0x3bc) = 0xffffffff;
  return;
}


/* PlantAnimRig_Peanut::StaticNew() */

PlantAnimRig_Peanut * PlantAnimRig_Peanut::StaticNew(void)

{
  PlantAnimRig_Peanut *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Peanut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::StaticClassInit() */

void PlantAnimRig_Peanut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Peanut");
    (*pcVar2)(plVar1,asStack_10,FUN_0420c078,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Peanut::StaticGetClass() */

long * PlantAnimRig_Peanut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peanut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Peanut::GetClass() const */

long * PlantAnimRig_Peanut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Peanut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::ShowArmorHelmet(bool, bool, int) */

void __thiscall
PlantAnimRig_Peanut::ShowArmorHelmet
          (PlantAnimRig_Peanut *this,bool param_1,bool param_2,int param_3)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(int *)(this + 0x3b8) == param_3) goto LAB_0420b6a0;
    *(int *)(this + 0x3b8) = param_3;
    std::string::string(asStack_10,"Plantfood_Helmet2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,*(int *)(this + 0x3b8) == 0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Plantfood_Helmet2_Damage2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,*(int *)(this + 0x3b8) == 2);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Plantfood_Helmet2_damage1");
    bVar1 = true;
    if (*(int *)(this + 0x3b8) != 1) goto LAB_0420b63c;
  }
  else {
    *(int *)(this + 0x3b8) = param_3;
    std::string::string(asStack_10,"Plantfood_Helmet2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Plantfood_Helmet2_Damage2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Plantfood_Helmet2_damage1");
LAB_0420b63c:
    bVar1 = false;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"peanut_plantfood_armor");
  bVar1 = false;
  if (param_2) {
    bVar1 = *(int *)(this + 0x3b8) < 3;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
LAB_0420b6a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Peanut::PlayAttack(PlantAnimRig_Peanut *this,RtReflectionDelegate *param_2)

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
  iVar1 = *(int *)(this + 0x22c);
  if (iVar1 == 2) {
    std::string::append(asStack_58,"ATTACK_DAMAGE2",(size_t)__n);
    *(undefined4 *)(this + 0x3bc) = 0;
  }
  else if (iVar1 == 3) {
    std::string::append(asStack_58,"ATTACK_DAMAGE3",(size_t)__n);
    *(undefined4 *)(this + 0x3bc) = 0;
  }
  else if (iVar1 == 1) {
    if (*(int *)(this + 0x3bc) == 1) {
      std::string::append(asStack_58,"ATTACK_DAMAGE1",(size_t)__n);
      *(undefined4 *)(this + 0x3bc) = 0;
    }
    else {
      std::string::append(asStack_58,"ATTACK2_DAMAGE1",(size_t)__n);
      *(undefined4 *)(this + 0x3bc) = 0;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x3bc);
    if (iVar1 == 1) {
      std::string::append(asStack_58,"ATTACK",(size_t)__n);
    }
    else if (iVar1 == 2) {
      std::string::append(asStack_58,"ATTACK3",(size_t)__n);
    }
    else if (iVar1 == 0) {
      std::string::append(asStack_58,"ATTACK2",(size_t)__n);
    }
    else {
      *(undefined4 *)(this + 0x3bc) = 1;
    }
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::PlayIdleLooped() */

void __thiscall PlantAnimRig_Peanut::PlayIdleLooped(PlantAnimRig_Peanut *this)

{
  int iVar1;
  uint uVar2;
  undefined1 *__n;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"");
  nop();
  uVar2 = Sexy::Rand();
  iVar1 = *(int *)(this + 0x22c);
  if (iVar1 == 3) {
    if ((uVar2 & 1) == 0) {
      std::string::append(asStack_40,"IDLE2_DAMAGE3",(size_t)__n);
    }
    else {
      std::string::append(asStack_40,"IDLE_DAMAGE3",(size_t)__n);
    }
  }
  else if (iVar1 == 2) {
    if ((uVar2 & 1) == 0) {
      std::string::append(asStack_40,"IDLE2_DAMAGE2",(size_t)__n);
    }
    else {
      std::string::append(asStack_40,"IDLE_DAMAGE2",(size_t)__n);
    }
  }
  else if (iVar1 == 1) {
    if (uVar2 == ((int)uVar2 / 3) * 3) {
      std::string::append(asStack_40,"IDLE_DAMAGE1",(size_t)__n);
    }
    else if ((int)uVar2 % 3 == 1) {
      std::string::append(asStack_40,"IDL2_DAMAGE1",(size_t)__n);
    }
    else {
      std::string::append(asStack_40,"IDL3_DAMAGE1",(size_t)__n);
    }
  }
  else {
    std::string::append(asStack_40,"IDLE",(size_t)__n);
  }
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  *(undefined4 *)(this + 0x218) = 1;
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::GetArmorLayers() */

void __thiscall PlantAnimRig_Peanut::GetArmorLayers(PlantAnimRig_Peanut *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::string::string(asStack_10,"Plantfood_Helmet2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Plantfood_Helmet2_Damage2");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Plantfood_Helmet2_damage1");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"peanut_plantfood_armor");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Peanut::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Peanut::onPopAnimInitialized(PlantAnimRig_Peanut *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3bc) = 0xffffffff;
  ShowArmorHelmet(this,false,false,-1);
  std::string::string(asStack_10,"peanut_plantfood_armor");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

