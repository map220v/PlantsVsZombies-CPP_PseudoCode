// Class: SeedPacket_Uncharted


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Uncharted::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Uncharted::Draw(SeedPacket_Uncharted *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  GraphicsAutoState aGStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  SeedPacket::Draw((SeedPacket *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04ab8888(this[0x20c]);
  if (cVar1 != '\0') {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar2 = FUN_04ab8890(0xfffffff6);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar2,iVar2,(int)((float)iVar3 * 0.8),(int)((float)iVar4 * 0.8));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket_Uncharted::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Uncharted::Draw(SeedPacket_Uncharted *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Uncharted::StaticClassInit() */

void SeedPacket_Uncharted::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_Uncharted");
    (*pcVar2)(plVar1,asStack_10,FUN_0341136c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_Uncharted::StaticGetClass() */

long * SeedPacket_Uncharted::StaticGetClass(void)

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
  uVar2 = SeedPacket_PVP::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_Uncharted",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_Uncharted::GetClass() const */

long * SeedPacket_Uncharted::GetClass(void)

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
  uVar2 = SeedPacket_PVP::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_Uncharted",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_Uncharted::~SeedPacket_Uncharted() */

void __thiscall SeedPacket_Uncharted::~SeedPacket_Uncharted(SeedPacket_Uncharted *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ffc0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Uncharted_06620200;
  SeedPacket_PVP::~SeedPacket_PVP((SeedPacket_PVP *)this);
  return;
}


/* non-virtual thunk to SeedPacket_Uncharted::~SeedPacket_Uncharted() */

void __thiscall SeedPacket_Uncharted::~SeedPacket_Uncharted(SeedPacket_Uncharted *this)

{
  ~SeedPacket_Uncharted(this + -0x10);
  return;
}


/* SeedPacket_Uncharted::~SeedPacket_Uncharted() */

void __thiscall SeedPacket_Uncharted::~SeedPacket_Uncharted(SeedPacket_Uncharted *this)

{
  ~SeedPacket_Uncharted(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_Uncharted::~SeedPacket_Uncharted() */

void __thiscall SeedPacket_Uncharted::~SeedPacket_Uncharted(SeedPacket_Uncharted *this)

{
  ~SeedPacket_Uncharted(this + -0x10);
  return;
}


/* SeedPacket_Uncharted::SeedPacket_Uncharted() */

void __thiscall SeedPacket_Uncharted::SeedPacket_Uncharted(SeedPacket_Uncharted *this)

{
  SeedPacket_PVP::SeedPacket_PVP((SeedPacket_PVP *)this);
  *(undefined ***)this = &PTR_GetClass_0661ffc0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Uncharted_06620200;
  SeedPacket_PVP::SetCost((SeedPacket_PVP *)this,-1);
  SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this,0);
  SeedPacket_PVP::SetMaxNum((SeedPacket_PVP *)this,9999);
  return;
}


/* SeedPacket_Uncharted::StaticNew() */

SeedPacket_Uncharted * SeedPacket_Uncharted::StaticNew(void)

{
  SeedPacket_Uncharted *this;
  
  this = ::operator_new(0x218);
  SeedPacket_Uncharted(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Uncharted::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket_Uncharted::CopyFrom(SeedPacket_Uncharted *this,SeedPacket *param_1)

{
  char cVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket_PVP::CopyFrom((SeedPacket_PVP *)this,param_1);
  cVar1 = FUN_03411960(*(undefined4 *)(this + 400));
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"imitater");
    iVar2 = PVZ2UnchartedModeUtils::GetPlantNum(asStack_10);
    SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this,iVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Uncharted::onSeedPacketPlanted(SeedPacket*) */

void __thiscall
SeedPacket_Uncharted::onSeedPacketPlanted(SeedPacket_Uncharted *this,SeedPacket *param_1)

{
  char cVar1;
  ArtifactMgr *this_00;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket_PVP::onSeedPacketPlanted((SeedPacket_PVP *)this,param_1);
  if (this == (SeedPacket_Uncharted *)param_1) {
    cVar1 = FUN_03411960(*(undefined4 *)(this + 400));
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
      if (cVar1 != '\0') {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
        PVZ2UnchartedModeUtils::SetPlantOnBoard((string *)(lVar2 + 8));
      }
    }
    else {
      std::string::string(asStack_10,"imitater");
      PVZ2UnchartedModeUtils::SetPlantOnBoard(asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    cVar1 = FUN_03411a08(*(undefined4 *)(this + 400));
    if (cVar1 == '\0') {
      this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      cVar1 = ArtifactMgr::CanFreeNoCD(this_00);
      if ((cVar1 == '\0') && (this[0x198] != (SeedPacket_Uncharted)0x0)) {
        (**(code **)(*(long *)this + 0xe8))(this,3);
        goto LAB_03411d64;
      }
    }
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
LAB_03411d64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

