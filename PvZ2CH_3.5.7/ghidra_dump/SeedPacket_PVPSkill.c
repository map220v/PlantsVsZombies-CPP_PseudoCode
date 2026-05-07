// Class: SeedPacket_PVPSkill


/* SeedPacket_PVPSkill::~SeedPacket_PVPSkill() */

void __thiscall SeedPacket_PVPSkill::~SeedPacket_PVPSkill(SeedPacket_PVPSkill *this)

{
  *(undefined ***)this = &PTR_GetClass_069486f0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_PVPSkill_06948930;
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_PVPSkill::~SeedPacket_PVPSkill() */

void __thiscall SeedPacket_PVPSkill::~SeedPacket_PVPSkill(SeedPacket_PVPSkill *this)

{
  ~SeedPacket_PVPSkill(this + -0x10);
  return;
}


/* SeedPacket_PVPSkill::~SeedPacket_PVPSkill() */

void __thiscall SeedPacket_PVPSkill::~SeedPacket_PVPSkill(SeedPacket_PVPSkill *this)

{
  ~SeedPacket_PVPSkill(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_PVPSkill::~SeedPacket_PVPSkill() */

void __thiscall SeedPacket_PVPSkill::~SeedPacket_PVPSkill(SeedPacket_PVPSkill *this)

{
  ~SeedPacket_PVPSkill(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::StaticClassInit() */

void SeedPacket_PVPSkill::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_PVPSkill");
    (*pcVar2)(plVar1,asStack_10,FUN_04ab7554,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_PVPSkill::StaticGetClass() */

long * SeedPacket_PVPSkill::StaticGetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_PVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_PVPSkill::GetClass() const */

long * SeedPacket_PVPSkill::GetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_PVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_PVPSkill::InitEnergy(int, int) */

void __thiscall SeedPacket_PVPSkill::InitEnergy(SeedPacket_PVPSkill *this,int param_1,int param_2)

{
  *(int *)(this + 0x200) = param_1;
  *(int *)(this + 0x204) = param_2;
  return;
}


/* SeedPacket_PVPSkill::SetLevel(int) */

void __thiscall SeedPacket_PVPSkill::SetLevel(SeedPacket_PVPSkill *this,int param_1)

{
  *(int *)(this + 0x208) = param_1;
  if (0 < param_1) {
    SeedPacket::SetDisabled((SeedPacket *)this,false);
    return;
  }
  SeedPacket::SetDisabled((SeedPacket *)this,true);
  return;
}


/* SeedPacket_PVPSkill::SeedPacket_PVPSkill() */

void __thiscall SeedPacket_PVPSkill::SeedPacket_PVPSkill(SeedPacket_PVPSkill *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined4 *)(this + 0x200) = 5;
  *(undefined ***)this = &PTR_GetClass_069486f0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_PVPSkill_06948930;
  *(undefined4 *)(this + 0x204) = 0x14;
  SetLevel(this,0);
  return;
}


/* SeedPacket_PVPSkill::StaticNew() */

SeedPacket_PVPSkill * SeedPacket_PVPSkill::StaticNew(void)

{
  SeedPacket_PVPSkill *this;
  
  this = ::operator_new(0x210);
  SeedPacket_PVPSkill(this);
  return this;
}


/* SeedPacket_PVPSkill::onPVPSkillEnergyChanged(int) */

void __thiscall SeedPacket_PVPSkill::onPVPSkillEnergyChanged(SeedPacket_PVPSkill *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (**(code **)(*(long *)this + 0x1c0))();
  SeedPacket::setAffordable((SeedPacket *)this,*(int *)(this + 0x200) <= param_1);
  bVar2 = (**(code **)(*(long *)this + 0x1c0))(this);
  if ((bVar2 ^ bVar1) <= bVar1) {
    return;
  }
  SeedPacket::PlayCardAffordEffect((SeedPacket *)this);
  return;
}


/* SeedPacket_PVPSkill::IsAffordable() */

bool __thiscall SeedPacket_PVPSkill::IsAffordable(SeedPacket_PVPSkill *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 400),0x20);
  if (!bVar1) {
    cVar2 = SeedPacket::IsAffordable((SeedPacket *)this);
    bVar1 = false;
    if (cVar2 != '\0') {
      bVar1 = 0 < *(int *)(this + 0x208);
    }
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::DrawText(Sexy::Graphics*) */

void __thiscall SeedPacket_PVPSkill::DrawText(SeedPacket_PVPSkill *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x200));
  iVar2 = FUN_04ab740c(0);
  iVar3 = FUN_04ab740c(0x32);
  iVar4 = FUN_04ab740c(0x1e);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar2,iVar3,iVar4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    local_28 = FUN_04ab740c(10);
    local_28 = -local_28;
    iVar2 = FUN_04ab7390(*(undefined4 *)(this + 0x3c));
    local_24 = FUN_04ab740c(0xf);
    local_24 = iVar2 - local_24;
    local_20 = FUN_04ab738c(*(undefined4 *)(this + 0x38));
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar5,aCStack_18,bVar1,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_PVPSkill::Draw(SeedPacket_PVPSkill *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  SeedPacketUtils *this_00;
  long lVar13;
  Image *pIVar14;
  LotteryResultProgressBar *this_01;
  ZombieType *this_02;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  GraphicsAutoState aGStack_50 [8];
  Insets local_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  float local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar9 = FUN_04ab740c(0xfffffff9);
  iVar10 = FUN_04ab740c(0xfffffffc);
  Sexy::Graphics::Translate(param_1,iVar9,iVar10);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  auVar18 = SeedPacketUtils::GetZombiePacketRenderData
                      (this_00,(string *)(this + 0x188),(string *)(this + 0x1b0),-1);
  lVar13 = auVar18._0_8_;
  PVPManager::GetLevelIconString((PVPManager *)(ulong)*(uint *)(this + 0x208),auVar18._8_4_);
  pIVar14 = (Image *)StringHelper::ToImage((string *)local_18,false);
  std::string::~string((string *)local_18);
  if (pIVar14 != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar14,*(int *)(lVar13 + 0x30),*(int *)(lVar13 + 0x34),
               *(int *)(lVar13 + 0x28),*(int *)(lVar13 + 0x2c));
  }
  Sexy::Color::Color((Color *)local_48,1);
  bVar4 = (**(code **)(*(long *)this + 0x1c0))(this);
  bVar5 = FUN_04ab7850(*(undefined4 *)(this + 400));
  cVar6 = UIWidget::isInState((UIWidget *)this,3);
  uVar17 = *(undefined4 *)(this + 400);
  bVar7 = 0;
  if (cVar6 != '\0') {
    bVar7 = FUN_04ab7858(uVar17);
    bVar7 = (bVar7 | bVar5) ^ 1;
  }
  cVar6 = FUN_04ab7898(uVar17);
  cVar8 = FUN_04ab78a0(uVar17);
  iVar9 = *(int *)(this + 0x208);
  bVar1 = iVar9 < 1;
  if (((((cVar8 != '\0') || (bVar1)) ||
       (cVar8 = FUN_04ab7738(*(undefined4 *)(this + 0x68)), cVar8 == '\0')) ||
      ((bVar5 != 0 || (cVar6 != '\0')))) || (bVar5 = FUN_04ab78a8(uVar17), bVar5 < (bVar4 <= bVar7))
     ) {
    Sexy::Insets::Insets(aIStack_28,local_48);
    Sexy::Insets::Insets(aIStack_38,0,0,0,0xff);
    Sexy::ColorLerp((Sexy *)local_18,0x3f000000,aIStack_28,aIStack_38);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  Sexy::Graphics::SetColor(param_1,(Color *)local_48);
  pIVar14 = (Image *)UIWidget::GetAtlasImage((UIWidget *)this);
  Sexy::Graphics::DrawImage
            (param_1,pIVar14,*(int *)(lVar13 + 0x18),*(int *)(lVar13 + 0x1c),(TRect *)(lVar13 + 8));
  Sexy::Graphics::DrawImage
            (param_1,pIVar14,*(int *)(lVar13 + 0xc0),*(int *)(lVar13 + 0xc4),
             (TRect *)(lVar13 + 0xb0));
  Sexy::Graphics::DrawImage
            (param_1,pIVar14,*(int *)(lVar13 + 0xf0),*(int *)(lVar13 + 0xf4),
             (TRect *)(lVar13 + 0xe0));
  Sexy::Graphics::DrawImage
            (param_1,pIVar14,*(int *)(lVar13 + 0xd8),*(int *)(lVar13 + 0xdc),(TRect *)(lVar13 + 200)
            );
  if (bVar7 != 0) {
    fVar15 = (float)FUN_04ab7394(*(undefined4 *)(this + 0x6c));
    PowerupUI::GetPowerupDownImage();
    this_02 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    fVar16 = (float)ZombieType::GetPacketCoolDown(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar17 = PVZ_T();
    local_18[0] = (float)*(int *)(lVar13 + 0xa4);
    fVar15 = CurveLerp<float>(fVar15,fVar16 + fVar15,uVar17,(string *)local_18,&DAT_06a88d78,1);
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)(lVar13 + 0x98));
    local_c = (int)fVar15;
    Sexy::Graphics::DrawImage
              (param_1,pIVar14,*(int *)(lVar13 + 0xa8),*(int *)(lVar13 + 0xac),(TRect *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (cVar6 == '\0') {
    if (0 < iVar9) {
LAB_04ab7e14:
      (**(code **)(*(long *)this + 0x220))(this,param_1);
      Sexy::Graphics::SetColorizeImages(param_1,bVar1);
      goto LAB_04ab7d54;
    }
  }
  else {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Color::Color((Color *)local_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar14,*(int *)(lVar13 + 0x90),*(int *)(lVar13 + 0x94),
               (TRect *)(lVar13 + 0x80));
    if (!bVar1) goto LAB_04ab7e14;
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  std::string::string((string *)local_18,"IMAGE_UI_LOCK_SMALL");
  this_01 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_18,false);
  std::string::~string((string *)local_18);
  nop();
  if (this_01 != (LotteryResultProgressBar *)0x0) {
    iVar9 = *(int *)(lVar13 + 0x28);
    iVar10 = *(int *)(lVar13 + 0x30);
    iVar11 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar2 = *(int *)(lVar13 + 0x2c);
    iVar3 = *(int *)(lVar13 + 0x34);
    iVar12 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_01,iVar10 + (iVar9 - iVar11) / 2,iVar3 + (iVar2 - iVar12) / 2);
  }
LAB_04ab7d54:
  cVar6 = UIWidget::isInState((UIWidget *)this,4);
  if ((cVar6 != '\0') || (cVar6 = FUN_04ab78b0(*(undefined4 *)(this + 400)), cVar6 != '\0')) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar14,*(int *)(lVar13 + 0x138),*(int *)(lVar13 + 0x13c),
               (TRect *)(lVar13 + 0x128));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to SeedPacket_PVPSkill::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_PVPSkill::Draw(SeedPacket_PVPSkill *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::UseSkill(Sexy::SexyVector3 const&, int) */

void __thiscall
SeedPacket_PVPSkill::UseSkill(SeedPacket_PVPSkill *this,SexyVector3 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  SexyVector3 *pSVar5;
  long lVar6;
  ZombiePVPSkillProps *this_00;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  int local_44;
  int local_40;
  int local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [10];
  SexyVector3 *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  if ((((-1 < local_40) && (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), local_40 < iVar3)) &&
      (-1 < local_3c)) && (iVar3 = BoardConstants::NUMBER_OF_ROWS(), local_3c < iVar3)) {
    iVar3 = *(int *)(this + 0x208);
    local_44 = iVar3;
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 400),0x20);
    if (bVar2) {
      local_30[0] = 1;
      piVar4 = eastl::max_alt<int>(local_30,&local_44);
      iVar3 = *piVar4;
      local_44 = iVar3;
    }
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    local_30[0] = iVar3;
    PowerupUI::GetPowerupDownImage();
    pSVar5 = (SexyVector3 *)(*pcVar9)(plVar8,aRStack_38,0,(SpawnZombieParams *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    BoardEntity::PlaceOnBoard(pSVar5);
    MessageRouter::Post<SeedPacket*,SeedPacket_PVPSkill*>
              ((MessageRouter *)gMessageRouter,Message::SeedPacketPlanted,this);
    iVar3 = *(int *)(this + 0x200);
    iVar1 = *(int *)(this + 0x204);
    PowerupUI::GetPowerupDownImage();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0xa0));
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    fVar10 = (float)ZombiePVPSkillProps::GetReduceCost(this_00,*(int *)(this + 0x208) + -1);
    iVar7 = (int)((float)*(int *)(this + 0x200) + (1.0 - fVar10) * 30.0);
    *(int *)(this + 0x200) = iVar7;
    if (*(int *)(this + 0x204) < iVar7) {
      *(int *)(this + 0x200) = *(int *)(this + 0x204);
    }
    MessageRouter::Post<Zombie*,int,Zombie*,int>
              ((MessageRouter *)gMessageRouter,Message::PVPSkillUsed,(Zombie *)pSVar5,param_2);
    if (iVar3 < iVar1) {
      SeedPacket::PlayWordAffordEffect((SeedPacket *)this,0,0);
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::TryUse(PacketCursor*) */

void __thiscall SeedPacket_PVPSkill::TryUse(SeedPacket_PVPSkill *this,PacketCursor *param_1)

{
  ZombieCursor *pZVar1;
  undefined8 uVar2;
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (PacketCursor *)0x0) ||
     (pZVar1 = Sexy::RtObject::Cast<ZombieCursor>((RtObject *)param_1),
     pZVar1 == (ZombieCursor *)0x0)) {
    uVar2 = 0;
  }
  else {
    BaseCursor::GetBoardPosition();
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)local_1c,0.0);
    UseSkill(this,(SexyVector3 *)aVStack_18,*(int *)(this + 0x200));
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* SeedPacket_PVPSkill::registerForEvents() */

void __thiscall SeedPacket_PVPSkill::registerForEvents(SeedPacket_PVPSkill *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  SeedPacket::registerForEvents((SeedPacket *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPSkillEnergyChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedPacket_PVPSkill,void(SeedPacket_PVPSkill::*)(int)>>
            ((MessageRouter *)puVar1,Message::PVPSkillEnergyChanged,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVPSkill::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket_PVPSkill::OnTouch(SeedPacket_PVPSkill *this,Touch *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  BaseCursor *pBVar4;
  wchar_t *pwVar5;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    cVar1 = (**(code **)(*(long *)this + 0x1c0))();
    if (cVar1 == '\0') {
      if (*(int *)(this + 0x208) < 1) {
        pwVar5 = L"[ADVICE_SKILL_LOCK]";
      }
      else {
        pwVar5 = L"[ADVICE_NOT_ENOUGH_TIMES]";
      }
      uVar2 = 1;
      FUN_05478178(aTStack_40,pwVar5,aRStack_48);
      nop();
      Board::DisplayAdvice(*(Board **)(gLawnApp + 0x9f0),aTStack_40,7,2);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_Buzzer");
      FUN_05476c50(aTStack_40);
    }
    else {
      SeedPacket::CheckResourceLoaded((SeedPacket *)this);
      uVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
      if ((bool)uVar2) {
        MessageRouter::Post<SeedPacket*,SeedPacket_PVPSkill*>
                  ((MessageRouter *)gMessageRouter,Message::ZombieSeedPacketSelected,this);
        Sexy::Touch::Touch(aTStack_40,param_1);
        Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
        Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
        pBVar4 = ::operator_new(0x68);
        PVPSkillCursor::PVPSkillCursor((PVPSkillCursor *)pBVar4,aTStack_40,aRStack_48);
        cVar1 = Board::TryToAddCursor(this_00,pBVar4,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)this + 0xe8))(this,4);
        }
      }
      else {
        uVar2 = SeedPacket::OnTouch((SeedPacket *)this,param_1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

