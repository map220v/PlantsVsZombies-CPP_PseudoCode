// Class: PennyPerkBattleStatementChooseUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::GetLayoutName() */

void __thiscall
PennyPerkBattleStatementChooseUI::GetLayoutName(PennyPerkBattleStatementChooseUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyPerkBattleStatementChoose");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PennyPerkBattleStatementChooseUI::SetChooseIndex(int) */

void __thiscall
PennyPerkBattleStatementChooseUI::SetChooseIndex(PennyPerkBattleStatementChooseUI *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  *(int *)(this + 0x178) = param_1;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x138);
    uVar2 = FUN_04d88dbc(uVar5,*(undefined8 *)(this + 0x140));
    if (uVar2 <= uVar4) break;
    plVar1 = (long *)FUN_04d88dc8(uVar5,uVar4);
    iVar3 = (int)uVar4;
    uVar4 = uVar4 + 1;
    FUN_04d88d88(*plVar1 + 0x14c,param_1 == iVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::PennyPerkBattleStatementChooseUI() */

void __thiscall
PennyPerkBattleStatementChooseUI::PennyPerkBattleStatementChooseUI
          (PennyPerkBattleStatementChooseUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PennyPerkBattleStatementChooseUI>::UISingletonDialog
            ((UISingletonDialog<PennyPerkBattleStatementChooseUI> *)this);
  *(undefined ***)this = &PTR_GetClass_069b9ee0;
  *(undefined **)(this + 0xd8) = &DAT_069ba230;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>>::clear
            ((vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>> *)(this + 0x138));
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x150));
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Perks");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::~PennyPerkBattleStatementChooseUI() */

void __thiscall
PennyPerkBattleStatementChooseUI::~PennyPerkBattleStatementChooseUI
          (PennyPerkBattleStatementChooseUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_069ba230;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069b9ee0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Perks");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x150));
  std::vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>>::~vector
            ((vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>> *)(this + 0x138));
  UISingletonDialog<PennyPerkBattleStatementChooseUI>::~UISingletonDialog
            ((UISingletonDialog<PennyPerkBattleStatementChooseUI> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkBattleStatementChooseUI::~PennyPerkBattleStatementChooseUI() */

void __thiscall
PennyPerkBattleStatementChooseUI::~PennyPerkBattleStatementChooseUI
          (PennyPerkBattleStatementChooseUI *this)

{
  ~PennyPerkBattleStatementChooseUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::InitView() */

void __thiscall PennyPerkBattleStatementChooseUI::InitView(PennyPerkBattleStatementChooseUI *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  vector *pvVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  PVZ2UIButton *pPVar15;
  GridItemPoolEntry *pGVar16;
  PerkChooseWidget *pPVar17;
  code *pcVar18;
  undefined8 uVar19;
  ulong uVar20;
  string asStack_40 [8];
  PerkChooseWidget *local_38;
  RtWeakPtr aRStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PerkData,std::allocator<PerkData>>::clear
            ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x150));
  pvVar10 = (vector *)RiftUtils::GetLevelEndDrawPerks();
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::vector
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)&local_20,pvVar10);
  uVar20 = 0;
  while( true ) {
    uVar12 = FUN_04d88d94(local_20,local_18);
    if (uVar12 <= uVar20) break;
    iVar2 = PerkMapper::GetInstance();
    FUN_04d88da0(local_20,uVar20);
    NameMapperBase::GetNameForId(iVar2);
    lVar11 = FUN_04d88da0(local_20,uVar20);
    uVar6 = ClampInt(*(int *)(lVar11 + 4) + -1,0,10);
    uVar19 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    FUN_05475d88((string *)&local_38,asStack_40);
    PennyPerkMgr::CreatePerkData(aRStack_30,uVar19,(string *)&local_38,uVar6);
    std::string::~string((string *)&local_38);
    std::vector<PerkData,std::allocator<PerkData>>::push_back
              ((vector<PerkData,std::allocator<PerkData>> *)(this + 0x150),(PerkData *)aRStack_30);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_30);
    std::string::~string(asStack_40);
    uVar20 = uVar20 + 1;
  }
  std::string::string((string *)aRStack_30,"Background_0");
  plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)aRStack_30);
  std::string::~string((string *)aRStack_30);
  nop();
  (**(code **)(*plVar13 + 0x198))
            (plVar13,(*(int *)(gLawnApp + 0x724) - (int)plVar13[10]) / 2,
             *(undefined4 *)((long)plVar13 + 0x4c),(int)plVar13[10],
             *(undefined4 *)((long)plVar13 + 0x54));
  std::string::string((string *)aRStack_30,"Item");
  plVar14 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)aRStack_30);
  std::string::~string((string *)aRStack_30);
  nop();
  std::string::string((string *)aRStack_30,"ConfirmBtn");
  pPVar15 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)aRStack_30);
  *(PVZ2UIButton **)(this + 0x168) = pPVar15;
  std::string::~string((string *)aRStack_30);
  nop();
  (**(code **)(*plVar14 + 0x158))(plVar14,0);
  iVar3 = FUN_04d88d7c((int)plVar13[10]);
  iVar4 = FUN_04d891a0(0);
  iVar5 = FUN_04d88d7c((int)plVar14[10]);
  uVar6 = FUN_04d88d80(*(undefined4 *)((long)plVar14 + 0x54));
  iVar7 = FUN_04d88d78(*(undefined4 *)((long)plVar14 + 0x4c));
  uVar19 = *(undefined8 *)(this + 0x150);
  iVar8 = FUN_04d88da8(uVar19,*(undefined8 *)(this + 0x158));
  uVar1 = iVar8 - 1;
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = ((iVar3 + iVar4 * -2) - iVar5 * iVar8) / (int)uVar1;
  }
  if (0 < iVar8) {
    iVar3 = 0;
    uVar20 = 0;
    while( true ) {
      pGVar16 = (GridItemPoolEntry *)FUN_04d88db4(uVar19,uVar20);
      GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_30,pGVar16);
      pPVar17 = ::operator_new(0x160);
      PerkChooseWidget::PerkChooseWidget(pPVar17,uVar20 & 0xffffffff,aRStack_30,this);
      local_38 = pPVar17;
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_30);
      pPVar17 = local_38;
      iVar8 = FUN_04d88d74((int)plVar13[9]);
      iVar8 = iVar8 + iVar4 + iVar3;
      iVar3 = iVar3 + iVar5 + iVar2;
      iVar9 = FUN_04d88d78(*(undefined4 *)((long)plVar13 + 0x4c));
      (**(code **)(*(long *)pPVar17 + 0x198))(pPVar17,iVar8,iVar9 + iVar7,iVar5,uVar6);
      PerkChooseWidget::InitView(local_38);
      pcVar18 = *(code **)(*(long *)this + 0x60);
      local_38[0x59] = (PerkChooseWidget)0x0;
      (*pcVar18)(this,local_38);
      std::vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>>::push_back
                ((vector<PerkChooseWidget*,std::allocator<PerkChooseWidget*>> *)(this + 0x138),
                 &local_38);
      if (uVar20 == uVar1) break;
      uVar19 = *(undefined8 *)(this + 0x150);
      uVar20 = uVar20 + 1;
    }
  }
  SetChooseIndex(this,*(int *)(this + 0x178));
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::~vector
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkBattleStatementChooseUI::OnCreate() */

