// Class: SeedPacket_DangerRoom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_DangerRoom::DrawText(Sexy::Graphics*) */

void __thiscall SeedPacket_DangerRoom::DrawText(SeedPacket_DangerRoom *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [8];
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a0) == 0) goto LAB_04ab9210;
  cVar2 = FUN_04ab8888(this[0x20c]);
  if (cVar2 != '\0') {
    cVar2 = FUN_054765e8(this + 0x210);
    if (cVar2 == '\0') {
      iVar4 = FUN_04ab8890(10);
      iVar5 = FUN_04ab8874(*(undefined4 *)(this + 0x38));
      iVar6 = FUN_04ab8890(0x14);
      iVar7 = FUN_04ab8878(*(undefined4 *)(this + 0x3c));
      Sexy::Insets::Insets((Insets *)&uStack_28,iVar4,iVar4,iVar5 - iVar6,iVar7);
      uVar1 = PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline;
      Sexy::Insets::Insets((Insets *)&uStack_18,0xff,0x52,0x52,0xff);
      WriteWordInRect(param_1,this + 0x210,(Insets *)&uStack_28,uVar1,(Insets *)&uStack_18,5,1);
    }
    goto LAB_04ab9210;
  }
  if (-1 < *(int *)(this + 0x208)) {
    Sexy::Color::Color((Color *)&uStack_28,0xff,0xff,0xff);
    uVar9 = *(undefined4 *)(this + 400);
    cVar2 = FUN_04ab8d20(uVar9);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(long *)this + 0x1c0))(this);
      if (cVar2 != '\0') {
        uVar9 = *(undefined4 *)(this + 400);
        goto LAB_04ab9050;
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
      if ((cVar2 != '\0') && (this[0x20d] != (SeedPacket_DangerRoom)0x0)) {
        iVar4 = 0xff;
        goto LAB_04ab93bc;
      }
      Sexy::Color::Color((Color *)&uStack_18,0xff,0,0);
      uStack_28 = uStack_18;
      uStack_20 = uStack_10;
    }
    else {
LAB_04ab9050:
      cVar2 = FUN_04ab8d28(uVar9);
      if (cVar2 != '\0') {
        iVar4 = 0x80;
LAB_04ab93bc:
        Sexy::Color::Color((Color *)&uStack_18,iVar4,iVar4,iVar4);
        uStack_28 = uStack_18;
        uStack_20 = uStack_10;
      }
    }
    Sexy::StrFormat(L"%d",(wstring *)&uStack_18,(ulong)*(uint *)(this + 0x208));
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1a0),(wstring *)&uStack_18);
    (**(code **)(**(long **)(this + 0x1a0) + 0x170))(*(long **)(this + 0x1a0),0,(Color *)&uStack_28)
    ;
    (**(code **)(**(long **)(this + 0x1a0) + 0x128))(*(long **)(this + 0x1a0),param_1);
    FUN_05476c50((wstring *)&uStack_18);
  }
  if (0 < *(int *)(this + 0x204)) {
    Sexy::StrFormat(L"%d",auStack_40,(ulong)*(uint *)(this + 0x200));
    iVar4 = FUN_04ab8890(10);
    iVar5 = FUN_04ab8890(0);
    iVar6 = FUN_04ab8890(0x32);
    iVar7 = FUN_04ab8890(0x1e);
    Sexy::Insets::Insets((Insets *)&iStack_38,iVar4,iVar5,iVar6,iVar7);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (!bVar3) {
      iStack_38 = FUN_04ab8890(9);
      iStack_34 = FUN_04ab8890(0x27);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80948);
      iVar4 = FUN_04ab8890(3);
      iVar5 = FUN_04ab8890(0x24);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4,iVar5);
    }
    else {
      iStack_38 = FUN_04ab8890(10);
      iStack_38 = -iStack_38;
      iVar4 = FUN_04ab8878(*(undefined4 *)(this + 0x3c));
      iStack_34 = FUN_04ab8890(5);
      iStack_34 = iVar4 - iStack_34;
      uStack_30 = FUN_04ab8874(*(undefined4 *)(this + 0x38));
    }
    Sexy::Color::Color((Color *)&uStack_28,0xff,0xff,0xff);
    cVar2 = FUN_04ab8d28(*(undefined4 *)(this + 400));
    if ((cVar2 != '\0') || (*(int *)(this + 0x200) == 0)) {
      Sexy::Color::Color((Color *)&uStack_18,0x80,0x80,0x80);
      uStack_28 = uStack_18;
      uStack_20 = uStack_10;
    }
    uVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline;
    Sexy::Insets::Insets((Insets *)&uStack_18,(Insets *)&uStack_28);
    WriteWordInRect(param_1,auStack_40,(Insets *)&iStack_38,uVar1,(Insets *)&uStack_18,bVar3,1);
    FUN_05476c50(auStack_40);
  }
