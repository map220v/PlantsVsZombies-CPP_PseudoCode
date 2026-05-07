// Class: SeedPacket_Powerup


/* SeedPacket_Powerup::OnTouch(Sexy::Touch const&) */

undefined8 __thiscall SeedPacket_Powerup::OnTouch(SeedPacket_Powerup *this,Touch *param_1)

{
  long lVar1;
  string *psVar2;
  
  if ((*(int *)(param_1 + 0x30) == 0) &&
     (lVar1 = Board::GetActivePowerup(*(Board **)(gLawnApp + 0x9f0)), lVar1 == 0)) {
    psVar2 = *(string **)(gLawnApp + 0x9f0);
    PVPManager::GetPVPMapDataList((PVPManager *)this);
    Board::AddConveyorPowerup(psVar2);
    lVar1 = Board::GetSelectedPowerup(*(Board **)(gLawnApp + 0x9f0));
    if (lVar1 != 0) {
      (**(code **)(*(long *)this + 0xe8))(this,4);
      this[0x200] = (SeedPacket_Powerup)0x1;
      return 1;
    }
    (**(code **)(*(long *)this + 0xe8))(this,2);
    this[0x200] = (SeedPacket_Powerup)0x0;
    return 1;
  }
  return 0;
}


/* SeedPacket_Powerup::~SeedPacket_Powerup() */

void __thiscall SeedPacket_Powerup::~SeedPacket_Powerup(SeedPacket_Powerup *this)

