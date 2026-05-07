// Class: PlantAnimRig_Mandrake


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::getWaterAnimName() */

void __thiscall PlantAnimRig_Mandrake::getWaterAnimName(PlantAnimRig_Mandrake *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"water");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Mandrake::SetPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantAnimRig_Mandrake::SetPlant(PlantAnimRig_Mandrake *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x3c0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::getPlantFoodMainAnimName() */

void __thiscall PlantAnimRig_Mandrake::getPlantFoodMainAnimName(PlantAnimRig_Mandrake *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::PlayRecoverLooped() */

void __thiscall PlantAnimRig_Mandrake::PlayRecoverLooped(PlantAnimRig_Mandrake *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::getPlantFoodOnAnimName() */

void PlantAnimRig_Mandrake::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "ready_plantfood";
  }
  else {
    __s = "ready_plantfood02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::StaticClassInit() */

void PlantAnimRig_Mandrake::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Mandrake");
    (*pcVar2)(plVar1,asStack_10,FUN_04d52a8c,0x410,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Mandrake::StaticGetClass() */

long * PlantAnimRig_Mandrake::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mandrake",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Mandrake::GetClass() const */

long * PlantAnimRig_Mandrake::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Mandrake",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake() */

void __thiscall PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake(PlantAnimRig_Mandrake *this)

{
  *(undefined ***)this = &PTR_GetClass_069b2440;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mandrake_069b26a8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3f8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3e0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3c8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3c0));
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake() */

void __thiscall PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake(PlantAnimRig_Mandrake *this)

{
  ~PlantAnimRig_Mandrake(this + -0x10);
  return;
}


/* PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake() */

void __thiscall PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake(PlantAnimRig_Mandrake *this)

{
  ~PlantAnimRig_Mandrake(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake() */

void __thiscall PlantAnimRig_Mandrake::~PlantAnimRig_Mandrake(PlantAnimRig_Mandrake *this)

{
  ~PlantAnimRig_Mandrake(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Mandrake::PlantAnimRig_Mandrake() */

void __thiscall PlantAnimRig_Mandrake::PlantAnimRig_Mandrake(PlantAnimRig_Mandrake *this)

{
  string *psVar1;
  string *psVar2;
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b2440;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Mandrake_069b26a8;
  std::string::string((string *)(this + 0x3b8),"idle");
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3c0));
  std::string::string(asStack_b8,"003");
  std::string::string(asStack_b0,"005");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3c8),asStack_b8,2,
             asStack_c0);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  nop();
  nop();
  std::string::string(asStack_b8,"024");
  std::string::string(asStack_b0,"025");
  std::string::string(asStack_a8,"026");
  std::string::string(asStack_a0,"027");
  std::string::string(asStack_98,"028");
  std::string::string(asStack_90,"029");
  std::string::string(asStack_88,"030");
  std::string::string(asStack_80,"031");
  std::string::string(asStack_78,"032");
  std::string::string(asStack_70,"033");
  std::string::string(asStack_68,"036");
  std::string::string(asStack_60,"034");
  std::string::string(asStack_58,"035");
  std::string::string(asStack_50,"037");
  std::string::string(asStack_48,"038");
  std::string::string(asStack_40,"039");
  std::string::string(asStack_38,"040");
  std::string::string(asStack_30,"041");
  std::string::string(asStack_28,"042");
  std::string::string(asStack_20,"043");
  std::string::string(asStack_18,"044");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3e0),asStack_b8,0x15,
             asStack_c0);
  psVar2 = asStack_18;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_b8,"001");
  std::string::string(asStack_b0,"002");
  std::string::string(asStack_a8,"004");
  std::string::string(asStack_a0,"006");
  std::string::string(asStack_98,"007");
  std::string::string(asStack_90,"008");
  std::string::string(asStack_88,"009");
  std::string::string(asStack_80,"010");
  std::string::string(asStack_78,"011");
  std::string::string(asStack_70,"012");
  std::string::string(asStack_68,"013");
  std::string::string(asStack_60,"014");
  std::string::string(asStack_58,"015");
  std::string::string(asStack_50,"016");
  std::string::string(asStack_48,"017");
  std::string::string(asStack_40,"018");
  std::string::string(asStack_38,"019");
  std::string::string(asStack_30,"020");
  std::string::string(asStack_28,"021");
  std::string::string(asStack_20,"022");
  std::string::string(asStack_18,"023");
  std::string::string(asStack_10,"024");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3f8),asStack_b8,0x16,
             asStack_c0);
  psVar2 = asStack_10;
  do {
    psVar1 = psVar2 + -8;
    std::string::~string(psVar2);
    psVar2 = psVar1;
  } while (psVar1 != asStack_c0);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Mandrake::StaticNew() */

PlantAnimRig_Mandrake * PlantAnimRig_Mandrake::StaticNew(void)

{
  PlantAnimRig_Mandrake *this;
  
  this = ::operator_new(0x410);
  PlantAnimRig_Mandrake(this);
  return this;
}


/* PlantAnimRig_Mandrake::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Mandrake::onPopAnimInitialized(PlantAnimRig_Mandrake *this)

{
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(vector *)(this + 0x3c8),false);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(vector *)(this + 0x3f8),false);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(vector *)(this + 0x3e0),false);
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  return;
}

