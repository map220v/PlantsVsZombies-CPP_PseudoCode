// Class: LevelEditorSingleHandedWaveDisplay


/* LevelEditorSingleHandedWaveDisplay::~LevelEditorSingleHandedWaveDisplay() */

void __thiscall
LevelEditorSingleHandedWaveDisplay::~LevelEditorSingleHandedWaveDisplay
          (LevelEditorSingleHandedWaveDisplay *this)

{
  *(undefined ***)this = &PTR_GetClass_06966850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06966b90;
  LevelEditorWaveDisplay::~LevelEditorWaveDisplay((LevelEditorWaveDisplay *)this);
  return;
}


/* LevelEditorSingleHandedWaveDisplay::~LevelEditorSingleHandedWaveDisplay() */

void __thiscall
LevelEditorSingleHandedWaveDisplay::~LevelEditorSingleHandedWaveDisplay
          (LevelEditorSingleHandedWaveDisplay *this)

{
  ~LevelEditorSingleHandedWaveDisplay(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedWaveDisplay::SetPlantfoodStateData(bool) */

void LevelEditorSingleHandedWaveDisplay::SetPlantfoodStateData(bool param_1)

{
  CustomLevelMgr *this;
  
  this = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSingleHandedWavePlantfood
            (this,*(int *)((ulong)param_1 + 0xe4),*(bool *)((ulong)param_1 + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveDisplay::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorSingleHandedWaveDisplay::TouchEnded
          (LevelEditorSingleHandedWaveDisplay *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LevelEditorSingleHandedWaveZombieSetting *this_00;
  long *plVar6;
  LevelEditorSingleHandedZombieSelectList *this_01;
  long lVar7;
  undefined1 auStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) {
    this_00 = ::operator_new(0xd8);
    LevelEditorSingleHandedWaveZombieSetting::LevelEditorSingleHandedWaveZombieSetting(this_00);
    (**(code **)(*(long *)this + 0xd0))(auStack_18,this);
    iVar1 = FUN_04b54f08(200);
    iVar5 = *(int *)(gLawnApp + 0xd4);
    uVar2 = FUN_04b54f08(0x8c);
    uVar3 = FUN_04b54f08(500);
    uVar4 = FUN_04b54f08(0x1c2);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar5 / 2 - iVar1,uVar2,uVar3,uVar4);
    (**(code **)(*(long *)this_00 + 0x310))(this_00,*(undefined4 *)(this + 0xe4));
    plVar6 = (long *)LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    this_01 = ::operator_new(0x120);
    LevelEditorSingleHandedZombieSelectList::LevelEditorSingleHandedZombieSelectList(this_01);
    lVar7 = UISingletonDialog<LevelEditor>::GetSingletonPtr();
    if (lVar7 == 0) {
      Sexy::Point::Point(aPStack_10,0,0);
    }
    else {
      LevelEditor::GetZombieStageAbsPoint();
    }
    iVar5 = FUN_04b54f08(0x2ee);
    uVar2 = FUN_04b54f08(0x19);
    uVar3 = FUN_04b54f08(100);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,(*(int *)(gLawnApp + 0xd4) - iVar5) / 2,uVar2,iVar5,uVar3);
    (**(code **)(*(long *)this_01 + 0x318))(this_01);
    (**(code **)(*plVar6 + 0x60))(plVar6,this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveDisplay::Init(int) */

void __thiscall
LevelEditorSingleHandedWaveDisplay::Init(LevelEditorSingleHandedWaveDisplay *this,int param_1)

{
  wstring *pwVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar5;
  DeviceImage *pDVar6;
  PVZ2UIButton *pPVar7;
  string *extraout_x1;
  long *plVar8;
  int local_88 [2];
  Sexy aSStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe4) = param_1;
  pwVar1 = (wstring *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  TodStringTranslate(L"[LEVEL_EDITOR_ZOMBIE_WAVE_NUM]");
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  local_88[0] = *(int *)(this + 0xe4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_88);
  Sexy::ToSexyString(aSStack_80,extraout_x1);
  TodReplaceString(pwVar1,L"{NUM}",(wstring *)asStack_78);
  FUN_054766c8(pwVar1,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(asStack_78);
  std::string::~string((string *)aSStack_80);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  std::string::string(asStack_78,"tutorial");
  std::string::string(asStack_40,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
  pPVar5 = (PacketRenderData *)
           SeedPacketUtils::GetZombiePacketRenderData(this_00,asStack_78,asStack_40,-1);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  pDVar6 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar5,0,0);
  *(DeviceImage **)(this + 0x108) = pDVar6;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar6,pPVar5,false,-1,false,false);
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0x15,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(asStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b86070,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b86070,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x100);
  uVar2 = FUN_04b54f08(0x17);
  uVar3 = FUN_04b54f08(0x1e);
  uVar4 = FUN_04b54f08(0x23);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  (**(code **)(*(long *)this + 800))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSingleHandedWaveDisplay::LevelEditorSingleHandedWaveDisplay() */

void __thiscall
LevelEditorSingleHandedWaveDisplay::LevelEditorSingleHandedWaveDisplay
          (LevelEditorSingleHandedWaveDisplay *this)

{
  LevelEditorWaveDisplay::LevelEditorWaveDisplay((LevelEditorWaveDisplay *)this);
  *(undefined ***)this = &PTR_GetClass_06966850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06966b90;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveDisplay::Reload() */

void __thiscall LevelEditorSingleHandedWaveDisplay::Reload(LevelEditorSingleHandedWaveDisplay *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CustomLevelMgr *pCVar4;
  int iVar5;
  LevelEditorSingleHandedWaveDisplay *pLVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pLVar6 = this + 0xec;
  iVar5 = 0;
  do {
    pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    iVar1 = iVar5 + 1;
    CustomLevelMgr::GetSingleHandedWaveRowZombies
              (pCVar4,*(int *)(this + 0xe4),iVar5,(vector *)&local_20);
    uVar3 = FUN_04b53500(local_20,local_18);
    *(undefined4 *)pLVar6 = uVar3;
    pLVar6 = pLVar6 + 4;
    iVar5 = iVar1;
  } while (iVar1 != 5);
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  cVar2 = CustomLevelMgr::GetSingleHandedWavePlantfood(pCVar4,*(int *)(this + 0xe4));
  LevelEditorWaveDisplay::SetPlantfoodState((LevelEditorWaveDisplay *)this,cVar2 != '\0');
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