{
  *(undefined ***)this = &PTR_GetClass_0684a160;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Powerup_0684a3a0;
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_Powerup::~SeedPacket_Powerup() */

void __thiscall SeedPacket_Powerup::~SeedPacket_Powerup(SeedPacket_Powerup *this)

{
  ~SeedPacket_Powerup(this + -0x10);
  return;
}


/* SeedPacket_Powerup::~SeedPacket_Powerup() */

void __thiscall SeedPacket_Powerup::~SeedPacket_Powerup(SeedPacket_Powerup *this)

{
  ~SeedPacket_Powerup(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_Powerup::~SeedPacket_Powerup() */

void __thiscall SeedPacket_Powerup::~SeedPacket_Powerup(SeedPacket_Powerup *this)

{
  ~SeedPacket_Powerup(this + -0x10);
  return;
}


/* SeedPacket_Powerup::SeedPacket_Powerup() */

void __thiscall SeedPacket_Powerup::SeedPacket_Powerup(SeedPacket_Powerup *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0684a160;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Powerup_0684a3a0;
  return;
}


/* SeedPacket_Powerup::StaticNew() */

SeedPacket_Powerup * SeedPacket_Powerup::StaticNew(void)

{
  SeedPacket_Powerup *this;
  
  this = ::operator_new(0x208);
  SeedPacket_Powerup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Powerup::StaticClassInit() */

void SeedPacket_Powerup::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_Powerup");
    (*pcVar2)(plVar1,asStack_10,FUN_0443d968,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_Powerup::StaticGetClass() */

long * SeedPacket_Powerup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_Powerup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_Powerup::GetClass() const */

long * SeedPacket_Powerup::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_Powerup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Powerup::SetPowerupType(std::string const&) */

void __thiscall SeedPacket_Powerup::SetPowerupType(SeedPacket_Powerup *this,string *param_1)

{
  SeedPacketUtils *this_00;
  long lVar1;
  ResourceInfo *pRVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  this[0x200] = (SeedPacket_Powerup)0x0;
  local_8 = ___stack_chk_guard;
  SeedPacket::SetContentsTypeName((string *)this);
  MessageRouter::Post<SeedPacket*,SeedPacket_Powerup*>
            ((MessageRouter *)gMessageRouter,Message::SeedPacketTypeChanged,this);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = SeedPacketUtils::GetPowerupPacketRenderData(this_00,param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar1 + 0x170));
  Sexy::Insets::Insets(aIStack_18,0,0,1,1);
  UIWidget::SetAtlasImageData((UIWidget *)this,pRVar2,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Powerup::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Powerup::Draw(SeedPacket_Powerup *this,Graphics *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  SeedPacketUtils *this_00;
  long lVar12;
  string *psVar13;
  ResourceInfo *pRVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  PlantType *pPVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  GraphicsAutoState aGStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  Color local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::Color::Color(local_38,1);
  if (*(code **)(*(long *)this + 0x1c0) == SeedPacket::IsAffordable) {
    bVar1 = SeedPacket::IsAffordable((SeedPacket *)this);
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0x1c0))();
  }
  bVar2 = FUN_0443dac8(*(undefined4 *)(this + 400));
  cVar3 = UIWidget::isInState((UIWidget *)this,3);
  uVar20 = *(undefined4 *)(this + 400);
  bVar4 = 0;
  if (cVar3 != '\0') {
    bVar4 = FUN_0443dad0(uVar20);
    bVar4 = (bVar4 | bVar2) ^ 1;
  }
  cVar3 = FUN_0443db10(uVar20);
  if (((cVar3 != '\0') || (bVar2 != 0)) || (bVar5 = FUN_0443db18(uVar20), bVar5 < (bVar1 <= bVar4)))
  {
    Sexy::Insets::Insets((Insets *)&local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  Sexy::Graphics::SetColor(param_1,local_38);
  pIVar11 = (Image *)UIWidget::GetAtlasImage((UIWidget *)this);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar12 = SeedPacketUtils::GetPowerupPacketRenderData(this_00,(string *)(this + 0x188));
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,*(int *)(lVar12 + 0x30),*(int *)(lVar12 + 0x34),
             (TRect *)(lVar12 + 0x20));
  cVar6 = UIWidget::isInState((UIWidget *)this,4);
  if (cVar6 == '\0') {
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x60),*(int *)(lVar12 + 100),
               (TRect *)(lVar12 + 0x50));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x78),*(int *)(lVar12 + 0x7c),
               (TRect *)(lVar12 + 0x68));
  }
  psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  PVPManager::GetPVPMapDataList((PVPManager *)this);
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar13);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  psVar13 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  LawnApp::GetUIImageFromStringId(psVar13);
  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  iVar9 = *(int *)(lVar12 + 0x18);
  iVar10 = *(int *)(lVar12 + 0x1c);
  iVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  Sexy::Image::GetCelRect(iVar8);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar14,iVar9,iVar10,(TRect *)&local_18);
  if (bVar4 != 0) {
    fVar21 = (float)FUN_0443d780(*(undefined4 *)(this + 0x6c));
    SeedPacket::GetPlantType();
    pPVar18 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar19 = (float)PlantType::GetPacketCoolDown(pPVar18,0xfffffffe);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    local_28 = CONCAT44(local_28._4_4_,0x40400000);
    uVar20 = PVZ_T();
    local_18 = (float)*(int *)(lVar12 + 0xa4);
    fVar21 = CurveLerp<float>(fVar21,fVar19 + fVar21,uVar20,
                              (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,&local_28,1);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(lVar12 + 0x98));
    local_c = (int)fVar21;
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0xa8),*(int *)(lVar12 + 0xac),(TRect *)&local_18);
  }
  if (cVar3 == '\0') {
    bVar7 = TestFlag<VaseFlags>(*(undefined4 *)(this + 400),8);
    if (!bVar7) {
      SeedPacket::GetPlantType();
      plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar16 = (**(code **)(*plVar15 + 0x70))(plVar15,0xfffffffe);
      Sexy::StrFormat(L"%d",auStack_48,uVar16 & 0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
      cVar3 = FUN_0443db18(*(undefined4 *)(this + 400));
      if ((cVar3 == '\0') && (bVar1 == 0)) {
        Sexy::Color::Color((Color *)&local_18,0xff,0,0);
        local_28 = CONCAT44(uStack_14,local_18);
        uStack_20 = CONCAT44(local_c,uStack_10);
      }
      else if (bVar2 != 0) {
        Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
        local_28 = CONCAT44(uStack_14,local_18);
        uStack_20 = CONCAT44(local_c,uStack_10);
      }
      uVar17 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
      iVar9 = FUN_0443d7b4(0x18);
      iVar10 = FUN_0443d7b4(0x3c);
      iVar8 = FUN_0443d7b4(0x46);
      fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
      FUN_05477b24(auStack_40,auStack_48);
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)iVar9,(float)iVar10,(float)iVar8,fVar21,uVar17,param_1,
                 auStack_40,2,0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0);
      FUN_05476c50(auStack_40);
      FUN_05476c50(auStack_48);
    }
  }
  else {
    Sexy::Color::Color((Color *)&local_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x90),*(int *)(lVar12 + 0x94),
               (TRect *)(lVar12 + 0x80));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket_Powerup::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Powerup::Draw(SeedPacket_Powerup *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

