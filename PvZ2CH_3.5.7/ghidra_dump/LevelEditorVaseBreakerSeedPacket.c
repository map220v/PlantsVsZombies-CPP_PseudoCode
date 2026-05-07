// Class: LevelEditorVaseBreakerSeedPacket


/* LevelEditorVaseBreakerSeedPacket::~LevelEditorVaseBreakerSeedPacket() */

void __thiscall
LevelEditorVaseBreakerSeedPacket::~LevelEditorVaseBreakerSeedPacket
          (LevelEditorVaseBreakerSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0696c160;
  FUN_05476c50(this + 0x110);
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorVaseBreakerSeedPacket::~LevelEditorVaseBreakerSeedPacket() */

void __thiscall
LevelEditorVaseBreakerSeedPacket::~LevelEditorVaseBreakerSeedPacket
          (LevelEditorVaseBreakerSeedPacket *this)

{
  ~LevelEditorVaseBreakerSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseBreakerSeedPacket::LevelEditorVaseBreakerSeedPacket(LevelEditorVaseBreakerSeedBank*)
    */

void __thiscall
LevelEditorVaseBreakerSeedPacket::LevelEditorVaseBreakerSeedPacket
          (LevelEditorVaseBreakerSeedPacket *this,LevelEditorVaseBreakerSeedBank *param_1)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0696c160;
  FUN_05476574(this + 0x110);
  *(undefined4 *)(this + 0x108) = 0;
  *(LevelEditorVaseBreakerSeedBank **)(this + 0x100) = param_1;
  FUN_054772c4(this + 0x110,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedPacket::onClearCardInfo() */

void __thiscall
LevelEditorVaseBreakerSeedPacket::onClearCardInfo(LevelEditorVaseBreakerSeedPacket *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x108) = 0;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8(this + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
  CustomLevelUtils::RemoveVaseBreakerContent(*(int *)(this + 0xd4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreakerSeedPacket::AddVaseBreakerDetail(int, std::string, int) */

void __thiscall
LevelEditorVaseBreakerSeedPacket::AddVaseBreakerDetail
          (undefined8 param_1_00,undefined4 param_1,string *param_3,undefined8 param_4)

{
  int iVar1;
  NameMapperBase *this;
  
  this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this,param_3);
  CustomLevelUtils::SetVaseBreakerContent(param_1,iVar1 == -1,param_3,param_4);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedPacket::onChangeCardInfo() */

void __thiscall
LevelEditorVaseBreakerSeedPacket::onChangeCardInfo(LevelEditorVaseBreakerSeedPacket *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0xd4);
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0xf0);
  AddVaseBreakerDetail(this,uVar1,asStack_10,*(undefined4 *)(this + 0x108));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedPacket::Reload() */

void __thiscall LevelEditorVaseBreakerSeedPacket::Reload(LevelEditorVaseBreakerSeedPacket *this)

{
  bool bVar1;
  int iVar2;
  NameMapperBase *this_00;
  undefined4 uVar3;
  undefined4 local_28;
  uint local_24;
  string asStack_20 [8];
  PakRecord aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = 0;
  std::string::string(asStack_20,"");
  nop();
  local_24 = 0;
  CustomLevelUtils::GetVaseBreakerContent
            (*(int *)(this + 0xd4),(VaseType *)&local_28,asStack_20,(int *)&local_24);
  bVar1 = std::operator!=(asStack_20,"");
  if (bVar1) {
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf8) + 0x18))();
      *(undefined8 *)(this + 0xf8) = 0;
    }
    this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    iVar2 = NameMapperBase::GetIdForName(this_00,asStack_20);
    uVar3 = 3;
    if (iVar2 != -1) {
      uVar3 = 1;
    }
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_18,uVar3,asStack_20);
    LevelEditorCardInfo::operator=
              ((LevelEditorCardInfo *)(this + 0xe8),(LevelEditorCardInfo *)aPStack_18);
    PakRecord::~PakRecord(aPStack_18);
    *(uint *)(this + 0x108) = local_24;
    Sexy::StrFormat(L"%d",aPStack_18,(ulong)local_24);
    FUN_054766c8(this + 0x110,aPStack_18);
    FUN_05476c50(aPStack_18);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedPacket::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorVaseBreakerSeedPacket::Draw(LevelEditorVaseBreakerSeedPacket *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SeedPacketUtils *pSVar6;
  PacketRenderData *pPVar7;
  DeviceImage *pDVar8;
  Image *pIVar9;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86838);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar9 = *(Image **)(this + 0xf8);
  if (pIVar9 == (Image *)0x0) {
    if (*(int *)(this + 0xe8) == 1) {
      pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar7 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(pSVar6,(string *)(this + 0xf0),-1,-1,-1);
      pDVar8 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar6,pPVar7,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar8;
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar6,pDVar8,pPVar7,false,-1,false,false);
    }
    else {
      if (*(int *)(this + 0xe8) != 3) goto LAB_04b688f8;
      pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string((string *)aIStack_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      nop();
      pPVar7 = (PacketRenderData *)
               SeedPacketUtils::GetZombiePacketRenderData
                         (pSVar6,(string *)(this + 0xf0),(string *)aIStack_18,-1);
      pDVar8 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar6,pPVar7,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar8;
      SeedPacketUtils::DrawPacketToDeviceImageNoBackground(pSVar6,pDVar8,pPVar7,false,-1);
      std::string::~string((string *)aIStack_18);
    }
    pIVar9 = *(Image **)(this + 0xf8);
    if (pIVar9 == (Image *)0x0) goto LAB_04b688f8;
  }
  if (*(int *)(this + 0xe8) == 3) {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86b20);
    Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),0,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
  }
  else {
    Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  iVar2 = FUN_04b665cc(0xfffffff6);
  iVar3 = FUN_04b665cc(0x1e);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04b665cc(0x14);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar1 - iVar3,*(int *)(this + 0x50),iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar5,aIStack_18,4,1);
