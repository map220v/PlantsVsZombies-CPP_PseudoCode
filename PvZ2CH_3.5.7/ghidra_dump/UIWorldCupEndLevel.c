// Class: UIWorldCupEndLevel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEndLevel::GetLayoutName() */

void __thiscall UIWorldCupEndLevel::GetLayoutName(UIWorldCupEndLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWorldCupEndLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEndLevel::OnCreate() */

void __thiscall UIWorldCupEndLevel::OnCreate(UIWorldCupEndLevel *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIWorldCupEndLevel::~UIWorldCupEndLevel() */

void __thiscall UIWorldCupEndLevel::~UIWorldCupEndLevel(UIWorldCupEndLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066d2150;
  *(undefined **)(this + 0xd8) = &DAT_066d24a0;
  UISingletonDialog<UIWorldCupEndLevel>::~UISingletonDialog
            ((UISingletonDialog<UIWorldCupEndLevel> *)this);
  return;
}


/* UIWorldCupEndLevel::~UIWorldCupEndLevel() */

void __thiscall UIWorldCupEndLevel::~UIWorldCupEndLevel(UIWorldCupEndLevel *this)

{
  ~UIWorldCupEndLevel(this);
  AK::FreeHook(this);
  return;
}


/* UIWorldCupEndLevel::UIWorldCupEndLevel() */

void __thiscall UIWorldCupEndLevel::UIWorldCupEndLevel(UIWorldCupEndLevel *this)

{
  UISingletonDialog<UIWorldCupEndLevel>::UISingletonDialog
            ((UISingletonDialog<UIWorldCupEndLevel> *)this);
  *(undefined4 *)(this + 0x134) = 1;
  *(undefined ***)this = &PTR_GetClass_066d2150;
  *(undefined **)(this + 0xd8) = &DAT_066d24a0;
  return;
}


/* UIWorldCupEndLevel::backToMap() */

void UIWorldCupEndLevel::backToMap(void)

{
  WorldCupManager *this;
  DVisible *this_00;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::setIsQuit(this,true);
    this_00 = (DVisible *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    DVisible::setVisible(this_00,false);
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
    Board::Quit(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* UIWorldCupEndLevel::ButtonDepress(int) */

void __thiscall UIWorldCupEndLevel::ButtonDepress(UIWorldCupEndLevel *this,int param_1)

{
  long *plVar1;
  PublicBasicInfo *pPVar2;
  
  if (param_1 == 1) {
    pPVar2 = (PublicBasicInfo *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    PublicBasicInfo::setNeedUserID(pPVar2,true);
    UISingletonDialog<UIWorldCupEndLevel>::CloseDialog();
    if (*(int *)(this + 0x134) == 1) {
      UISingletonDialog<UIWorldCupEntrance>::ShowDialog();
      return;
    }
    plVar1 = *(long **)(gLawnApp + 0x9f0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 800))(plVar1,0);
      backToMap();
      return;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 0) {
        return;
      }
      UISingletonDialog<UIWorldCupEndLevel>::CloseDialog();
      return;
    }
    plVar1 = *(long **)(gLawnApp + 0x9f0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 800))(plVar1,0);
    }
    pPVar2 = (PublicBasicInfo *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    PublicBasicInfo::setNeedUserID(pPVar2,true);
    UISingletonDialog<UIWorldCupEndLevel>::CloseDialog();
  }
  backToMap();
  return;
}


/* non-virtual thunk to UIWorldCupEndLevel::ButtonDepress(int) */

void __thiscall UIWorldCupEndLevel::ButtonDepress(UIWorldCupEndLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEndLevel::showAwardIcon(int, int, int) */

void __thiscall
UIWorldCupEndLevel::showAwardIcon(UIWorldCupEndLevel *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  NameMapperBase *pNVar6;
  CUILabel *this_00;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  ProfileMgr *pPVar9;
  PlayerInfo *pPVar10;
  string *psVar11;
  long lVar12;
  size_t __n;
  code *pcVar13;
  undefined8 uVar14;
  PrimeTypeface *pPVar15;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_50);
  pNVar6 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
  if (cVar2 == '\0') {
    pNVar6 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
    if (cVar2 == '\0') {
      pNVar6 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
      if (cVar2 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar2 = FUN_0394e050(param_1);
        if (cVar2 != '\0') {
          uVar14 = 1;
          pPVar15 = (PrimeTypeface *)0x0;
          std::string::append(asStack_50,"gem",__n);
          goto LAB_03952fdc;
        }
        OtherServerNameMapper::GetInstance();
        cVar2 = FUN_0394e040(param_1);
        if (cVar2 != '\0') {
          uVar14 = 0;
          pPVar15 = (PrimeTypeface *)0x0;
          std::string::append(asStack_50,"coin",__n);
          goto LAB_03952fdc;
        }
        pNVar6 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
        if (cVar2 == '\0') {
          pNVar6 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
          if (cVar2 == '\0') {
            pNVar6 = (NameMapperBase *)MaterialItemMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar6,param_1);
            if (cVar2 == '\0') {
              uVar14 = 3;
              pPVar15 = (PrimeTypeface *)0x0;
            }
            else {
              uVar14 = 5;
              GetGameItemInfo(param_1,0x100,0);
              pPVar15 = (PrimeTypeface *)StringHelper::ToImage(asStack_18,false);
              GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
            }
          }
          else {
            iVar3 = PlantAccessoryPieceMapper::GetInstance();
            pPVar15 = (PrimeTypeface *)0x0;
            NameMapperBase::GetNameForId(iVar3);
            FUN_05474278(asStack_50,asStack_38);
            std::string::~string(asStack_38);
            psVar11 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            std::operator+(asStack_50,"_piece");
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
            std::string::~string(asStack_38);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_40);
            if (cVar2 != '\0') {
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
              pPVar15 = (PrimeTypeface *)StringHelper::ToImage((string *)(lVar12 + 0x60),false);
            }
            uVar14 = 5;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
          }
          goto LAB_03952fdc;
        }
        iVar3 = PlantAccessoryInfoMapper::GetInstance();
        uVar14 = 5;
      }
      else {
        iVar3 = AvatarChipNameMapperServerID::GetInstance();
        uVar14 = 4;
      }
    }
    else {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      uVar14 = 3;
    }
  }
  else {
    iVar3 = PlantNameMapperServerID::GetInstance();
    uVar14 = 2;
  }
  NameMapperBase::GetNameForId(iVar3);
  pPVar15 = (PrimeTypeface *)0x0;
  FUN_05474278(asStack_50,asStack_38);
  std::string::~string(asStack_38);
LAB_03952fdc:
  this_00 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame((UIRewardFrame *)this_00,uVar14,asStack_50,0xffffffff,1);
  pcVar13 = *(code **)(*(long *)this_00 + 0x198);
  uVar4 = FUN_0394ebd8(0);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abc508);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abc508);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
  (*pcVar13)(this_00,uVar4,uVar4,(int)((float)iVar3 * 0.8),(int)((float)iVar5 * 0.8));
  this_00[0x59] = (CUILabel)0x0;
  if (pPVar15 != (PrimeTypeface *)0x0) {
    Lua::CUILabel::SetTypeface(this_00,pPVar15);
  }
  uVar1 = param_3 + 1;
  Sexy::StrFormat("UIImage_3_%d",asStack_48,(ulong)uVar1);
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_48);
  if (pUVar7 == (UIWidgetImage *)0x0) {
    Sexy::StrFormat("UIText_Num_%d",asStack_40,(ulong)uVar1);
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    Sexy::StrFormat("X%d",asStack_38,(ulong)(uint)param_2);
    UIWidgetText::SetString(pUVar8,asStack_38);
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    PlayerInfo::GetHasPlayedWorldCup(pPVar10);
  }
  else {
    (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
    Sexy::StrFormat("UIText_Num_%d",asStack_40,(ulong)uVar1);
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    Sexy::StrFormat("X%d",asStack_38,(ulong)(uint)param_2);
    UIWidgetText::SetString(pUVar8,asStack_38);
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    cVar2 = PlayerInfo::GetHasPlayedWorldCup(pPVar10);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
    }
  }
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupEndLevel::initUI(st_resultInfo) */

