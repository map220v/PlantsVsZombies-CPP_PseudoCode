// Class: LevelEditorBoardGrid


/* LevelEditorBoardGrid::Init() */

void __thiscall LevelEditorBoardGrid::Init(LevelEditorBoardGrid *this)

{
  (**(code **)(*(long *)this + 0x318))();
  return;
}


/* LevelEditorBoardGrid::~LevelEditorBoardGrid() */

void __thiscall LevelEditorBoardGrid::~LevelEditorBoardGrid(LevelEditorBoardGrid *this)

{
  *(undefined ***)this = &PTR_GetClass_06959550;
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PakRecord::~PakRecord((PakRecord *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorBoardGrid::~LevelEditorBoardGrid() */

void __thiscall LevelEditorBoardGrid::~LevelEditorBoardGrid(LevelEditorBoardGrid *this)

{
  ~LevelEditorBoardGrid(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGrid::OnTutorialCreated() */

void __thiscall LevelEditorBoardGrid::OnTutorialCreated(LevelEditorBoardGrid *this)

{
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) == 1) {
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_5]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(this,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorBoardGrid::ClearData() */

void __thiscall LevelEditorBoardGrid::ClearData(LevelEditorBoardGrid *this)

{
  int iVar1;
  CustomLevelMgr *pCVar2;
  
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 1) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdatePlantGrid
              (pCVar2,(string *)(this + 0xf0),*(int *)(this + 0xdc),*(int *)(this + 0xd8),1,false);
  }
  else if (iVar1 == 4) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateGridItemGrid
              (pCVar2,(string *)(this + 0xf0),*(int *)(this + 0xdc),*(int *)(this + 0xd8),1,false);
  }
  else if (iVar1 == 6) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateMoldGrid(pCVar2,*(int *)(this + 0xdc),*(int *)(this + 0xd8),false);
  }
  else if (iVar1 == 5) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateRails(pCVar2,*(int *)(this + 0xdc),*(int *)(this + 0xd8),false);
  }
  else if (iVar1 == 8) {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RemovePowerTile(pCVar2,*(int *)(this + 0xdc),*(int *)(this + 0xd8));
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* LevelEditorBoardGrid::SetData(LevelEditorCardInfo const&) */

void __thiscall
LevelEditorBoardGrid::SetData(LevelEditorBoardGrid *this,LevelEditorCardInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CustomLevelMgr *pCVar3;
  
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0xe8),(GriditemBarrelZombieDes *)param_1);
  iVar1 = *(int *)(this + 0xe8);
  if (iVar1 == 1) {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdatePlantGrid
              (pCVar3,(string *)(this + 0xf0),*(int *)(this + 0xdc),*(int *)(this + 0xd8),1,true);
  }
  else if (iVar1 == 4) {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateGridItemGrid
              (pCVar3,(string *)(this + 0xf0),*(int *)(this + 0xdc),*(int *)(this + 0xd8),1,true);
  }
  else if (iVar1 == 6) {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateMoldGrid(pCVar3,*(int *)(this + 0xdc),*(int *)(this + 0xd8),true);
  }
  else if (iVar1 == 5) {
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdateRails(pCVar3,*(int *)(this + 0xdc),*(int *)(this + 0xd8),true);
  }
  else if (iVar1 == 8) {
    uVar2 = GetTileClassByTileName((string *)(this + 0xf0));
    pCVar3 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::UpdatePowerTile
              (pCVar3,uVar2,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xd8));
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGrid::Reload() */

void __thiscall LevelEditorBoardGrid::Reload(LevelEditorBoardGrid *this)

{
  char cVar1;
  CustomLevelMgr *pCVar2;
  size_t sVar3;
  int iStack_20;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  Set8BytesTo0(asStack_18);
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  cVar1 = CustomLevelMgr::GetPlantGrid
                    (pCVar2,*(int *)(this + 0xdc),*(int *)(this + 0xd8),asStack_18,&iStack_20);
  if (cVar1 == '\0') {
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    cVar1 = CustomLevelMgr::GetGridItemGrid
                      (pCVar2,*(int *)(this + 0xdc),*(int *)(this + 0xd8),asStack_18);
    if (cVar1 == '\0') {
      pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      sVar3 = (size_t)*(uint *)(this + 0xd8);
      cVar1 = CustomLevelMgr::GetMoldGrid(pCVar2,*(int *)(this + 0xdc),*(uint *)(this + 0xd8));
      if (cVar1 == '\0') {
        pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        sVar3 = (size_t)*(uint *)(this + 0xd8);
        cVar1 = CustomLevelMgr::GetRailGrid(pCVar2,*(int *)(this + 0xdc),*(uint *)(this + 0xd8));
        if (cVar1 == '\0') {
          pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
          sVar3 = (size_t)*(uint *)(this + 0xd8);
          cVar1 = CustomLevelMgr::GetPowerTile
                            (pCVar2,*(int *)(this + 0xdc),*(uint *)(this + 0xd8),
                             (PowerTileClass *)&local_1c);
          if (cVar1 == '\0') {
            *(undefined4 *)(this + 0xe8) = 0;
            std::string::append((string *)(this + 0xf0),"",sVar3);
          }
          else {
            *(undefined4 *)(this + 0xe8) = 8;
            GetTileNameByTileClass(asStack_10,local_1c);
            thunk_FUN_05475e00(this + 0xf0,asStack_10);
            std::string::~string(asStack_10);
          }
        }
        else {
          *(undefined4 *)(this + 0xe8) = 5;
          std::string::append((string *)(this + 0xf0),"railcart_cowboy",sVar3);
        }
      }
      else {
        *(undefined4 *)(this + 0xe8) = 6;
        std::string::append((string *)(this + 0xf0),"mold",sVar3);
      }
    }
    else {
      *(undefined4 *)(this + 0xe8) = 4;
      thunk_FUN_05475e00(this + 0xf0,asStack_18);
    }
  }
  else {
    *(undefined4 *)(this + 0xe8) = 1;
    thunk_FUN_05475e00(this + 0xf0,asStack_18);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGrid::LevelEditorBoardGrid(int, int) */

void __thiscall
LevelEditorBoardGrid::LevelEditorBoardGrid(LevelEditorBoardGrid *this,int param_1,int param_2)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd8) = param_1;
  *(int *)(this + 0xdc) = param_2;
  *(undefined ***)this = &PTR_GetClass_06959550;
  this[0xe0] = (LevelEditorBoardGrid)0x0;
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)(this + 0xe8));
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTutorialCreated);
  Sexy::Delegate0::Delegate0<LevelEditorBoardGrid,void(LevelEditorBoardGrid::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)this_00,Message::CustomLevelTutorialSeedPacketCreated,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGrid::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorBoardGrid::Draw(LevelEditorBoardGrid *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  SeedPacketUtils *pSVar3;
  PacketRenderData *pPVar4;
  DeviceImage *pDVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf8) == 0) {
    iVar1 = *(int *)(this + 0xe8);
    if ((iVar1 - 4U < 3) || (iVar1 == 8)) {
      pSVar3 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar4 = (PacketRenderData *)
               SeedPacketUtils::GetLevelEditorRenderData(pSVar3,(string *)(this + 0xf0));
      pDVar5 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar3,pPVar4,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar5;
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar3,pDVar5,pPVar4,false,-1,false,false);
    }
    else {
      if (iVar1 != 1) goto LAB_04b3ae80;
      pSVar3 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar4 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(pSVar3,(string *)(this + 0xf0),-1,-1,-1);
      pDVar5 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar3,pPVar4,0,0);
      *(DeviceImage **)(this + 0xf8) = pDVar5;
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar3,pDVar5,pPVar4,false,-1,false,false);
    }
    if (*(long *)(this + 0xf8) == 0) goto LAB_04b3ae80;
  }
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
LAB_04b3ae80:
  if (this[0xe0] != (LevelEditorBoardGrid)0x0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85398);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGrid::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorBoardGrid::TouchEnded(LevelEditorBoardGrid *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LevelEditorBoardGridBehavior *this_00;
  int *piVar11;
  LevelEditorPlantRare *pLVar12;
  LevelEditorMultifunctionAssembly *this_01;
  int local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 0) {
      this_00 = ::operator_new(0x108);
      LevelEditorBoardGridBehavior::LevelEditorBoardGridBehavior(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_40,this);
      iVar5 = FUN_04b334ec(200);
      lVar4 = gLawnApp;
      iVar9 = *(int *)(gLawnApp + 0xd4);
      iVar6 = FUN_04b334ec(0xaa);
      iVar10 = *(int *)(lVar4 + 0xd8);
      iVar7 = FUN_04b334ec(400);
      iVar8 = FUN_04b334ec(0x154);
      Sexy::Insets::Insets((Insets *)&local_38,iVar9 / 2 - iVar5,iVar10 / 2 - iVar6,iVar7,iVar8);
      lVar4 = gLawnApp;
      if (*(int *)(this + 0xdc) < 4) {
        local_50[0] = local_40 + *(int *)(this + 0x50);
        local_48 = *(int *)(gLawnApp + 0xd4) - local_30;
        piVar11 = eastl::min_alt<int>(local_50,&local_48);
        local_38 = *piVar11;
        local_48 = *(int *)(lVar4 + 0xd8);
      }
      else {
        local_50[0] = local_40 - local_30;
        local_48 = iVar1;
        piVar11 = eastl::max_alt<int>(local_50,&local_48);
        local_38 = *piVar11;
        local_48 = *(int *)(gLawnApp + 0xd8);
      }
      local_48 = local_48 - local_2c;
      piVar11 = eastl::min_alt<int>(&iStack_3c,&local_48);
      local_34 = *piVar11;
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,(Insets *)&local_38);
      pLVar12 = (LevelEditorPlantRare *)
                LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
      FUN_04b2d7d8(this + 0xe0,1);
      uVar2 = *(undefined4 *)(this + 0xd8);
      uVar3 = *(undefined4 *)(this + 0xdc);
      FUN_04b32cfc(afStack_28,this,pLVar12);
      LevelEditorBoardGridBehavior::Init(this_00,uVar2,uVar3,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      FUN_04b32560(afStack_28,this);
      LevelEditorPlantRare::SetCallBack(pLVar12,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      LevelEditorBoardGridBehavior::TriggerTutorial(this_00);
    }
    else {
      this_01 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar1 = local_48 + *(int *)(this + 0x50);
      iVar9 = FUN_04b334ec(10);
      iVar10 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_38,iVar1 + iVar9,local_44 + (*(int *)(this + 0x54) - iVar10) / 2,
                 iVar10,iVar10);
      FUN_04b325bc(afStack_28,this_01,this);
      std::string::string((string *)&local_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_01,1,(Insets *)&local_38,afStack_28,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

