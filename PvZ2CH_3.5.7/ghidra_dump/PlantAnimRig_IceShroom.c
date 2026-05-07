// Class: PlantAnimRig_IceShroom


/* PlantAnimRig_IceShroom::getPlantFoodMainAnimName() */

void PlantAnimRig_IceShroom::getPlantFoodMainAnimName(void)

{
  long in_x0;
  
  Sexy::StrFormat("PLANTFOOD_STAGE%d",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
  return;
}


/* PlantAnimRig_IceShroom::getSpecialAnimName() */

void PlantAnimRig_IceShroom::getSpecialAnimName(void)

{
  long in_x0;
  
  Sexy::StrFormat("SPECIAL_STAGE%d",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
  return;
}


/* PlantAnimRig_IceShroom::growthAnimComplete(std::string const&) */

void PlantAnimRig_IceShroom::growthAnimComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_IceShroom::getWaterAnimName() */

void PlantAnimRig_IceShroom::getWaterAnimName(void)

{
  char cVar1;
  long in_x0;
  size_t in_x2;
  string *in_x8;
  
  Set8BytesTo0();
  cVar1 = *(char *)(in_x0 + 0x3b8);
  if (cVar1 == '\x01') {
    std::string::append(in_x8,"water2",in_x2);
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      std::string::append(in_x8,"water3",in_x2);
    }
    return;
  }
  std::string::append(in_x8,"water",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IceShroom::getIdleAnimationName() */

void PlantAnimRig_IceShroom::getIdleAnimationName(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long in_x0;
  string *in_x8;
  
  lVar3 = ___stack_chk_guard;
  if ((*(byte *)(in_x0 + 0x3b8) & 0xfd) == 0) {
    uVar1 = *(byte *)(in_x0 + 0x3b8) + 1;
    uVar4 = Sexy::Rand();
    iVar2 = (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) % 3;
    if (iVar2 == 0) {
      Sexy::StrFormat("IDLE_STAGE%d",(ulong)uVar1);
    }
    else {
      Sexy::StrFormat("IDLE%d_STAGE%d",(ulong)(iVar2 + 1),(ulong)uVar1);
    }
  }
  else {
    std::string::string(in_x8,"IDLE3_STAGE2");
    nop();
  }
  if (lVar3 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom() */

void __thiscall PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom(PlantAnimRig_IceShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680d100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_IceShroom_0680d368;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom() */

void __thiscall PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom(PlantAnimRig_IceShroom *this)

{
  ~PlantAnimRig_IceShroom(this + -0x10);
  return;
}


/* PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom() */

void __thiscall PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom(PlantAnimRig_IceShroom *this)

{
  ~PlantAnimRig_IceShroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom() */

void __thiscall PlantAnimRig_IceShroom::~PlantAnimRig_IceShroom(PlantAnimRig_IceShroom *this)

{
  ~PlantAnimRig_IceShroom(this + -0x10);
  return;
}


/* PlantAnimRig_IceShroom::PlantAnimRig_IceShroom() */

void __thiscall PlantAnimRig_IceShroom::PlantAnimRig_IceShroom(PlantAnimRig_IceShroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_IceShroom)0x0;
  *(undefined ***)this = &PTR_GetClass_0680d100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_IceShroom_0680d368;
  return;
}


/* PlantAnimRig_IceShroom::StaticNew() */

PlantAnimRig_IceShroom * PlantAnimRig_IceShroom::StaticNew(void)

{
  PlantAnimRig_IceShroom *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_IceShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IceShroom::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_IceShroom::PlayAttack(PlantAnimRig_IceShroom *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string *__n;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_58;
  std::string::string(asStack_60,"");
  nop();
  if ((*(int *)(this + 0x224) < 5) || ((byte)this[0x3b8] != 2)) {
    Sexy::StrFormat("ATTACK_STAGE%d",asStack_58,(ulong)((byte)this[0x3b8] + 1));
    FUN_05474278(asStack_60,asStack_58);
    std::string::~string(asStack_58);
  }
  else {
    std::string::append(asStack_60,"attack_stage3b",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IceShroom::StaticClassInit() */

void PlantAnimRig_IceShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_IceShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_04214e54,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_IceShroom::StaticGetClass() */

long * PlantAnimRig_IceShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_IceShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_IceShroom::GetClass() const */

long * PlantAnimRig_IceShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_IceShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IceShroom::GetPriviewAnim() */

void __thiscall PlantAnimRig_IceShroom::GetPriviewAnim(PlantAnimRig_IceShroom *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IDLE3_STAGE3");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_IceShroom::SetGrowthStage(unsigned char,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_IceShroom::SetGrowthStage
          (PlantAnimRig_IceShroom *this,PlantAnimRig_IceShroom param_1,RtReflectionDelegate *param_3
          )

{
  PlantAnimRig_IceShroom PVar1;
  char cVar2;
  int iVar3;
  RtReflectionDelegate *__n;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] != param_1) {
    this[0x3b8] = param_1;
    __n = param_3;
    Set8BytesTo0(asStack_70);
    PVar1 = this[0x3b8];
    if (PVar1 == (PlantAnimRig_IceShroom)0x1) {
      std::string::append(asStack_70,"GROWTH_STAGE2",(size_t)__n);
    }
    else if (PVar1 == (PlantAnimRig_IceShroom)0x2) {
      std::string::append(asStack_70,"GROWTH_STAGE3",(size_t)__n);
    }
    else if (PVar1 == (PlantAnimRig_IceShroom)0x3) {
      std::string::append(asStack_70,"GROWTH_STAGE1",(size_t)__n);
      this[0x3b8] = (PlantAnimRig_IceShroom)0x2;
    }
    cVar2 = FUN_0547419c(asStack_70);
    if (cVar2 == '\0') {
      iVar3 = ::RtReflectionDelegate::operator_cast_to_int(param_3);
      if (iVar3 == 0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"growthAnimComplete");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)param_3,
                   (RtReflectionDelegate *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    else {
      (**(code **)(*(long *)this + 0x118))(this);
    }
    std::string::~string(asStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_IceShroom::onPopAnimCommand(float, std::string const&, std::string const&) */

void PlantAnimRig_IceShroom::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_04213260(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x280));
  if ((iVar2 != 0) &&
     (((bVar1 = std::operator==(param_3,"use_action"), bVar1 ||
       (bVar1 = std::operator==(param_3,"use_action2"), bVar1)) ||
      (bVar1 = std::operator==(param_3,"use_action3"), bVar1)))) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_2 + 0x268));
    return;
  }
  PlantAnimRig::onPopAnimCommand(param_1,param_2,param_3);
  return;
}

