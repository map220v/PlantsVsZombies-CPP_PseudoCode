// Class: ChallengeRewardDlg


/* ChallengeRewardDlg::ChallengeRewardDlg() */

void __thiscall ChallengeRewardDlg::ChallengeRewardDlg(ChallengeRewardDlg *this)

{
  UISingletonDialog<ChallengeRewardDlg>::UISingletonDialog
            ((UISingletonDialog<ChallengeRewardDlg> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_069752f0;
  *(undefined **)(this + 0xd8) = &DAT_06975640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  this[0x158] = (ChallengeRewardDlg)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::GetLayoutName() */

void __thiscall ChallengeRewardDlg::GetLayoutName(ChallengeRewardDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChallengeReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::OnCreate() */

void __thiscall ChallengeRewardDlg::OnCreate(ChallengeRewardDlg *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  Widget *pWVar4;
  code *pcVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  plVar3 = (long *)UIHeadshotIcon::create(0);
  *(long **)(this + 0x138) = plVar3;
  uVar1 = FUN_04ba1e78(0x28);
  uVar2 = FUN_04ba1e78(0x6e);
  (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar1,uVar2);
  UIHeadshotIcon::setScale(*(UIHeadshotIcon **)(this + 0x138),0.6,0.6);
  plVar3 = *(long **)(this + 0x138);
  pcVar5 = *(code **)(*plVar3 + 0x158);
  *(uint *)(plVar3 + 0xc) = *(uint *)(plVar3 + 0xc) | 0x10;
  (*pcVar5)(plVar3,0);
  std::string::string(asStack_10,"UIImageBackground");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x138));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImageBackground");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::setWindowCenter((Dialog *)this,pWVar4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ChallengeRewardDlg::SetHeadshot(int) */

void __thiscall ChallengeRewardDlg::SetHeadshot(ChallengeRewardDlg *this,int param_1)

{
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),-(~param_1 >> 0x1f));
  if (-(~param_1 >> 0x1f) != 0) {
    UIHeadshotIcon::changeHeadshot(*(UIHeadshotIcon **)(this + 0x138),param_1);
  }
  this[0x158] = (ChallengeRewardDlg)0x1;
  return;
}


/* ChallengeRewardDlg::ButtonDepress(int) */

void __thiscall ChallengeRewardDlg::ButtonDepress(ChallengeRewardDlg *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<ChallengeRewardDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to ChallengeRewardDlg::ButtonDepress(int) */

void __thiscall ChallengeRewardDlg::ButtonDepress(ChallengeRewardDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::SetHeadString(std::wstring const&) */

void __thiscall ChallengeRewardDlg::SetHeadString(ChallengeRewardDlg *this,wstring *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TextTitle");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::SetText(std::wstring const&) */

void __thiscall ChallengeRewardDlg::SetText(ChallengeRewardDlg *this,wstring *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TextTip");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::OnClose() */

void __thiscall ChallengeRewardDlg::OnClose(ChallengeRewardDlg *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x140));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*(char *)((long)plVar2 + 0xc) != '\0') && ((long *)*plVar2 != (long *)0x0)) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
      *plVar2 = 0;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  UI::Dialog::OnClose((Dialog *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::Refresh() */

void __thiscall ChallengeRewardDlg::Refresh(ChallengeRewardDlg *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Widget *pWVar6;
  long *plVar7;
  UIWidgetText *this_01;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  Widget *this_02;
  code *pcVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  Image *pIVar16;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x158] = (ChallengeRewardDlg)0x0;
  iVar3 = FUN_04ba1e78(0x4b);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x140);
  iVar4 = FUN_04ba1e78(0x14);
  iVar5 = FUN_04ba1e78(0xfffffff6);
  std::string::string((string *)&local_10,"RewardImage_0");
  pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  plVar15 = *(long **)(pWVar6 + 0x20);
  iVar13 = iVar3;
  if (*(char *)(*(long *)(this + 0x138) + 0x6c) == '\0') {
    iVar13 = 0;
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar13 = iVar13 + iVar4 + *(int *)(*plVar7 + 0x38);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  cVar2 = std::vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>>
          ::empty((vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>>
                   *)this_00);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pWVar6 + 0x158))(pWVar6,1);
    iVar13 = (iVar5 - iVar4) + iVar13;
  }
  else {
    (**(code **)(*(long *)pWVar6 + 0x158))(pWVar6,0);
  }
  iVar13 = ((int)plVar15[10] - iVar13) / 2;
  if (*(char *)(*(long *)(this + 0x138) + 0x6c) != '\0') {
    *(int *)(*(long *)(this + 0x138) + 0x48) = iVar13;
    iVar13 = iVar13 + iVar3 + iVar5;
  }
  for (uVar14 = 0;
      uVar11 = FUN_04ba1dfc(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148)),
      uVar14 < uVar11; uVar14 = uVar14 + 1) {
    this_02 = pWVar6;
    if (uVar14 != 0) {
      this_02 = (Widget *)UI::Dialog::CloneWidget((Dialog *)this,pWVar6,true);
      Sexy::StrFormat("RewardImage_%d",(string *)&local_10,uVar14 & 0xffffffff);
      FUN_05474278(this_02 + 0xc0,(string *)&local_10);
      std::string::~string((string *)&local_10);
    }
    std::string::string((string *)&local_10,"RewardText");
    this_01 = UI::Dialog::GetChildWidget<UIWidgetText>(this_02,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    puVar8 = (undefined8 *)FUN_04ba1e08(*(undefined8 *)(this + 0x140),uVar14);
    pIVar16 = (Image *)*puVar8;
    UIWidgetImage::SetImage((UIWidgetImage *)this_02,pIVar16);
    uVar9 = *(undefined8 *)(this + 0x140);
    *(undefined4 *)(this_02 + 0x50) = *(undefined4 *)(pIVar16 + 0x38);
    *(int *)(this_02 + 0x48) = iVar13;
    lVar10 = FUN_04ba1e08(uVar9,uVar14);
    Sexy::StrFormat("X %d",(string *)&local_10,(ulong)*(uint *)(lVar10 + 8));
    UIWidgetText::SetString(this_01,(string *)&local_10);
    std::string::~string((string *)&local_10);
    UIWidgetText::FormatByHeight(this_01);
    pcVar12 = *(code **)(*plVar15 + 0x60);
    *(int *)(this_01 + 0x48) = (*(int *)(this_02 + 0x50) - *(int *)(this_01 + 0x50)) / 2;
    (*pcVar12)(plVar15,this_02);
    iVar13 = iVar13 + iVar4 + *(int *)(this_02 + 0x50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeRewardDlg::Update() */

void __thiscall ChallengeRewardDlg::Update(ChallengeRewardDlg *this)

{
  if (this[0x158] == (ChallengeRewardDlg)0x0) {
    return;
  }
  Refresh(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRewardDlg::AddReward(Sexy::Image*, int, bool) */

void __thiscall
ChallengeRewardDlg::AddReward(ChallengeRewardDlg *this,Image *param_1,int param_2,bool param_3)

{
  long lVar1;
  Image *local_18;
  int local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RewardInfo::RewardInfo((RewardInfo *)&local_18);
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  std::vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>>::
  push_back((vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>> *
            )(this + 0x140),(RewardInfo *)&local_18);
  lVar1 = ___stack_chk_guard;
  this[0x158] = (ChallengeRewardDlg)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeRewardDlg::AddReward(std::string const&, int) */

void __thiscall ChallengeRewardDlg::AddReward(ChallengeRewardDlg *this,string *param_1,int param_2)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)StringHelper::ToImage(param_1,true);
  AddReward(this,pIVar1,param_2,false);
  return;
}


/* ChallengeRewardDlg::~ChallengeRewardDlg() */

void __thiscall ChallengeRewardDlg::~ChallengeRewardDlg(ChallengeRewardDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_069752f0;
  *(undefined **)(this + 0xd8) = &DAT_06975640;
  std::vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>>::
  ~vector((vector<ChallengeRewardDlg::RewardInfo,std::allocator<ChallengeRewardDlg::RewardInfo>> *)
          (this + 0x140));
  UISingletonDialog<ChallengeRewardDlg>::~UISingletonDialog
            ((UISingletonDialog<ChallengeRewardDlg> *)this);
  return;
}


/* ChallengeRewardDlg::~ChallengeRewardDlg() */

void __thiscall ChallengeRewardDlg::~ChallengeRewardDlg(ChallengeRewardDlg *this)

{
  ~ChallengeRewardDlg(this);
  AK::FreeHook(this);
  return;
}

