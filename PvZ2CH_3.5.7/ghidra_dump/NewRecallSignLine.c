// Class: NewRecallSignLine


/* NewRecallSignLine::NewRecallSignLine() */

void __thiscall NewRecallSignLine::NewRecallSignLine(NewRecallSignLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe4] = (NewRecallSignLine)0x0;
  this[0xe5] = (NewRecallSignLine)0x0;
  *(undefined ***)this = &PTR_GetClass_0670ad30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670b058;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0xf0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* NewRecallSignLine::~NewRecallSignLine() */

void __thiscall NewRecallSignLine::~NewRecallSignLine(NewRecallSignLine *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ad30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670b058;
  std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>::~vector
            ((vector<NewRecallSignReward,std::allocator<NewRecallSignReward>> *)(this + 0xf8));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewRecallSignLine::~NewRecallSignLine() */

void __thiscall NewRecallSignLine::~NewRecallSignLine(NewRecallSignLine *this)

{
  ~NewRecallSignLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignLine::init(int, std::vector<NewRecallSignReward, std::allocator<NewRecallSignReward>
   > const&, bool) */

void __thiscall
NewRecallSignLine::init(NewRecallSignLine *this,int param_1,vector *param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  Image *pIVar9;
  UIWidgetImage *this_00;
  ulong uVar10;
  int *piVar11;
  UIRewardFrame *pUVar12;
  PrimeTypeface *pPVar13;
  PVZ2UIButton *this_01;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  int local_40;
  int local_3c;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1 + 1;
  std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>::operator=
            ((vector<NewRecallSignReward,std::allocator<NewRecallSignReward>> *)(this + 0xf8),
             param_2);
  this[0xe4] = (NewRecallSignLine)param_3;
  iVar3 = FUN_03a55578(0x1c);
  iVar4 = FUN_03a55578(8);
  iVar5 = FUN_03a55578(0x10);
  Sexy::Insets::Insets
            (aIStack_88,iVar3,iVar4,*(int *)(this + 0x54) - iVar5,*(int *)(this + 0x54) - iVar5);
  TodStringTranslate(L"[PIGGY_BANK_LOGIN_TEXT]");
  TodReplaceNumberString(awStack_78,L"{DAY}",*(int *)(this + 0xe0));
  FUN_054766c8(this + 0xe8,(GAME_ITEM_INFO *)&local_40);
  FUN_05476c50((GAME_ITEM_INFO *)&local_40);
  FUN_05476c50(awStack_78);
  if (param_3) {
    uVar17 = *(undefined8 *)param_2;
    bVar2 = false;
    lVar7 = FUN_03a54164(uVar17,*(undefined8 *)(param_2 + 8));
    lVar14 = 0;
    while (lVar14 != lVar7) {
      lVar1 = lVar14 + 1;
      lVar8 = FUN_03a54194(uVar17,lVar14);
      lVar14 = lVar1;
      if (*(char *)(lVar8 + 8) != '\0') {
        bVar2 = true;
      }
    }
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58c0);
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00,pIVar9);
    local_40 = 2;
    UIWidgetImage::SetImageType(this_00,(GAME_ITEM_INFO *)&local_40,0.0);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_88);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
LAB_03a5ad30:
    if (*(long *)(this + 0xf0) == 0) {
      FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
      Sexy::Color::Color((Color *)&local_40,1);
      this_01 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (this_01,10,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
      FUN_05476c50(awStack_78);
      nop();
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac5ab8,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac5a68,3);
      PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
      TodStringTranslate(L"[PLANT_OBTAIN]");
      PVZ2UIButton::SetLabelText(this_01,(wstring *)&local_40);
      FUN_05476c50((GAME_ITEM_INFO *)&local_40);
      pcVar16 = *(code **)(*(long *)this_01 + 800);
      uVar17 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      (*pcVar16)(this_01,uVar17);
      iVar4 = FUN_03a55578(0x96);
      iVar3 = *(int *)(this + 0x50);
      iVar5 = FUN_03a55578(0x32);
      uVar6 = FUN_03a55578(0x87);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,iVar3 - iVar4,(*(int *)(this + 0x54) - iVar5) / 2,uVar6);
      if (bVar2) {
        lVar14 = *(long *)this_01;
        this[0xe5] = (NewRecallSignLine)0x1;
        (**(code **)(lVar14 + 0x188))(this_01,1);
        (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
      }
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      *(PVZ2UIButton **)(this + 0xf0) = this_01;
    }
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  bVar2 = false;
  uVar15 = 0;
LAB_03a5ad9c:
  do {
    uVar17 = *(undefined8 *)param_2;
    uVar10 = FUN_03a54164(uVar17,*(undefined8 *)(param_2 + 8));
    if (uVar10 <= uVar15) goto LAB_03a5ad30;
    piVar11 = (int *)FUN_03a54194(uVar17,uVar15);
    if ((char)piVar11[2] != '\0') {
      bVar2 = true;
    }
    GetGameItemInfo(*piVar11,0x7fffffff,0);
    if (local_40 != 0) {
      if (local_3c != 0x40) {
        if (local_3c < 0x41) {
          if (local_3c == 2) {
            iVar3 = PlantChipNameMapperServerID::GetInstance();
            FUN_03a54194(*(undefined8 *)param_2,uVar15);
            NameMapperBase::GetNameForId(iVar3);
            lVar14 = FUN_03a54194(*(undefined8 *)param_2,uVar15);
            uVar6 = *(undefined4 *)(lVar14 + 4);
            pUVar12 = ::operator_new(0x148);
            UIRewardFrame::UIRewardFrame(pUVar12,3,awStack_78,uVar6,1);
            (**(code **)(*(long *)pUVar12 + 0x1a0))(pUVar12,aIStack_88);
            (**(code **)(*(long *)this + 0x60))(this,pUVar12);
            std::string::~string((string *)awStack_78);
            GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
            uVar15 = uVar15 + 1;
            goto LAB_03a5ad9c;
          }
          if (local_3c != 0x20) goto LAB_03a5aeec;
          iVar3 = PlantAccessoryPieceMapper::GetInstance();
          FUN_03a54194(*(undefined8 *)param_2,uVar15);
          NameMapperBase::GetNameForId(iVar3);
          lVar14 = FUN_03a54194(*(undefined8 *)param_2,uVar15);
          uVar6 = *(undefined4 *)(lVar14 + 4);
          pUVar12 = ::operator_new(0x148);
          UIRewardFrame::UIRewardFrame(pUVar12,8,awStack_78,uVar6,1);
          std::string::~string((string *)awStack_78);
        }
        else {
          if (local_3c == 0x80) {
            std::string::string((string *)awStack_78,"coin");
            lVar14 = FUN_03a54194(*(undefined8 *)param_2,uVar15);
            uVar6 = *(undefined4 *)(lVar14 + 4);
            pUVar12 = ::operator_new(0x148);
            uVar17 = 0;
            goto LAB_03a5aeb0;
          }
          if (local_3c != 0x100) goto LAB_03a5aeec;
          std::string::string((string *)awStack_78,"");
          lVar14 = FUN_03a54194(*(undefined8 *)param_2,uVar15);
          uVar6 = *(undefined4 *)(lVar14 + 4);
          pUVar12 = ::operator_new(0x148);
          UIRewardFrame::UIRewardFrame(pUVar12,5,awStack_78,uVar6,1);
          std::string::~string((string *)awStack_78);
          nop();
          pPVar13 = (PrimeTypeface *)StringHelper::ToImage(asStack_20,false);
          Lua::CUILabel::SetTypeface((CUILabel *)pUVar12,pPVar13);
        }
        (**(code **)(*(long *)pUVar12 + 0x1a0))(pUVar12,aIStack_88);
        (**(code **)(*(long *)this + 0x60))(this,pUVar12);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
        uVar15 = uVar15 + 1;
        goto LAB_03a5ad9c;
      }
      std::string::string((string *)awStack_78,"gem");
      lVar14 = FUN_03a54194(*(undefined8 *)param_2,uVar15);
      uVar6 = *(undefined4 *)(lVar14 + 4);
      pUVar12 = ::operator_new(0x148);
      uVar17 = 1;
LAB_03a5aeb0:
      UIRewardFrame::UIRewardFrame(pUVar12,uVar17,awStack_78,uVar6,1);
      std::string::~string((string *)awStack_78);
      nop();
      (**(code **)(*(long *)pUVar12 + 0x1a0))(pUVar12,aIStack_88);
      (**(code **)(*(long *)this + 0x60))(this,pUVar12);
    }
LAB_03a5aeec:
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
    uVar15 = uVar15 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignLine::obtainReward(int, S2C_BonusInfo const&) */

void __thiscall
NewRecallSignLine::obtainReward(NewRecallSignLine *this,int param_1,S2C_BonusInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  DNetwork *this_00;
  NewRecallSignLine *local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  int local_d64 [3];
  undefined4 local_d58 [2];
  NewRecallSignLine *local_d50;
  undefined4 local_d48;
  undefined4 local_d44;
  undefined4 local_d40;
  int iStack_d3c;
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1976];
  string asStack_530 [1320];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d64[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)&local_d50,"ai");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)&local_d50);
  local_d58[0] = 0x2a28;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d58);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  std::string::string((string *)&local_d50,"dd");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)&local_d50);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d64);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  std::string::string((string *)&local_d50,"oi");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)&local_d50);
  std::to_string<ActivityTypeID>((ActivityTypeID *)param_2);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string((string *)&local_d50);
  nop();
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined8 *)param_2;
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  iStack_d3c = local_d64[0];
  local_d80 = CONCAT44(local_d64[0],uVar1);
  local_d90 = this;
  uStack_d88 = uVar4;
  local_d50 = this;
  local_d48 = uVar2;
  local_d44 = uVar3;
  local_d40 = uVar1;
  FUN_03a553a8(afStack_d38,&local_d90);
  std::string::string((string *)local_d58,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_530,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             (string *)local_d58,0);
  std::string::~string((string *)local_d58);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignLine::determineSelect(UIMessageBox*, int) */