LAB_04b688f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorVaseBreakerSeedPacket::TouchEnded(LevelEditorVaseBreakerSeedPacket *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorVaseBreakerSetting *this_01;
  undefined8 uVar8;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  Insets aIStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_01 = ::operator_new(0x188);
      LevelEditorVaseBreakerSetting::LevelEditorVaseBreakerSetting(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_40,this);
      iVar1 = *(int *)(this + 0x50);
      uVar6 = FUN_04b665cc(0x168);
      uVar7 = FUN_04b665cc(400);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,local_40 + iVar1,local_3c,uVar6,uVar7);
      FUN_04b665e0(this_01);
      TodStringTranslate(L"[SETTINGS_TITLE]");
      LevelEditorSliderWidget::SetTitle((wstring *)this_01);
      FUN_05476c50(aIStack_38);
      TodStringTranslate(L"[CUSTOM_LEVEL_VASE_BREAKER_SET_NUMBER]");
      LevelEditorSliderWidget::SetDescription((wstring *)this_01);
      FUN_05476c50(aIStack_38);
      FUN_04b65794(this_01 + 0xec);
      FUN_04b657a0(this_01 + 0xe8);
      FUN_04b653dc(this_01 + 0xf0,5);
      (**(code **)(*(long *)this_01 + 800))(this_01);
      uVar8 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b6645c(afStack_28,this,uVar8);
      LevelEditorVaseBreakerSetting::SetFunc(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar5 = local_44;
      iVar1 = local_48 + *(int *)(this + 0x50);
      iVar2 = FUN_04b665cc(0x1e);
      iVar3 = FUN_04b665cc(0x50);
      iVar4 = FUN_04b665cc(0x3c);
      Sexy::Insets::Insets(aIStack_38,iVar1,iVar5 - iVar2,iVar3,iVar4);
      FUN_04b663a4(afStack_28,this_00,this);
      std::string::string((string *)&local_40,"set");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,1,aIStack_38,afStack_28,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      iVar1 = *(int *)(this + 0x50);
      iVar5 = FUN_04b665cc(0x1e);
      iVar2 = FUN_04b665cc(0x50);
      iVar3 = FUN_04b665cc(0x3c);
      Sexy::Insets::Insets(aIStack_38,local_48 + iVar1,local_44 + iVar5,iVar2,iVar3);
      FUN_04b66400(afStack_28,this_00,this);
      std::string::string((string *)&local_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,2,aIStack_38,afStack_28,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

