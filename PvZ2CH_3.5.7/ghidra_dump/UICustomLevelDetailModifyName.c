// Class: UICustomLevelDetailModifyName


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::GetLayoutName() */

void __thiscall UICustomLevelDetailModifyName::GetLayoutName(UICustomLevelDetailModifyName *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelDetailModifyName");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelDetailModifyName::~UICustomLevelDetailModifyName() */

void __thiscall
UICustomLevelDetailModifyName::~UICustomLevelDetailModifyName(UICustomLevelDetailModifyName *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06663fa0;
  *(undefined ***)this = &PTR_GetClass_06663c50;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06663fe8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UICustomLevelDetailModifyName>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelDetailModifyName> *)this);
  return;
}


/* UICustomLevelDetailModifyName::~UICustomLevelDetailModifyName() */

void __thiscall
UICustomLevelDetailModifyName::~UICustomLevelDetailModifyName(UICustomLevelDetailModifyName *this)

{
  ~UICustomLevelDetailModifyName(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::InitView() */

void __thiscall UICustomLevelDetailModifyName::InitView(UICustomLevelDetailModifyName *this)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  EditWidget *this_00;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"InputNameText");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = plVar3[10];
  uVar1 = *(undefined4 *)((long)plVar3 + 0x54);
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,0,(EditListener *)(this + 0x138));
  *(EditWidget **)(this + 0x148) = this_00;
  pcVar6 = *(code **)(*(long *)this_00 + 0x330);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar6)(this_00,uVar4,0);
  plVar5 = *(long **)(this + 0x148);
  pcVar6 = *(code **)(*plVar5 + 0x340);
  FUN_05478178(asStack_10,&DAT_056f11a8,auStack_18);
  (*pcVar6)(plVar5,asStack_10,1);
  FUN_05476c50(asStack_10);
  nop();
  plVar5 = *(long **)(this + 0x148);
  *(undefined1 *)((long)plVar5 + 0x16c) = 0;
  (**(code **)(*plVar5 + 0x198))(plVar5,0,0,(int)lVar2,uVar1);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x148));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelDetailModifyName::SetCurrentName(std::wstring) */

void __thiscall
UICustomLevelDetailModifyName::SetCurrentName
          (UICustomLevelDetailModifyName *this,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x148);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x340))(plVar1,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::OnCreate() */

void __thiscall UICustomLevelDetailModifyName::OnCreate(UICustomLevelDetailModifyName *this)

{
  undefined4 uVar1;
  UIWidgetImage *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar2,true);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::CustomLevelNetworkResponseReceived(int, int) */

void __thiscall
UICustomLevelDetailModifyName::CustomLevelNetworkResponseReceived
          (UICustomLevelDetailModifyName *this,int param_1,int param_2)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if ((param_2 == 2) && (param_1 == 10)) {
    (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar1,Message::ModifyLevelName,asStack_10);
    std::string::~string(asStack_10);
    UISingletonDialog<UICustomLevelDetailModifyName>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelDetailModifyName::UICustomLevelDetailModifyName() */

void __thiscall
UICustomLevelDetailModifyName::UICustomLevelDetailModifyName(UICustomLevelDetailModifyName *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UICustomLevelDetailModifyName>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelDetailModifyName> *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined **)(this + 0xd8) = &DAT_06663fa0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06663fe8;
  *(undefined ***)this = &PTR_GetClass_06663c50;
  this[0x140] = (UICustomLevelDetailModifyName)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CustomLevelNetworkResponseReceived);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UICustomLevelDetailModifyName,void(UICustomLevelDetailModifyName::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CustomLevelNetworkResponseReceived,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::CheckNameFilter() */

void __thiscall UICustomLevelDetailModifyName::CheckNameFilter(UICustomLevelDetailModifyName *this)

{
  string *psVar1;
  char cVar2;
  undefined4 uVar3;
  GenericResFile *this_00;
  char *__s;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulong uVar7;
  string *extraout_x1;
  ulong uVar8;
  Sexy aSStack_60 [8];
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  Sexy::Buffer::Buffer(aBStack_38);
  psVar1 = Sexy::gSexyAppBase;
  this_00 = (GenericResFile *)
            CachedResourcePtr<Sexy::GenericResFile>::operator->
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06aa83d8);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_00);
  std::string::string(asStack_58,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar1,(Buffer *)asStack_58,SUB81(aBStack_38,0));
  std::string::~string(asStack_58);
  nop();
  cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  while (cVar2 == '\0') {
    uVar8 = 0;
    FUN_05476574(aSStack_60);
    Sexy::Buffer::ReadUTF8Line();
    lVar4 = FUN_054765d0(asStack_58);
    if (lVar4 != 0) {
      do {
        piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8);
        if (((*piVar5 != 0xd) && (piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8), *piVar5 != 10)) &&
           (piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8), *piVar5 != 9)) {
          puVar6 = (undefined4 *)FUN_05476f5c(asStack_58,uVar8);
          FUN_054778bc(aSStack_60,1,*puVar6);
        }
        uVar8 = uVar8 + 1;
        uVar7 = FUN_054765d0(asStack_58);
      } while (uVar8 < uVar7);
    }
    cVar2 = FUN_054765e8(aSStack_60);
    if (cVar2 == '\0') {
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_50,
                 (wstring *)aSStack_60);
    }
    FUN_05476c50(asStack_58);
    FUN_05476c50(aSStack_60);
    cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  }
  (**(code **)(**(long **)(this + 0x148) + 0x310))(aSStack_60,*(long **)(this + 0x148));
  Sexy::UTF8StringToWString(aSStack_60,extraout_x1);
  uVar3 = ProfileUtils::CheckValidUserName((wstring *)asStack_58,(vector *)avStack_50);
  FUN_05476c50(asStack_58);
  std::string::~string((string *)aSStack_60);
  Sexy::Buffer::~Buffer(aBStack_38);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelDetailModifyName::ButtonDepress(int) */

void __thiscall
UICustomLevelDetailModifyName::ButtonDepress(UICustomLevelDetailModifyName *this,int param_1)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    UISingletonDialog<UICustomLevelDetailModifyName>::CloseDialog();
  }
  else if (param_1 == 0x3f0) {
    cVar1 = CheckNameFilter(this);
    if (cVar1 == '\0') {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[LEVEL_EDITOR_NAME_SET_WARNNING]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar2);
        std::string::~string(asStack_10);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
      CustomLevelUtils::TryUpdateLevelName(asStack_10);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelDetailModifyName::ButtonDepress(int) */

void __thiscall
UICustomLevelDetailModifyName::ButtonDepress(UICustomLevelDetailModifyName *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