undefined4 __thiscall
PennyPerkBattleStatementChooseUI::OnCreate(PennyPerkBattleStatementChooseUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::CreateTestData() */

void __thiscall
PennyPerkBattleStatementChooseUI::CreateTestData(PennyPerkBattleStatementChooseUI *this)

{
  size_t in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  PennyPerkProperties aPStack_68 [16];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<PennyPerkProperties,std::allocator<PennyPerkProperties>>::clear
            ((vector<PennyPerkProperties,std::allocator<PennyPerkProperties>> *)in_x8);
  PennyPerkProperties::PennyPerkProperties(aPStack_68);
  std::string::append(asStack_58,"",in_x2);
  std::string::append(asStack_50,"",in_x2);
  std::string::append(asStack_48,"",in_x2);
  std::string::append(asStack_40,"",in_x2);
  std::vector<PennyPerkProperties,std::allocator<PennyPerkProperties>>::push_back
            ((vector<PennyPerkProperties,std::allocator<PennyPerkProperties>> *)in_x8,aPStack_68);
  std::vector<PennyPerkProperties,std::allocator<PennyPerkProperties>>::push_back
            ((vector<PennyPerkProperties,std::allocator<PennyPerkProperties>> *)in_x8,aPStack_68);
  std::vector<PennyPerkProperties,std::allocator<PennyPerkProperties>>::push_back
            ((vector<PennyPerkProperties,std::allocator<PennyPerkProperties>> *)in_x8,aPStack_68);
  PennyPerkProperties::~PennyPerkProperties(aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::RequestChoosePerk(int, int) */

void __thiscall
PennyPerkBattleStatementChooseUI::RequestChoosePerk
          (PennyPerkBattleStatementChooseUI *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  NetworkMgr *pNVar3;
  ProfileMgr *this_00;
  long lVar4;
  string *psVar5;
  char *pcVar6;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [1936];
  string asStack_558 [1360];
  long local_8;
  
  __n_00 = auStack_eb8;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  std::string::string(asStack_eb0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar3);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(pNVar3);
  Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = FUN_04d88d84(*(undefined4 *)(lVar4 + 0x604));
  FUN_0546065c(auStack_e48,uVar1);
  std::string::string(asStack_eb0,"pi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  __n = __n_00;
  std::string::string(asStack_eb0,"l");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_1);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"i");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_2);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)__n_00);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04d89144(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_558,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBattleStatementChooseUI::ButtonDepress(int) */

void __thiscall
PennyPerkBattleStatementChooseUI::ButtonDepress(PennyPerkBattleStatementChooseUI *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_10,uVar2);
    iVar1 = RiftUtils::GetRiftWorldIndexOfLevel(asStack_10);
    RequestChoosePerk(this,iVar1 + 1,*(int *)(this + 0x178));
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PennyPerkBattleStatementChooseUI::ButtonDepress(int) */

void __thiscall
PennyPerkBattleStatementChooseUI::ButtonDepress(PennyPerkBattleStatementChooseUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

