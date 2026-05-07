// Class: PlantAnimRig_Dendrobiumguard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::StaticClassInit() */

void PlantAnimRig_Dendrobiumguard::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Dendrobiumguard");
    (*pcVar2)(plVar1,asStack_10,FUN_04ced9a4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dendrobiumguard::StaticGetClass() */

long * PlantAnimRig_Dendrobiumguard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dendrobiumguard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dendrobiumguard::GetClass() const */

long * PlantAnimRig_Dendrobiumguard::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dendrobiumguard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::SetLeafLayer(int) */

void __thiscall
PlantAnimRig_Dendrobiumguard::SetLeafLayer(PlantAnimRig_Dendrobiumguard *this,int param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Right-handed_eaf3");
  bVar1 = 0 < param_1;
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Right-handed_leaf2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Right-handed_leaf_10");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Right-handed_leaf_3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Right-handed_leaf_2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Right-handed_leaf_1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Left-handedleaf5");
  bVar1 = 1 < param_1;
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Left-handedleaf4");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Left-handedleaf3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Left-handedleaf2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Left-handedleaf1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life4");
  bVar1 = 2 < param_1;
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life5");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life_23");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life_24");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"the_leaves_on_his_head1");
  bVar1 = 3 < param_1;
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"the_leaves_on_his_head2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life99");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"life_25");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::SetJointDefenceStatus(bool) */

void __thiscall
PlantAnimRig_Dendrobiumguard::SetJointDefenceStatus(PlantAnimRig_Dendrobiumguard *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"rock10");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"rock20");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard() */

void __thiscall
PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard(PlantAnimRig_Dendrobiumguard *this)

{
  *(undefined ***)this = &PTR_GetClass_069a3450;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dendrobiumguard_069a36b8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard() */

void __thiscall
PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard(PlantAnimRig_Dendrobiumguard *this)

{
  ~PlantAnimRig_Dendrobiumguard(this + -0x10);
  return;
}


/* PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard() */

void __thiscall
PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard(PlantAnimRig_Dendrobiumguard *this)

{
  ~PlantAnimRig_Dendrobiumguard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard() */

void __thiscall
PlantAnimRig_Dendrobiumguard::~PlantAnimRig_Dendrobiumguard(PlantAnimRig_Dendrobiumguard *this)

{
  ~PlantAnimRig_Dendrobiumguard(this + -0x10);
  return;
}


/* PlantAnimRig_Dendrobiumguard::PlantAnimRig_Dendrobiumguard() */

void __thiscall
PlantAnimRig_Dendrobiumguard::PlantAnimRig_Dendrobiumguard(PlantAnimRig_Dendrobiumguard *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a3450;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dendrobiumguard_069a36b8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Dendrobiumguard::StaticNew() */

PlantAnimRig_Dendrobiumguard * PlantAnimRig_Dendrobiumguard::StaticNew(void)

{
  PlantAnimRig_Dendrobiumguard *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Dendrobiumguard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::getIdleAnimationName() */

void PlantAnimRig_Dendrobiumguard::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  long extraout_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    iVar3 = FUN_04ceb598(*(undefined4 *)(extraout_x0 + 0x28));
    if (iVar3 < 1) {
      __s = "idle0";
    }
    else {
      __s = "idle";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  else {
    std::string::string(in_x8,"idle");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::getWaterAnimName() */

void PlantAnimRig_Dendrobiumguard::getWaterAnimName(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_x0;
  long extraout_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    iVar3 = FUN_04ceb598(*(undefined4 *)(extraout_x0 + 0x28));
    if (iVar3 < 1) {
      __s = "water0";
    }
    else {
      __s = "water";
    }
    std::string::string(in_x8,__s);
    nop();
  }
  else {
    std::string::string(in_x8,"water");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dendrobiumguard::onPopAnimInitialized() */

void __thiscall
PlantAnimRig_Dendrobiumguard::onPopAnimInitialized(PlantAnimRig_Dendrobiumguard *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"rock10");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"rock20");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