void UIWorldCupEndLevel::initUI(Dialog *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  UIWidgetImage *pUVar8;
  UIWidgetImage *this;
  UIWidgetText *pUVar9;
  XMLParser *pXVar10;
  WorldCupManager *pWVar11;
  PlantDragonBruit *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIButton *pPVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  vector *pvVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 uVar19;
  int iVar20;
  ulong uVar21;
  undefined1 auStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  DString aDStack_1f8 [16];
  DString aDStack_1e8 [16];
  DString aDStack_1d8 [16];
  undefined8 local_1c8 [3];
  string asStack_1b0 [24];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1b0,"UIImage_result");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"UIImage_0");
  this = UI::Dialog::GetWidget<UIWidgetImage>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  iVar20 = (int)param_2;
  *(int *)(param_1 + 0x134) = iVar20;
  if (iVar20 == 1) {
    std::string::string(asStack_1b0,"IMAGE_UI_WORLDCUP_WIN");
    UIWidgetImage::SetImage(pUVar8,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pcVar18 = "IMAGE_UI_WORLDCUP_WIN_BG";
  }
  else {
    if (iVar20 == 0) {
      pcVar18 = "IMAGE_UI_WORLDCUP_LOSE";
    }
    else {
      if (iVar20 != 2) goto LAB_03955934;
      pcVar18 = "IMAGE_UI_WORLDCUP_DRAWGAME";
    }
    std::string::string(asStack_1b0,pcVar18);
    UIWidgetImage::SetImage(pUVar8,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pcVar18 = "IMAGE_UI_WORLDCUP_LOSE_BG";
  }
  std::string::string(asStack_1b0,pcVar18);
  UIWidgetImage::SetImage(this,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
LAB_03955934:
  Sexy::StrFormat("%d",asStack_210,param_2 >> 0x20);
  std::string::string(asStack_1b0,"UIText_0");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  UIWidgetText::SetString(pUVar9,asStack_210);
  Sexy::StrFormat("%d",asStack_1b0,param_3 & 0xffffffff);
  FUN_05474278(asStack_210,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"UIText_1");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  UIWidgetText::SetString(pUVar9,asStack_210);
  pXVar10 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar5 = Sexy::XMLParser::GetCurrentLineNum(pXVar10);
  std::string::string(asStack_1b0,"UIImage_1");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_WORLDCUP_TEAM_%d",asStack_1b0,(ulong)(iVar5 - 100));
  FUN_05474278(asStack_210,asStack_1b0);
  std::string::~string(asStack_1b0);
  UIWidgetImage::SetImage(pUVar8,asStack_210);
  std::string::string(asStack_1b0,"UIImage_2");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  pWVar11 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  uVar6 = WorldCupManager::getCurLoopNum(pWVar11);
  this_00 = (PlantDragonBruit *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  bVar2 = PlantDragonBruit::IsDelayDestroy(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  bVar3 = PlayerInfo::GetHasPlayedWorldCup(this_02);
  uVar1 = uVar6;
  if ((bVar2 < (bVar3 & iVar20 == 1)) && (uVar1 = uVar6 - 1, (int)uVar1 < 0)) {
    uVar1 = 0;
  }
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_WORLDCUP_ENEMY_%d",asStack_1b0,(ulong)uVar1);
  FUN_05474278(asStack_210,asStack_1b0);
  std::string::~string(asStack_1b0);
  UIWidgetImage::SetImage(pUVar8,asStack_210);
  std::string::string(asStack_1b0,"UIButton_0");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  if (*(int *)(param_1 + 0x134) == 1) {
    TodStringTranslate(L"[RESUME_GAME]");
    FUN_054766c8(pPVar12 + 0xd8,asStack_1b0);
    FUN_05476c50(asStack_1b0);
  }
  if (bVar2 == 0) {
    p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    pvVar14 = (vector *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var13);
    std::
    vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
    ::vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
              *)local_1c8,pvVar14);
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  else {
    p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    uVar6 = 8;
    pvVar14 = (vector *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var13);
    std::
    vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
    ::vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
              *)local_1c8,pvVar14);
  }
  uVar7 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar7);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  iVar20 = *(int *)(param_1 + 0x134);
  if (iVar20 == 1) {
    std::string::string(asStack_1b0,"UIText_4");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    std::string::string(asStack_1b0,"UIText_fail");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    uVar21 = 0;
    while( true ) {
      puVar16 = (undefined8 *)FUN_0394e1d8(local_1c8[0],(long)(int)uVar6);
      uVar19 = *puVar16;
      uVar17 = FUN_0394e1e4(uVar19,puVar16[1]);
      if (uVar17 <= uVar21) break;
      piVar15 = (int *)FUN_0394e20c(uVar19,uVar21);
      iVar20 = piVar15[1];
      iVar5 = *piVar15;
      showAwardIcon((UIWorldCupEndLevel *)param_1,iVar5,iVar20,(int)uVar21);
      FUN_0546065c(auStack_168,iVar5);
      FUN_054603b8(auStack_168,&DAT_05593348);
      FUN_0546065c(auStack_168,iVar20);
      FUN_054603b8(auStack_168,&DAT_05593348);
      uVar21 = uVar21 + 1;
    }
  }
  else if (iVar20 == 0) {
    std::string::string(asStack_1b0,"UIText_4");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    std::string::string(asStack_1b0,"UIText_fail");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,1);
    std::string::string(asStack_1b0,"UIText_Num_1");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    std::string::string(asStack_1b0,"UIText_Num_2");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
  }
  else if (iVar20 == 2) {
    std::string::string(asStack_1b0,"UIText_4");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    std::string::string(asStack_1b0,"UIText_fail");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,1);
    TodStringTranslate(L"[PVZ_WORLDCUP_DRAWGAME]");
    PuzzleTip::SetTip(pUVar9,asStack_1b0);
    FUN_05476c50(asStack_1b0);
    std::string::string(asStack_1b0,"UIText_Num_1");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
    std::string::string(asStack_1b0,"UIText_Num_2");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
  }
  cVar4 = PlayerInfo::GetHasPlayedWorldCup(this_02);
  if (cVar4 == '\0') {
    std::string::string(asStack_1b0,"UIText_4");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetText>(param_1,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    TodStringTranslate(L"[PVZ_WORLDCUP_FIRSTFIGHTWIN]");
    PuzzleTip::SetTip(pUVar9,asStack_1b0);
    FUN_05476c50(asStack_1b0);
  }
  std::string::string(asStack_1b0,"UIImage_6");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>(param_1,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  if (pUVar8 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
  }
  pXVar10 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar5 = Sexy::XMLParser::GetCurrentLineNum(pXVar10);
  iVar20 = *(int *)(param_1 + 0x134);
  pWVar11 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  WorldCupManager::UpdateWorldCupEndGameLog(pWVar11,iVar5,iVar20 == 1,uVar6);
  std::string::string(asStack_200,"2019_SUMMER");
  std::string::string(asStack_198,"FOOT_BALL");
  DString::DString(aDStack_1f8,(uint)(iVar20 == 1));
  DString::operator_cast_to_string(aDStack_1f8);
  DString::DString(aDStack_1e8,uVar6);
  DString::operator_cast_to_string(aDStack_1e8);
  DString::DString(aDStack_1d8,iVar5);
  DString::operator_cast_to_string(aDStack_1d8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0,asStack_198,4,
             auStack_218);
  FUN_05462824(asStack_208,auStack_178);
  BehaviorLog::inGameBehavior(asStack_200,(vector *)asStack_1b0,asStack_208);
  std::string::~string(asStack_208);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  DString::~DString(aDStack_1d8);
  DString::~DString(aDStack_1e8);
  DString::~DString(aDStack_1f8);
  nop();
  std::string::~string(asStack_200);
  nop();
  FUN_054617bc(auStack_178);
  std::
  vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
  ::~vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
             *)local_1c8);
  std::string::~string(asStack_210);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

