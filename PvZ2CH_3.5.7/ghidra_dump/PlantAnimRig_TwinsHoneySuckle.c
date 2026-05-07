// Class: PlantAnimRig_TwinsHoneySuckle


/* PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle() */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle(PlantAnimRig_TwinsHoneySuckle *this)

{
  *(undefined ***)this = &PTR_GetClass_069b05d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TwinsHoneySuckle_069b0838;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle() */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle(PlantAnimRig_TwinsHoneySuckle *this)

{
  ~PlantAnimRig_TwinsHoneySuckle(this + -0x10);
  return;
}


/* PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle() */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle(PlantAnimRig_TwinsHoneySuckle *this)

{
  ~PlantAnimRig_TwinsHoneySuckle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle() */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::~PlantAnimRig_TwinsHoneySuckle(PlantAnimRig_TwinsHoneySuckle *this)

{
  ~PlantAnimRig_TwinsHoneySuckle(this + -0x10);
  return;
}


/* PlantAnimRig_TwinsHoneySuckle::GetPlantFoodMainAnimName() */

void PlantAnimRig_TwinsHoneySuckle::GetPlantFoodMainAnimName(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0x208))();
  return;
}


/* PlantAnimRig_TwinsHoneySuckle::PlantAnimRig_TwinsHoneySuckle() */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::PlantAnimRig_TwinsHoneySuckle(PlantAnimRig_TwinsHoneySuckle *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b05d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TwinsHoneySuckle_069b0838;
  return;
}


/* PlantAnimRig_TwinsHoneySuckle::StaticNew() */

PlantAnimRig_TwinsHoneySuckle * PlantAnimRig_TwinsHoneySuckle::StaticNew(void)

{
  PlantAnimRig_TwinsHoneySuckle *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_TwinsHoneySuckle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::StaticClassInit() */

void PlantAnimRig_TwinsHoneySuckle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TwinsHoneySuckle");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4137c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TwinsHoneySuckle::StaticGetClass() */

long * PlantAnimRig_TwinsHoneySuckle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TwinsHoneySuckle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TwinsHoneySuckle::GetClass() const */

long * PlantAnimRig_TwinsHoneySuckle::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TwinsHoneySuckle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::onSetFollowerLayerVisibility(std::string const&, bool) */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::onSetFollowerLayerVisibility
          (PlantAnimRig_TwinsHoneySuckle *this,string *param_1,bool param_2)

{
  RtObject *this_00;
  PopAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) != 0) {
    Sexy::RtObject::Cast<PlantTwinsHoneySuckle>(*(RtObject **)(*(long *)(this + 0x210) + 0xa8));
    PlantTwinsHoneySuckle::GetAssistPerson();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Sexy::RtObject::Cast<TwinsAssistPerson>(this_00);
    TwinsAssistPerson::GetPopAnimRig();
    this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    PopAnimRig::SetLayerVisibility(this_01,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::getIdleAnimationName() */

void PlantAnimRig_TwinsHoneySuckle::getIdleAnimationName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  PlantTwinsHoneySuckle *pPVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x210) != 0) {
    pPVar3 = Sexy::RtObject::Cast<PlantTwinsHoneySuckle>
                       (*(RtObject **)(*(long *)(in_x0 + 0x210) + 0xa8));
    iVar2 = FUN_04d3fc14(*(undefined4 *)(pPVar3 + 0x3c));
    if (iVar2 == 0) {
      std::string::string(in_x8,"idle_ty");
      nop();
      goto LAB_04d43b98;
    }
    if (iVar2 == 1) {
      std::string::string(in_x8,"idle_yl");
      nop();
      goto LAB_04d43b98;
    }
  }
  std::string::string(in_x8,"idle_ht");
  nop();
LAB_04d43b98:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::getPlantFoodMainAnimName() */

void PlantAnimRig_TwinsHoneySuckle::getPlantFoodMainAnimName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  PlantTwinsHoneySuckle *pPVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x210) != 0) {
    pPVar3 = Sexy::RtObject::Cast<PlantTwinsHoneySuckle>
                       (*(RtObject **)(*(long *)(in_x0 + 0x210) + 0xa8));
    iVar2 = FUN_04d3fc14(*(undefined4 *)(pPVar3 + 0x3c));
    if (iVar2 == 0) {
      std::string::string(in_x8,"plantfood_ty");
      nop();
      goto LAB_04d43c74;
    }
    if (iVar2 == 1) {
      std::string::string(in_x8,"plantfood_yl");
      nop();
      goto LAB_04d43c74;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_04d43c74:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::AssistPlayAnim(std::string const&) */

void __thiscall
PlantAnimRig_TwinsHoneySuckle::AssistPlayAnim(PlantAnimRig_TwinsHoneySuckle *this,string *param_1)

{
  RtObject *this_00;
  TwinsAssistPerson *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::Cast<PlantTwinsHoneySuckle>(*(RtObject **)(*(long *)(this + 0x210) + 0xa8));
  PlantTwinsHoneySuckle::GetAssistPerson();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<TwinsAssistPerson>(this_00);
  TwinsAssistPerson::PlayAnim(this_01,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TwinsHoneySuckle::getWaterAnimName() */

void PlantAnimRig_TwinsHoneySuckle::getWaterAnimName(void)

{
  int iVar1;
  PlantAnimRig_TwinsHoneySuckle *in_x0;
  PlantTwinsHoneySuckle *pPVar2;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x210) != 0) {
    pPVar2 = Sexy::RtObject::Cast<PlantTwinsHoneySuckle>
                       (*(RtObject **)(*(long *)(in_x0 + 0x210) + 0xa8));
    iVar1 = FUN_04d3fc14(*(undefined4 *)(pPVar2 + 0x3c));
    if (iVar1 == 0) {
      std::string::string(asStack_10,"water_yl");
      AssistPlayAnim(in_x0,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::string(in_x8,"water_ty");
      nop();
      goto LAB_04d4465c;
    }
    if (iVar1 == 1) {
      std::string::string(asStack_10,"water_ty");
      AssistPlayAnim(in_x0,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::string(in_x8,"water_yl");
      nop();
      goto LAB_04d4465c;
    }
  }
  std::string::string(in_x8,"water_ht");
  nop();
LAB_04d4465c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

