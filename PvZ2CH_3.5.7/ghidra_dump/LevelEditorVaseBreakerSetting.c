// Class: LevelEditorVaseBreakerSetting


/* LevelEditorVaseBreakerSetting::SetFunc(std::function<void (int, std::string)>) */

void __thiscall
LevelEditorVaseBreakerSetting::SetFunc(LevelEditorVaseBreakerSetting *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0x148),param_2);
  return;
}


/* LevelEditorVaseBreakerSetting::SliderVal(int, double) */

void __thiscall
LevelEditorVaseBreakerSetting::SliderVal
          (LevelEditorVaseBreakerSetting *this,int param_1,double param_2)

{
  if (param_1 != 4) {
    return;
  }
  *(int *)(this + 0xf0) =
       *(int *)(this + 0xe8) +
       (int)(param_2 * (double)(*(int *)(this + 0xec) - *(int *)(this + 0xe8)));
  return;
}


/* non-virtual thunk to LevelEditorVaseBreakerSetting::SliderVal(int, double) */

void __thiscall
LevelEditorVaseBreakerSetting::SliderVal
          (LevelEditorVaseBreakerSetting *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* LevelEditorVaseBreakerSetting::SetSelectPlant(bool) */

void __thiscall
LevelEditorVaseBreakerSetting::SetSelectPlant(LevelEditorVaseBreakerSetting *this,bool param_1)

{
  this[0x180] = (LevelEditorVaseBreakerSetting)param_1;
  (**(code **)(**(long **)(this + 0x170) + 0x310))(*(long **)(this + 0x170),param_1);
  (**(code **)(**(long **)(this + 0x178) + 0x310))(*(long **)(this + 0x178),(byte)this[0x180] ^ 1);
  FUN_04b653ec(*(long *)(this + 0x168) + 0x100,this[0x180]);
  return;
}


/* LevelEditorVaseBreakerSetting::~LevelEditorVaseBreakerSetting() */

void __thiscall
LevelEditorVaseBreakerSetting::~LevelEditorVaseBreakerSetting(LevelEditorVaseBreakerSetting *this)

{
  *(undefined **)(this + 0xe0) = &DAT_0696c820;
  *(undefined ***)this = &PTR_GetClass_0696c4a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696c7d8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  FUN_05476c50(this + 0x140);
  std::string::~string((string *)(this + 0x138));
  LevelEditorSliderWidget::~LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  return;
}


/* LevelEditorVaseBreakerSetting::~LevelEditorVaseBreakerSetting() */

void __thiscall
LevelEditorVaseBreakerSetting::~LevelEditorVaseBreakerSetting(LevelEditorVaseBreakerSetting *this)

{
  ~LevelEditorVaseBreakerSetting(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSetting::SetVaseBreakerData(std::string, bool, int) */

void __thiscall
LevelEditorVaseBreakerSetting::SetVaseBreakerData
          (LevelEditorVaseBreakerSetting *this,string *param_2,LevelEditorVaseBreakerSetting param_3
          ,int param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined4 local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(**(long **)(this + 0x128) + 0x310);
  *(int *)(this + 0xf0) = param_4;
  this[0x180] = param_3;
  (*pcVar2)((double)param_4 / ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),
            *(long **)(this + 0x128));
  bVar1 = std::operator!=(param_2,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_18);
    thunk_FUN_05475e00(auStack_10,param_2);
    local_18[0] = 3;
    if (param_3 != (LevelEditorVaseBreakerSetting)0x0) {
      local_18[0] = 1;
    }
    LevelEditorSeedPacket::ChangeCardInfo
              (*(LevelEditorSeedPacket **)(this + 0x168),(LevelEditorCardInfo *)local_18);
    FUN_04b653ec(*(long *)(this + 0x168) + 0x100,this[0x180]);
    PakRecord::~PakRecord((PakRecord *)local_18);
  }
  (**(code **)(**(long **)(this + 0x170) + 0x310))(*(long **)(this + 0x170),this[0x180]);
  (**(code **)(**(long **)(this + 0x178) + 0x310))(*(long **)(this + 0x178),(byte)this[0x180] ^ 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSetting::ButtonDepress(int) */

void __thiscall
LevelEditorVaseBreakerSetting::ButtonDepress(LevelEditorVaseBreakerSetting *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x148));
    if (bVar2) {
      PlantWarsNetworkMgr::GetCurrentLevel();
      uVar1 = *(undefined4 *)(this + 0xf0);
      FUN_05475d88(asStack_10,asStack_18);
      std::function<void(int,std::string)>::operator()
                ((function<void(int,std::string)> *)(this + 0x148),uVar1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorVaseBreakerSetting::ButtonDepress(int) */

void __thiscall
LevelEditorVaseBreakerSetting::ButtonDepress(LevelEditorVaseBreakerSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSetting::Init() */

void __thiscall LevelEditorVaseBreakerSetting::Init(LevelEditorVaseBreakerSetting *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  Image *pIVar7;
  Slider *pSVar8;
  LevelEditorVaseBreakerLevelUpSeedPacket *this_00;
  LevelEditorVaseBreakerSelect *pLVar9;
  PVZ2UIButton *this_01;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  string asStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b866f0);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86bc8);
  pSVar8 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar8,pIVar6,pIVar7,4,(SliderListener *)(this + 0xe0));
  *(Slider **)(this + 0x128) = pSVar8;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b868b0);
  iVar1 = FUN_04b665cc(3);
  Sexy::Slider::SetFillImage(pSVar8,pIVar6,iVar1);
  (**(code **)(**(long **)(this + 0x128) + 0x310))
            ((double)*(int *)(this + 0xf0) /
             ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),
             *(long **)(this + 0x128));
  uVar2 = FUN_04b665cc(4);
  FUN_04b653d4(*(long *)(this + 0x128) + 0x184,uVar2);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x128),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x128),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x128),true);
  pSVar8 = *(Slider **)(this + 0x128);
  iVar1 = FUN_04b665cc(2);
  Sexy::Point::Point(aPStack_40,iVar1,iVar1);
  Sexy::Slider::SetKnobShadowOffsets(pSVar8,aPStack_40);
  plVar11 = *(long **)(this + 0x128);
  uVar2 = FUN_04b665cc(0x32);
  uVar3 = FUN_04b665cc(0x10e);
  uVar4 = FUN_04b665cc(0xe6);
  uVar5 = FUN_04b665cc(0x28);
  (**(code **)(*plVar11 + 0x198))(plVar11,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  this_00 = ::operator_new(0x108);
  LevelEditorVaseBreakerLevelUpSeedPacket::LevelEditorVaseBreakerLevelUpSeedPacket(this_00);
  *(LevelEditorVaseBreakerLevelUpSeedPacket **)(this + 0x168) = this_00;
  iVar1 = FUN_04b665cc(0x5a);
  uVar2 = FUN_04b665cc(0xa0);
  uVar3 = FUN_04b665cc(0x37);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(*(int *)(this + 0x50) - iVar1) / 2,uVar2,iVar1,uVar3);
  LevelEditorSeedPacket::Init(*(LevelEditorSeedPacket **)(this + 0x168),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  pLVar9 = ::operator_new(0xe8);
  LevelEditorVaseBreakerSelect::LevelEditorVaseBreakerSelect(pLVar9,true);
  *(LevelEditorVaseBreakerSelect **)(this + 0x170) = pLVar9;
  uVar2 = FUN_04b665cc(0x50);
  uVar3 = FUN_04b665cc(100);
  uVar4 = FUN_04b665cc(0x5a);
  uVar5 = FUN_04b665cc(0x37);
  (**(code **)(*(long *)pLVar9 + 0x198))(pLVar9,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(**(long **)(this + 0x170) + 0x310))(*(long **)(this + 0x170),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  pLVar9 = ::operator_new(0xe8);
  LevelEditorVaseBreakerSelect::LevelEditorVaseBreakerSelect(pLVar9,false);
  *(LevelEditorVaseBreakerSelect **)(this + 0x178) = pLVar9;
  uVar2 = FUN_04b665cc(0xb4);
  uVar3 = FUN_04b665cc(100);
  uVar4 = FUN_04b665cc(0x5a);
  uVar5 = FUN_04b665cc(0x37);
  (**(code **)(*(long *)pLVar9 + 0x198))(pLVar9,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(**(long **)(this + 0x178) + 0x310))(*(long **)(this + 0x178),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x178));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x1f,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aPStack_40)
  ;
  FUN_05476c50(asStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b86bf0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b86d10,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aPStack_40);
  uVar2 = FUN_04b665cc(0x78);
  uVar3 = FUN_04b665cc(0x13b);
  uVar4 = FUN_04b665cc(0x32);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar2,uVar4);
  pcVar12 = *(code **)(*(long *)this_01 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar12)(this_01,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  std::string::string(asStack_78,"[CUSTOM_LEVEL_VASE_BREAKER_SELECT_PLANT_OR_ZOMBIE]");
  StringHelper::ToStringValue(asStack_78);
  FUN_054766c8(this + 0x140,aPStack_40);
  FUN_05476c50(aPStack_40);
  std::string::~string(asStack_78);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSetting::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorVaseBreakerSetting::Draw(LevelEditorVaseBreakerSetting *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86ce8);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04b665cc(0);
  iVar2 = FUN_04b665cc(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04b665cc(0x14);
  iVar3 = FUN_04b665cc(0x46);
  iVar4 = FUN_04b665cc(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b665cc(0x55);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86cc0);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf0));
  Sexy::ToWString(asStack_40);
  std::operator+((wstring *)(this + 0x100),(wstring *)asStack_38);
  iVar1 = FUN_04b665cc(0);
  iVar2 = FUN_04b665cc(0xe6);
  iVar3 = FUN_04b665cc(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string(asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b665cc(0x14);
  iVar2 = FUN_04b665cc(0x113);
  iVar3 = FUN_04b665cc(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b665cc(0x113);
  iVar2 = FUN_04b665cc(0x3c);
  iVar3 = FUN_04b665cc(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar1 = FUN_04b665cc(0);
  iVar2 = FUN_04b665cc(0x50);
  iVar3 = FUN_04b665cc(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0x140,aIStack_18,uVar6,aIStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorVaseBreakerSetting::LevelEditorVaseBreakerSetting() */

void __thiscall
LevelEditorVaseBreakerSetting::LevelEditorVaseBreakerSetting(LevelEditorVaseBreakerSetting *this)

{
  undefined *puVar1;
  undefined **__n;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  LevelEditorSliderWidget::LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  __n = &PTR_ButtonPress_0696c7d8;
  *(undefined ***)this = &PTR_GetClass_0696c4a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696c7d8;
  *(undefined **)(this + 0xe0) = &DAT_0696c820;
  Set8BytesTo0((string *)(this + 0x138));
  FUN_05476574(this + 0x140);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::string::append((string *)(this + 0x138),"",(size_t)__n);
  this[0x180] = (LevelEditorVaseBreakerSetting)0x1;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetSelectPlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<LevelEditorVaseBreakerSetting,void(LevelEditorVaseBreakerSetting::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SetSelectPlantOrZombie,&local_40);
  return;
}