LAB_04ab9210:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_DangerRoom::SetPlantType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
SeedPacket_DangerRoom::SetPlantType(SeedPacket_DangerRoom *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SeedPacket::SetPlantType((SeedPacket *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,0xfffffffe);
    SeedPacket_PVP::SetCost((SeedPacket_PVP *)this,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_DangerRoom::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_DangerRoom::Draw(SeedPacket_DangerRoom *this,Graphics *param_1)

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


/* non-virtual thunk to SeedPacket_DangerRoom::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_DangerRoom::Draw(SeedPacket_DangerRoom *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* SeedPacket_DangerRoom::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket_DangerRoom::CopyFrom(SeedPacket_DangerRoom *this,SeedPacket *param_1)

{
  bool bVar1;
  int iVar2;
  SeedPacket_PVP *pSVar3;
  
  SeedPacket::CopyFrom((SeedPacket *)this,param_1);
  if ((param_1 != (SeedPacket *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<SeedPacket_PVP>((RtObject *)param_1), bVar1)) {
    pSVar3 = Sexy::RtObject::Cast<SeedPacket_PVP>((RtObject *)param_1);
    iVar2 = FUN_04ab8880(*(undefined4 *)(pSVar3 + 0x204));
    SeedPacket_PVP::SetMaxNum((SeedPacket_PVP *)this,iVar2);
    iVar2 = FUN_04ab887c(*(undefined4 *)(pSVar3 + 0x200));
    SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this,iVar2);
    iVar2 = FUN_04ab8884(*(undefined4 *)(pSVar3 + 0x208));
    SeedPacket_PVP::SetCost((SeedPacket_PVP *)this,iVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_DangerRoom::StaticClassInit() */

void SeedPacket_DangerRoom::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_DangerRoom");
    (*pcVar2)(plVar1,asStack_10,FUN_04a7ff04,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_DangerRoom::StaticGetClass() */

long * SeedPacket_DangerRoom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_DangerRoom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_DangerRoom::GetClass() const */

long * SeedPacket_DangerRoom::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_DangerRoom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_DangerRoom::~SeedPacket_DangerRoom() */

void __thiscall SeedPacket_DangerRoom::~SeedPacket_DangerRoom(SeedPacket_DangerRoom *this)

{
  *(undefined ***)this = &PTR_GetClass_0693e390;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_DangerRoom_0693e5d0;
  SeedPacket_PVP::~SeedPacket_PVP((SeedPacket_PVP *)this);
  return;
}


/* non-virtual thunk to SeedPacket_DangerRoom::~SeedPacket_DangerRoom() */

void __thiscall SeedPacket_DangerRoom::~SeedPacket_DangerRoom(SeedPacket_DangerRoom *this)

{
  ~SeedPacket_DangerRoom(this + -0x10);
  return;
}


/* SeedPacket_DangerRoom::~SeedPacket_DangerRoom() */

void __thiscall SeedPacket_DangerRoom::~SeedPacket_DangerRoom(SeedPacket_DangerRoom *this)

{
  ~SeedPacket_DangerRoom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_DangerRoom::~SeedPacket_DangerRoom() */

void __thiscall SeedPacket_DangerRoom::~SeedPacket_DangerRoom(SeedPacket_DangerRoom *this)

{
  ~SeedPacket_DangerRoom(this + -0x10);
  return;
}


/* SeedPacket_DangerRoom::SeedPacket_DangerRoom() */

void __thiscall SeedPacket_DangerRoom::SeedPacket_DangerRoom(SeedPacket_DangerRoom *this)

{
  SeedPacket_PVP::SeedPacket_PVP((SeedPacket_PVP *)this);
  *(undefined ***)this = &PTR_GetClass_0693e390;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_DangerRoom_0693e5d0;
  SeedPacket_PVP::SetCost((SeedPacket_PVP *)this,-1);
  SeedPacket_PVP::SetCurNum((SeedPacket_PVP *)this,0);
  SeedPacket_PVP::SetMaxNum((SeedPacket_PVP *)this,9999);
  return;
}


/* SeedPacket_DangerRoom::StaticNew() */

SeedPacket_DangerRoom * SeedPacket_DangerRoom::StaticNew(void)

{
  SeedPacket_DangerRoom *this;
  
  this = ::operator_new(0x218);
  SeedPacket_DangerRoom(this);
  return this;
}


/* SeedPacket_DangerRoom::onSeedPacketPlanted(SeedPacket*) */

void __thiscall
SeedPacket_DangerRoom::onSeedPacketPlanted(SeedPacket_DangerRoom *this,SeedPacket *param_1)

{
  char cVar1;
  DangerRoomManager *this_00;
  long lVar2;
  
  SeedPacket_PVP::onSeedPacketPlanted((SeedPacket_PVP *)this,param_1);
  if (this == (SeedPacket_DangerRoom *)param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
    if (cVar1 != '\0') {
      this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
      DangerRoomManager::SetPlantOnBoard(this_00,(string *)(lVar2 + 8));
      return;
    }
  }
  return;
}