void __thiscall
NewRecallSignLine::determineSelect(NewRecallSignLine *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  UICustomVoting *this_00;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(),
     this_00 != (UICustomVoting *)0x0)) {
    iVar1 = UICustomVoting::GetTickets(this_00);
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
    lVar4 = 0;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
    uVar5 = *(undefined8 *)(this + 0xf8);
    local_18 = iVar1;
    lVar2 = FUN_03a54164(uVar5,*(undefined8 *)(this + 0x100));
    if (lVar2 != 0) {
      do {
        piVar3 = (int *)FUN_03a541a0(uVar5,lVar4);
        if (iVar1 == *piVar3) {
          local_14 = piVar3[1];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar2);
    }
    obtainReward(this,*(int *)(this + 0xe0),(S2C_BonusInfo *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignLine::ButtonDepress(int) */

void __thiscall NewRecallSignLine::ButtonDepress(NewRecallSignLine *this,int param_1)

{
  char cVar1;
  UICommonItemSelect *this_00;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 10) {
    if (this[0xe4] == (NewRecallSignLine)0x0) {
      cVar1 = std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>::empty
                        ((vector<NewRecallSignReward,std::allocator<NewRecallSignReward>> *)
                         (this + 0xf8));
      if (cVar1 == '\0') {
        Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_40);
        puVar2 = (undefined4 *)FUN_03a541a0(*(undefined8 *)(this + 0xf8),0);
        local_40 = *puVar2;
        local_3c = puVar2[1];
        obtainReward(this,*(int *)(this + 0xe0),(S2C_BonusInfo *)&local_40);
      }
    }
    else {
      UISingletonDialog<UICommonItemSelect>::ShowDialog();
      this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr();
      if (this_00 != (UICommonItemSelect *)0x0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
        for (uVar4 = 0;
            uVar3 = FUN_03a54164(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100)),
            uVar4 < uVar3; uVar4 = uVar4 + 1) {
          Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_50);
          puVar2 = (undefined4 *)FUN_03a541a0(*(undefined8 *)(this + 0xf8),uVar4);
          local_50 = *puVar2;
          local_4c = puVar2[1];
          std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40,
                     (S2C_BonusInfo *)&local_50);
        }
        (**(code **)(*(long *)this_00 + 0x350))
                  (this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_40);
        std::string::string((string *)&local_50,"[RECALL_OFFER_SIGN_SELECT_TITLE]");
        UICommonItemSelect::SetTitle(this_00,(string *)&local_50);
        std::string::~string((string *)&local_50);
        nop();
        std::string::string((string *)&local_50,"[RECALL_OFFER_SIGN_SELECT_DESCRIPTION]");
        UICommonItemSelect::SetDescription(this_00,(string *)&local_50);
        std::string::~string((string *)&local_50);
        nop();
        FUN_03a554c0(afStack_28,this);
        UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRecallSignLine::ButtonDepress(int) */

void __thiscall NewRecallSignLine::ButtonDepress(NewRecallSignLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignLine::Draw(Sexy::Graphics*) */

void __thiscall NewRecallSignLine::Draw(NewRecallSignLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  long lVar8;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5948);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  if (this[0xe5] != (NewRecallSignLine)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    iVar3 = FUN_03a55578(0x8c);
    iVar4 = *(int *)(this + 0x54);
    iVar5 = *(int *)(this + 0x50);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    iVar1 = *(int *)(lVar8 + 0x3c);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    iVar2 = *(int *)(lVar8 + 0x38);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar5 - iVar3,(iVar4 - iVar1) / 2,iVar2,*(int *)(lVar8 + 0x3c));
  }
  iVar4 = FUN_03a55578(0);
  iVar5 = FUN_03a55578(300);
  Sexy::Insets::Insets(aIStack_18,*(int *)(this + 0x54),iVar4,iVar5,*(int *)(this + 0x54));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_18,uVar6,aCStack_28,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

