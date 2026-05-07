// Class: ValueInuptEditor


/* ValueInuptEditor::EditWidgetText(int, std::wstring const&) */

int ValueInuptEditor::EditWidgetText(int param_1,wstring *param_2)

{
  return param_1;
}


/* non-virtual thunk to ValueInuptEditor::EditWidgetText(int, std::wstring const&) */

void __thiscall
ValueInuptEditor::EditWidgetText(ValueInuptEditor *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* ValueInuptEditor::~ValueInuptEditor() */

void __thiscall ValueInuptEditor::~ValueInuptEditor(ValueInuptEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_066e8a70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e8da0;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_066e8de8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ValueInuptEditor::~ValueInuptEditor() */

void __thiscall ValueInuptEditor::~ValueInuptEditor(ValueInuptEditor *this)

{
  ~ValueInuptEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValueInuptEditor::Init() */

void __thiscall ValueInuptEditor::Init(ValueInuptEditor *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  EditWidget *this_00;
  undefined8 uVar5;
  PVZ2UIButton *pPVar6;
  long *plVar7;
  code *pcVar8;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,1,(EditListener *)(this + 0xe0));
  *(EditWidget **)(this + 0xe8) = this_00;
  pcVar8 = *(code **)(*(long *)this_00 + 0x330);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar8)(this_00,uVar5,0);
  plVar7 = *(long **)(this + 0xe8);
  uVar1 = FUN_039b637c(0x28);
  uVar2 = FUN_039b637c(0x50);
  uVar3 = FUN_039b637c(0xf0);
  uVar4 = FUN_039b637c(0x32);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0xb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abff50,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abfff8,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_039b637c(0x23);
  uVar2 = FUN_039b637c(0x96);
  uVar3 = FUN_039b637c(100);
  uVar4 = FUN_039b637c(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar4);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar8)(pPVar6,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar6);
  TodStringTranslate(L"[BUTTON_CANCEL]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abff50,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abfff8,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_039b637c(0xb9);
  uVar2 = FUN_039b637c(0x96);
  uVar3 = FUN_039b637c(100);
  uVar4 = FUN_039b637c(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar4);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar8)(pPVar6,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ValueInuptEditor::ValueInuptEditor() */

void __thiscall ValueInuptEditor::ValueInuptEditor(ValueInuptEditor *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066e8a70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e8da0;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_066e8de8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValueInuptEditor::ButtonDepress(int) */

void __thiscall ValueInuptEditor::ButtonDepress(ValueInuptEditor *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    Sexy::SexyStringToUTF8String((Sexy *)(*(long *)(this + 0xe8) + 0xe8),(wstring *)0xb);
    std::function<void(std::string_const&)>::operator()
              ((function<void(std::string_const&)> *)(this + 0xf0),asStack_10);
    std::string::~string(asStack_10);
  }
  else if (param_1 == 0x58) {
    UIUtil::CloseDialog((Widget *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ValueInuptEditor::ButtonDepress(int) */

void __thiscall ValueInuptEditor::ButtonDepress(ValueInuptEditor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValueInuptEditor::Draw(Sexy::Graphics*) */

void __thiscall ValueInuptEditor::Draw(ValueInuptEditor *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abffd0);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[SELECT_GENERAL_PLANT_CHIPS_EXCHANGE]");
  iVar1 = FUN_039b637c(0);
  iVar2 = FUN_039b637c(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValueInuptEditor::CheckNameFilter() */

void __thiscall ValueInuptEditor::CheckNameFilter(ValueInuptEditor *this)

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
  ulong uVar8;
  wstring awStack_60 [8];
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
                      ((CachedResourcePtr<Sexy::GenericResFile> *)&DAT_06abff00);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_00);
  std::string::string(asStack_58,__s);
  Sexy::SexyAppBase::ReadBufferFromFile(psVar1,(Buffer *)asStack_58,SUB81(aBStack_38,0));
  std::string::~string(asStack_58);
  nop();
  cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  while (cVar2 == '\0') {
    uVar8 = 0;
    FUN_05476574(awStack_60);
    Sexy::Buffer::ReadUTF8Line();
    lVar4 = FUN_054765d0(asStack_58);
    if (lVar4 != 0) {
      do {
        piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8);
        if (((*piVar5 != 0xd) && (piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8), *piVar5 != 10)) &&
           (piVar5 = (int *)FUN_05476f5c(asStack_58,uVar8), *piVar5 != 9)) {
          puVar6 = (undefined4 *)FUN_05476f5c(asStack_58,uVar8);
          FUN_054778bc(awStack_60,1,*puVar6);
        }
        uVar8 = uVar8 + 1;
        uVar7 = FUN_054765d0(asStack_58);
      } while (uVar8 < uVar7);
    }
    cVar2 = FUN_054765e8(awStack_60);
    if (cVar2 == '\0') {
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_50,awStack_60);
    }
    FUN_05476c50(asStack_58);
    FUN_05476c50(awStack_60);
    cVar2 = Sexy::Buffer::AtEnd(aBStack_38);
  }
  uVar3 = ProfileUtils::CheckValidUserName
                    ((wstring *)(*(long *)(this + 0xe8) + 0xe8),(vector *)avStack_50);
  Sexy::Buffer::~Buffer(aBStack_38);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

