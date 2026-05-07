// Class: UIPennyClassroomStartLevel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::OnCreate() */

void __thiscall UIPennyClassroomStartLevel::OnCreate(UIPennyClassroomStartLevel *this)

{
  undefined4 uVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::GetLayoutName() */

void __thiscall UIPennyClassroomStartLevel::GetLayoutName(UIPennyClassroomStartLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyClassroomStartLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::GetGotoLevelName(int, int) */

void UIPennyClassroomStartLevel::GetGotoLevelName(int param_1,int param_2)

{
  int in_w2;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::StrFormat("penny_class_%d",asStack_10,(ulong)(uint)((param_2 + -1) * 5 + in_w2 + 1));
    FUN_05474148();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::GetTitle(int, std::string) */

void UIPennyClassroomStartLevel::GetTitle
               (undefined8 param_1,undefined8 param_2,int param_3,string *param_4)

{
  wchar_t *pwVar1;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    pwVar1 = L"[PENNY_CLASSROOM_EASY_LEVEL_TITLE]";
  }
  else if (param_3 == 2) {
    pwVar1 = L"[PENNY_CLASSROOM_NORMAL_LEVEL_TITLE]";
  }
  else {
    if (param_3 != 3) {
      FUN_05478178(param_1,&DAT_056f11a8,awStack_10);
      nop();
      goto LAB_04de95d4;
    }
    pwVar1 = L"[PENNY_CLASSROOM_HARD_LEVEL_TITLE]";
  }
  TodStringTranslate(pwVar1);
  StringHelper::ToStringValue(param_4);
  TodReplaceString(awStack_18,L"{NAME}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
LAB_04de95d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::GetPlantDesc(std::string) */

void UIPennyClassroomStartLevel::GetPlantDesc(undefined8 param_1,undefined8 param_2,Sexy *param_3)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Upper(param_3,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("[PENNY_CLASSROOM_PLANT_DESC_%s]",asStack_18,uVar1);
  std::string::~string(asStack_10);
  StringHelper::ToStringValue(asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::GetLevelDesc(int, std::string) */

void UIPennyClassroomStartLevel::GetLevelDesc
               (undefined8 param_1,undefined8 param_2,int param_3,Sexy *param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  string *extraout_x1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  nop();
  if (param_3 == 1) {
    Sexy::Upper(param_4,extraout_x1);
    uVar1 = FUN_0547429c(asStack_18);
    pcVar2 = "[PENNY_CLASSROOM_EASY_LEVEL_DESC_%s]";
  }
  else if (param_3 == 2) {
    Sexy::Upper(param_4,extraout_x1);
    uVar1 = FUN_0547429c(asStack_18);
    pcVar2 = "[PENNY_CLASSROOM_NORMAL_LEVEL_DESC_%s]";
  }
  else {
    if (param_3 != 3) goto LAB_04de978c;
    Sexy::Upper(param_4,extraout_x1);
    uVar1 = FUN_0547429c(asStack_18);
    pcVar2 = "[PENNY_CLASSROOM_HARD_LEVEL_DESC_%s]";
  }
  Sexy::StrFormat(pcVar2,asStack_10,uVar1);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
LAB_04de978c:
  StringHelper::ToStringValue(asStack_20);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* UIPennyClassroomStartLevel::UIPennyClassroomStartLevel() */

void __thiscall
UIPennyClassroomStartLevel::UIPennyClassroomStartLevel(UIPennyClassroomStartLevel *this)

{
  UISingletonDialog<UIPennyClassroomStartLevel>::UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomStartLevel> *)this);
  *(undefined ***)this = &PTR_GetClass_069cf350;
  *(undefined **)(this + 0xd8) = &DAT_069cf6a0;
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x140));
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::StartLevel() */

void __thiscall UIPennyClassroomStartLevel::StartLevel(UIPennyClassroomStartLevel *this)

{
  GameStateMgr *pGVar1;
  PennyClassroomManager *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PennyClassroomManager *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
  PennyClassroomManager::SetCurrentLevel(this_00,*(int *)(this + 0x134),*(int *)(this + 0x138));
  GetGotoLevelName((int)this,*(int *)(this + 0x134));
  pGVar1 = gGameStateMgr;
  std::string::string(asStack_10,"activity");
  GameStateMgr::StartLevel(pGVar1,asStack_10,asStack_18,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  UISingletonDialog<UIPennyClassroomStartLevel>::CloseDialog();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroomStartLevel::ButtonDepress(int) */

void __thiscall
UIPennyClassroomStartLevel::ButtonDepress(UIPennyClassroomStartLevel *this,int param_1)

{
  if (param_1 == 1000) {
    UISingletonDialog<UIPennyClassroomStartLevel>::CloseDialog();
    return;
  }
  if (param_1 == 3000) {
    StartLevel(this);
    return;
  }
  return;
}


/* non-virtual thunk to UIPennyClassroomStartLevel::ButtonDepress(int) */

void __thiscall
UIPennyClassroomStartLevel::ButtonDepress(UIPennyClassroomStartLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIPennyClassroomStartLevel::~UIPennyClassroomStartLevel() */

void __thiscall
UIPennyClassroomStartLevel::~UIPennyClassroomStartLevel(UIPennyClassroomStartLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_069cf350;
  *(undefined **)(this + 0xd8) = &DAT_069cf6a0;
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x140))
  ;
  UISingletonDialog<UIPennyClassroomStartLevel>::~UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomStartLevel> *)this);
  return;
}


/* UIPennyClassroomStartLevel::~UIPennyClassroomStartLevel() */

void __thiscall
UIPennyClassroomStartLevel::~UIPennyClassroomStartLevel(UIPennyClassroomStartLevel *this)

{
  ~UIPennyClassroomStartLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::InitHeadshotPopanim(std::string) */

void UIPennyClassroomStartLevel::InitHeadshotPopanim(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string *psVar3;
  PopAnimRig *pPVar4;
  UIWidgetAnim *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pPVar4 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this);
  uVar1 = FUN_04de8b64(0);
  uVar2 = FUN_04de8b64(0x32);
  (**(code **)(*(long *)this + 0x198))
            (this,uVar1,uVar2,*(undefined4 *)(*(long *)(param_1 + 0x208) + 0x50),
             *(undefined4 *)(*(long *)(param_1 + 0x208) + 0x54));
  this[0x59] = (UIWidgetAnim)0x0;
  UIWidgetAnim::SetAnimRig(this,pPVar4);
  std::string::string((string *)aRStack_10,"idle");
  UIWidgetAnim::SetLabel((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  (**(code **)(**(long **)(param_1 + 0x208) + 0x60))(*(long **)(param_1 + 0x208),this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomStartLevel::InitView(int, int, NetworkPennyClassroomData) */

void __thiscall
UIPennyClassroomStartLevel::InitView
          (UIPennyClassroomStartLevel *this,undefined4 param_1,int param_2,
          NetworkPennyClassroomData *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  UIWidgetText *pUVar6;
  long lVar7;
  PennyClassroomPlantAbilityWidget *this_00;
  long *plVar8;
  vector *pvVar9;
  int *piVar10;
  long *plVar11;
  string *extraout_x1;
  ulong uVar12;
  int iVar13;
  Sexy aSStack_88 [8];
  string asStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x134) = param_1;
  *(int *)(this + 0x138) = param_2;
  std::string::string((string *)&local_20,"PlantBg");
  uVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  *(undefined8 *)(this + 0x208) = uVar5;
  std::string::~string((string *)&local_20);
  nop();
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x140),param_4);
  FUN_04de7f60(*(undefined8 *)(this + 0x160),(long)param_2);
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  FUN_05475d88((string *)&local_20,aSStack_88);
  InitHeadshotPopanim(this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::string((string *)&local_20,"PlantName");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  Sexy::Upper(aSStack_88,extraout_x1);
  uVar5 = FUN_0547429c((string *)&local_20);
  Sexy::StrFormat("[%s]",asStack_80,uVar5);
  std::string::~string((string *)&local_20);
  StringHelper::ToStringValue(asStack_80);
  PuzzleTip::SetTip(pUVar6,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::string((string *)&local_20,"Title");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  uVar2 = *(undefined4 *)(this + 0x134);
  FUN_05475d88((string *)local_38,asStack_80);
  GetTitle((string *)&local_20,this,uVar2,(string *)local_38);
  PuzzleTip::SetTip(pUVar6,(string *)&local_20);
  FUN_05476c50((string *)&local_20);
  std::string::~string((string *)local_38);
  lVar7 = FUN_04de7f60(*(undefined8 *)(this + 0x160),(long)param_2);
  iVar1 = *(int *)(lVar7 + 4);
  iVar3 = *(int *)(lVar7 + 8);
  this_00 = ::operator_new(0xf8);
  PennyClassroomPlantAbilityWidget::PennyClassroomPlantAbilityWidget(this_00,iVar1,iVar3);
  uVar2 = FUN_04de8b64(0x14);
  lVar7 = *(long *)(this + 0x208);
  iVar3 = FUN_04de8b64(0x32);
  iVar1 = *(int *)(lVar7 + 0x54);
  iVar4 = FUN_04de8b64(0x28);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar2,iVar1 - iVar3,*(int *)(lVar7 + 0x50) - iVar4,iVar4);
  PennyClassroomPlantAbilityWidget::InitView(this_00);
  (**(code **)(**(long **)(this + 0x208) + 0x60))(*(long **)(this + 0x208),this_00);
  std::string::string((string *)&local_20,"PlantDescContainer");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  FUN_05475d88((string *)&local_20,aSStack_88);
  GetPlantDesc(auStack_78,this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  PuzzleTip::SetTip(pUVar6,auStack_78);
  std::string::string((string *)&local_20,"LevelDescContainer");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  uVar2 = *(undefined4 *)(this + 0x134);
  FUN_05475d88((string *)&local_20,aSStack_88);
  GetLevelDesc(auStack_70,this,uVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  PuzzleTip::SetTip(pUVar6,auStack_70);
  std::string::string((string *)&local_20,"PlantListContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar1 = *(int *)((long)plVar8 + 0x54);
  lVar7 = plVar8[10];
  iVar3 = FUN_04de8b64(5);
  pvVar9 = (vector *)FUN_04de7fdc(*(undefined8 *)(this + 0x1f0),(long)*(int *)(this + 0x134));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)local_68,pvVar9);
  pvVar9 = (vector *)FUN_04de7f80(local_68[0],(long)*(int *)(this + 0x138));
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_50,pvVar9);
  uVar5 = local_50;
  iVar4 = FUN_04de7964(local_50,local_48);
  if (0 < iVar4) {
    uVar12 = 0;
    iVar13 = ((int)lVar7 - (iVar1 + iVar3) * iVar4) / 2;
    while( true ) {
      piVar10 = (int *)FUN_04de7f28(uVar5,uVar12);
      plVar11 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar10,0,true);
      (**(code **)(*plVar11 + 0x198))(plVar11,iVar13,0,iVar1,iVar1);
      (**(code **)(*plVar8 + 0x60))(plVar8,plVar11);
      if (uVar12 == iVar4 - 1) break;
      uVar12 = uVar12 + 1;
      uVar5 = local_50;
      iVar13 = iVar13 + iVar1 + iVar3;
    }
  }
  std::string::string((string *)&local_20,"BonusContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar1 = *(int *)((long)plVar8 + 0x54);
  lVar7 = plVar8[10];
  pvVar9 = (vector *)FUN_04de7eb4(*(undefined8 *)(this + 0x1a8),(long)*(int *)(this + 0x134));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)local_38,pvVar9);
  pvVar9 = (vector *)FUN_04de7ec0(local_38[0],(long)*(int *)(this + 0x138));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,pvVar9);
  uVar5 = local_20;
  iVar4 = FUN_04de7ecc(local_20,local_18);
  if (0 < iVar4) {
    uVar12 = 0;
    iVar13 = ((int)lVar7 - (iVar3 + iVar1) * iVar4) / 2;
    while( true ) {
      piVar10 = (int *)FUN_04de7ee0(uVar5,uVar12);
      plVar11 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar10,piVar10[1],true);
      (**(code **)(*plVar11 + 0x198))(plVar11,iVar13,0,iVar1,iVar1);
      (**(code **)(*plVar8 + 0x60))(plVar8,plVar11);
      if (uVar12 == iVar4 - 1) break;
      uVar12 = uVar12 + 1;
      uVar5 = local_20;
      iVar13 = iVar13 + iVar3 + iVar1;
    }
  }
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)local_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)local_68);
  FUN_05476c50(auStack_70);
  FUN_05476c50(auStack_78);
  std::string::~string(asStack_80);
  std::string::~string((string *)aSStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

