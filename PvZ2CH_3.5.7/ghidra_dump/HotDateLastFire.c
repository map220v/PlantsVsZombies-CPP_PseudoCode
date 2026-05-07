// Class: HotDateLastFire


/* HotDateLastFire::CalcRenderOrder() const */

void __thiscall HotDateLastFire::CalcRenderOrder(HotDateLastFire *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to HotDateLastFire::CalcRenderOrder() const */

void __thiscall HotDateLastFire::CalcRenderOrder(HotDateLastFire *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotDateLastFire::StaticClassInit() */

void HotDateLastFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotDateLastFire");
    (*pcVar2)(plVar1,asStack_10,FUN_03986d74,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotDateLastFire::StaticGetClass() */

long * HotDateLastFire::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"HotDateLastFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotDateLastFire::GetClass() const */

long * HotDateLastFire::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"HotDateLastFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotDateLastFire::HotDateLastFire() */

void __thiscall HotDateLastFire::HotDateLastFire(HotDateLastFire *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_066dbfe0;
  *(undefined ***)(this + 0x10) = &PTR__HotDateLastFire_066dc298;
  *(undefined4 *)(this + 0x1ac) = 0x40800000;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x1b0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x210) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x214) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  return;
}


/* HotDateLastFire::StaticNew() */

HotDateLastFire * HotDateLastFire::StaticNew(void)

{
  HotDateLastFire *this;
  
  this = ::operator_new(0x220);
  HotDateLastFire(this);
  return this;
}


/* HotDateLastFire::onAnimationDone(std::string const&) */

void __thiscall HotDateLastFire::onAnimationDone(HotDateLastFire *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"fire_on");
  if (bVar1) {
    EgretflowerPlantFoodFire::setState((EgretflowerPlantFoodFire *)this,2);
    return;
  }
  bVar1 = std::operator==(param_1,"fire_off");
  if (!bVar1) {
    return;
  }
  EgretflowerPlantFoodFire::setState((EgretflowerPlantFoodFire *)this,4);
  return;
}


/* HotDateLastFire::~HotDateLastFire() */

void __thiscall HotDateLastFire::~HotDateLastFire(HotDateLastFire *this)

{
  *(undefined ***)this = &PTR_GetClass_066dbfe0;
  *(undefined ***)(this + 0x10) = &PTR__HotDateLastFire_066dc298;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to HotDateLastFire::~HotDateLastFire() */

void __thiscall HotDateLastFire::~HotDateLastFire(HotDateLastFire *this)

{
  ~HotDateLastFire(this + -0x10);
  return;
}


/* HotDateLastFire::~HotDateLastFire() */

void __thiscall HotDateLastFire::~HotDateLastFire(HotDateLastFire *this)

{
  ~HotDateLastFire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HotDateLastFire::~HotDateLastFire() */

void __thiscall HotDateLastFire::~HotDateLastFire(HotDateLastFire *this)

{
  ~HotDateLastFire(this + -0x10);
  return;
}


/* HotDateLastFire::InitFire(DamageInfo const&, float) */

void __thiscall HotDateLastFire::InitFire(HotDateLastFire *this,DamageInfo *param_1,float param_2)

{
  undefined4 uVar1;
  
  *(float *)(this + 0x1ac) = param_2;
  DamageInfo::operator=((DamageInfo *)(this + 0x1b0),param_1);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x214) = uVar1;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  EgretflowerPlantFoodFire::setState((EgretflowerPlantFoodFire *)this,2);
  return;
}


/* HotDateLastFire::onUpdate() */

void __thiscall HotDateLastFire::onUpdate(HotDateLastFire *this)

{
  int iVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x214) < fVar2) {
    FireShroomMagma::takeEffect((FireShroomMagma *)this);
    fVar2 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x1a8);
    *(float *)(this + 0x214) = fVar2 + 1.0;
  }
  else {
    iVar1 = *(int *)(this + 0x1a8);
  }
  if ((iVar1 == 2) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x210) < fVar2)) {
    EgretflowerPlantFoodFire::setState((EgretflowerPlantFoodFire *)this,3);
    return;
  }
  return;
}

