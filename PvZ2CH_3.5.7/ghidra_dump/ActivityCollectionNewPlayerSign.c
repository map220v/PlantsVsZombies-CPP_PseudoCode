// Class: ActivityCollectionNewPlayerSign


/* ActivityCollectionNewPlayerSign::ActivityCollectionNewPlayerSign() */

void __thiscall
ActivityCollectionNewPlayerSign::ActivityCollectionNewPlayerSign
          (ActivityCollectionNewPlayerSign *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_06632070;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066323d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06632420;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerSign_06632440;
  *(undefined8 *)(this + 0x1b8) = 0;
  return;
}


/* ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign() */

void __thiscall
ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign
          (ActivityCollectionNewPlayerSign *this)

{
  *(undefined ***)this = &PTR_GetClass_06632070;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066323d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06632420;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerSign_06632440;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign() */

void __thiscall
ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign
          (ActivityCollectionNewPlayerSign *this)

{
  ~ActivityCollectionNewPlayerSign(this + -0xe8);
  return;
}


/* ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign() */

void __thiscall
ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign
          (ActivityCollectionNewPlayerSign *this)

{
  ~ActivityCollectionNewPlayerSign(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign() */

void __thiscall
ActivityCollectionNewPlayerSign::~ActivityCollectionNewPlayerSign
          (ActivityCollectionNewPlayerSign *this)

{
  ~ActivityCollectionNewPlayerSign(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerSign::Sign() */

void __thiscall ActivityCollectionNewPlayerSign::Sign(ActivityCollectionNewPlayerSign *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [3016];
  string asStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_034478a8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_120,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
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


/* ActivityCollectionNewPlayerSign::ButtonDepress(int) */

void __thiscall
ActivityCollectionNewPlayerSign::ButtonDepress(ActivityCollectionNewPlayerSign *this,int param_1)

{
  ActivityCollectionContainerBase::ButtonDepress((ActivityCollectionContainerBase *)this,param_1);
  if (param_1 == 0x457) {
    UISingletonDialog<UINewPlayerSignPreview>::ShowDialog();
    return;
  }
  if (param_1 != 0x458) {
    return;
  }
  Sign(this);
  return;
}


/* non-virtual thunk to ActivityCollectionNewPlayerSign::ButtonDepress(int) */

void __thiscall
ActivityCollectionNewPlayerSign::ButtonDepress(ActivityCollectionNewPlayerSign *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerSign::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNewPlayerSign::InitContainer
          (ActivityCollectionNewPlayerSign *this,ActivityCollectionTabBase *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  NewPlayerSignItemWidget *this_00;
  PVZ2UIButton *pPVar14;
  UIWidgetImage *this_01;
  ulong uVar15;
  long *plVar16;
  NewPlayerSignData aNStack_130 [24];
  undefined8 local_118;
  undefined8 local_110;
  int local_100;
  wstring awStack_f8 [56];
  string asStack_c0 [56];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_0344674c(this + 0xf8,0x2a7b);
  std::string::string(asStack_c0,"IMAGE_UI_NEWPLAYERCOLLECTION_BACKGROUND_NEWPLAYERSIGN");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  iVar4 = FUN_03447a18(0xf);
  iVar9 = *(int *)(this + 0x50);
  iVar5 = FUN_03447a18(0x7d);
  Sexy::Point::Point((Point *)asStack_c0,iVar9 / 2 - iVar4,iVar5);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_c0);
  iVar9 = *(int *)(this + 0x50);
  iVar4 = FUN_03447a18(0x1c2);
  iVar5 = FUN_03447a18(0xa5);
  if (this[0x1a4] != (ActivityCollectionNewPlayerSign)0x0) {
    iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    iVar9 = iVar9 - iVar4;
    ActivityManager::GetActiveItem(iVar6);
    NewPlayerSignData::NewPlayerSignData(aNStack_130);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_130);
    cVar3 = FUN_03446770(local_80);
    if (((cVar3 != '\0') && (cVar2 != '\0')) && (local_70 != '\0')) {
      uVar15 = 0;
      bVar1 = false;
      uVar12 = local_118;
      while( true ) {
        uVar13 = FUN_03446954(uVar12,local_110);
        if (uVar13 <= uVar15) break;
        this_00 = ::operator_new(0x138);
        NewPlayerSignItemWidget::NewPlayerSignItemWidget(this_00);
        iVar4 = FUN_03447a18(0x6e);
        iVar6 = FUN_03447a18(0x82);
        uVar7 = FUN_03447a18(100);
        uVar8 = FUN_03447a18(0x78);
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,iVar9 + ((int)uVar15 % 3) * iVar4,iVar5 + ((int)uVar15 / 3) * iVar6,uVar7
                   ,uVar8);
        if (uVar15 == 6) {
          iVar4 = FUN_03447a18(0x14a);
          iVar6 = FUN_03447a18(0);
          uVar7 = FUN_03447a18(100);
          uVar8 = FUN_03447a18(0xfa);
          (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar4 + iVar9,iVar6 + iVar5,uVar7,uVar8);
        }
        puVar10 = (undefined8 *)FUN_03446984(local_118,uVar15);
        NewPlayerSignItemWidget::InitView
                  (this_00,uVar15 & 0xffffffff,*puVar10,*(undefined4 *)(puVar10 + 1));
        (**(code **)(*(long *)this + 0x60))(this,this_00);
        uVar12 = local_118;
        lVar11 = FUN_03446984(local_118,uVar15);
        if ((!bVar1) && (*(int *)(lVar11 + 8) == 0)) {
          *(NewPlayerSignItemWidget **)(this + 0x1b8) = this_00;
          bVar1 = true;
        }
        uVar15 = uVar15 + 1;
      }
    }
    TodStringTranslate(L"[RIFT_LEVEL_SETUP_BONUS]");
    Sexy::Color::Color((Color *)asStack_c0,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0x457,(ButtonListener *)(this + 0xd8),awStack_f8,(Color *)asStack_c0);
    FUN_05476c50(awStack_f8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_f8,&DAT_06aa0c40,5);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,&DAT_06aa0e28,5);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_f8,(PVZ2UIImage *)asStack_c0);
    iVar4 = FUN_03447a18(0x28);
    iVar6 = FUN_03447a18(0x10c);
    uVar7 = FUN_03447a18(0x96);
    uVar8 = FUN_03447a18(0x41);
    (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,iVar4 + iVar9,iVar6 + iVar5,uVar7,uVar8);
    (**(code **)(*(long *)this + 0x60))(this,pPVar14);
    TodStringTranslate(L"[SIGN_NOW]");
    Sexy::Color::Color((Color *)asStack_c0,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0x458,(ButtonListener *)(this + 0xd8),awStack_f8,(Color *)asStack_c0);
    *(PVZ2UIButton **)(this + 0x1b0) = pPVar14;
    FUN_05476c50(awStack_f8);
    pPVar14 = *(PVZ2UIButton **)(this + 0x1b0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_f8,&DAT_06aa0c78,5);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,&DAT_06aa0dd8,5);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_f8,(PVZ2UIImage *)asStack_c0);
    plVar16 = *(long **)(this + 0x1b0);
    iVar4 = FUN_03447a18(0xfa);
    iVar6 = FUN_03447a18(0x10c);
    uVar7 = FUN_03447a18(0x96);
    uVar8 = FUN_03447a18(0x41);
    (**(code **)(*plVar16 + 0x198))(plVar16,iVar4 + iVar9,iVar6 + iVar5,uVar7,uVar8);
    plVar16 = *(long **)(this + 0x1b0);
    *(undefined1 *)((long)plVar16 + 0x59) = 0;
    (**(code **)(*plVar16 + 0x188))(plVar16,0 < local_100);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01);
    uVar7 = FUN_03447a18(0x7d);
    iVar9 = FUN_03447a18(0x11);
    uVar8 = FUN_03447a18(0x3c);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar7,-iVar9,uVar8,uVar8);
    std::string::string(asStack_c0,"IMAGE_UI_NEWPLAYERCOLLECTION_PARTS_LIMIT");
    UIWidgetImage::SetImage(this_01,asStack_c0);
    std::string::~string(asStack_c0);
    nop();
    plVar16 = *(long **)(this + 0x1b0);
    this_01[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(*plVar16 + 0x60))(plVar16,this_01);
    NewPlayerSignData::~NewPlayerSignData(aNStack_130);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ActivityCollectionNewPlayerSign::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionNewPlayerSign::InitContainer
          (ActivityCollectionNewPlayerSign *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}

