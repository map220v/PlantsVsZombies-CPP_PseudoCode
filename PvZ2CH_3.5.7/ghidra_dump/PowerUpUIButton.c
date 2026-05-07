// Class: PowerUpUIButton


/* PowerUpUIButton::~PowerUpUIButton() */

void __thiscall PowerUpUIButton::~PowerUpUIButton(PowerUpUIButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06675070;
  *(undefined ***)(this + 0x198) = &PTR__PowerUpUIButton_066753d0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066753f8;
  std::string::~string((string *)(this + 0x310));
  std::string::~string((string *)(this + 0x308));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PowerUpUIButton::~PowerUpUIButton() */

void __thiscall PowerUpUIButton::~PowerUpUIButton(PowerUpUIButton *this)

{
  ~PowerUpUIButton(this + -0x198);
  return;
}


/* PowerUpUIButton::~PowerUpUIButton() */

void __thiscall PowerUpUIButton::~PowerUpUIButton(PowerUpUIButton *this)

{
  ~PowerUpUIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PowerUpUIButton::~PowerUpUIButton() */

void __thiscall PowerUpUIButton::~PowerUpUIButton(PowerUpUIButton *this)

{
  ~PowerUpUIButton(this + -0x198);
  return;
}


/* PowerUpUIButton::SetSaturation(float) */

void __thiscall PowerUpUIButton::SetSaturation(PowerUpUIButton *this,float param_1)

{
  undefined4 uVar1;
  
  uVar1 = ClampFloat(param_1,0.0,1.0);
  *(undefined4 *)(this + 0x31c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::RefreshUnlockState() */

void __thiscall PowerUpUIButton::RefreshUnlockState(PowerUpUIButton *this)

{
  PowerUpUIButton PVar1;
  hash_node *phVar2;
  hash_node **pphVar3;
  undefined4 uVar4;
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  pphVar3 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar2,pphVar3);
  PVar1 = (PowerUpUIButton)
          ArcadeProgressDatabase::IsPowerUpUnlocked
                    ((ArcadeProgressDatabase *)ahStack_18,(string *)(this + 0x310),
                     (string *)(this + 0x308));
  this[0x318] = PVar1;
  uVar4 = 0x3f800000;
  if (PVar1 == (PowerUpUIButton)0x0) {
    uVar4 = 0;
  }
  *(undefined4 *)(this + 0x31c) = uVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::SetType(std::string const&, std::string const&) */

void __thiscall PowerUpUIButton::SetType(PowerUpUIButton *this,string *param_1,string *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArcadePropertySheet *this_00;
  PowerUpCollection *this_01;
  undefined8 uVar4;
  LotteryResultProgressBar *this_02;
  SalesProgressBar *this_03;
  string *extraout_x1;
  code *pcVar5;
  undefined1 auVar6 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  cVar1 = ArcadePropertySheet::HasPowerUp(this_00,param_2,param_1);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00((string *)(this + 0x308),param_1);
    thunk_FUN_05475e00((string *)(this + 0x310),param_2);
    this_01 = (PowerUpCollection *)
              ArcadePropertySheet::GetPowerUpCollectionByID(this_00,(string *)(this + 0x308));
    auVar6 = ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID
                       (this_01,(string *)(this + 0x310));
    HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(auVar6._0_8_ + 8),auVar6._8_8_);
    HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(auVar6._0_8_ + 0x10),extraout_x1);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar4,2);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar4,2);
    PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
    pcVar5 = *(code **)(*(long *)this + 0x198);
    this_02 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    this_03 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    uVar3 = SalesProgressBar::GetCurrentLevel(this_03);
    (*pcVar5)(this,0,0,uVar2,uVar3);
    RefreshUnlockState(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::PowerUpUIButton(int, std::string const&, std::string const&) */

void __thiscall
PowerUpUIButton::PowerUpUIButton(PowerUpUIButton *this,int param_1,string *param_2,string *param_3)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06675070;
  *(undefined ***)(this + 0x198) = &PTR__PowerUpUIButton_066753d0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066753f8;
  Set8BytesTo0(this + 0x308);
  Set8BytesTo0(this + 0x310);
  this[0x318] = (PowerUpUIButton)0x0;
  *(undefined4 *)(this + 0x31c) = 0;
  SetType(this,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::doSubstitutions(std::wstring) const */

void PowerUpUIButton::doSubstitutions(undefined8 param_1,long param_2,wstring *param_3)

{
  bool bVar1;
  string *psVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  psVar2 = (string *)ArcadePropertySheet::Get();
  ArcadePropertySheet::GetUnlockSourcesForPowerUp(psVar2,(string *)(param_2 + 0x310));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (*piVar3 == 1) {
      lVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
              front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    avStack_20);
      iVar5 = *(int *)(lVar4 + 0x10);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  }
  if (0 < iVar5) {
    TodReplaceNumberString(param_3,L"{ENDLESS_WAVE}",iVar5);
    FUN_054766c8(param_3,(__normal_iterator *)&local_28);
    FUN_05476c50((__normal_iterator *)&local_28);
  }
  FUN_05476584(param_1,param_3);
  std::
  vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
  ::~vector((vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
             *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::ButtonDepress(int) */

void PowerUpUIButton::ButtonDepress(int param_1)

{
  char cVar1;
  int iVar2;
  Widget *pWVar3;
  ArcadePropertySheet *this;
  hash_node *phVar4;
  ArcadeTooltipAdaptor *this_00;
  PowerUpCollection *this_01;
  long lVar5;
  string *extraout_x1;
  string *psVar6;
  string *extraout_x1_00;
  undefined1 auVar7 [16];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  pWVar3 = (Widget *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = ArcadeTooltipAdaptor::GetGlobalTooltipCount();
  if (iVar2 < 1) {
    this = (ArcadePropertySheet *)ArcadePropertySheet::Get();
    phVar4 = (hash_node *)ProfileUtils::Profile();
    eastl::
    hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
    ::hashtable_iterator_base(ahStack_18,phVar4,(hash_node **)this);
    this_00 = ::operator_new(0x140);
    ArcadeTooltipAdaptor::ArcadeTooltipAdaptor(this_00);
    this_01 = (PowerUpCollection *)
              ArcadePropertySheet::GetPowerUpCollectionByID(this,(string *)(pWVar3 + 0x308));
    auVar7 = ArcadePropertySheetHelpers::PowerUpCollection::GetPowerUpByID
                       (this_01,(string *)(pWVar3 + 0x310));
    lVar5 = auVar7._0_8_;
    Sexy::UTF8StringToWString((Sexy *)(lVar5 + 0x20),auVar7._8_8_);
    TodStringTranslate(awStack_28);
    LevelEditorStatueMazeSliderWidget::SetDescription((wstring *)this_00);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    Set8BytesTo0(aSStack_38);
    cVar1 = ArcadeProgressDatabase::IsPowerUpUnlocked
                      ((ArcadeProgressDatabase *)ahStack_18,(string *)(pWVar3 + 0x310),
                       (string *)(pWVar3 + 0x308));
    if (cVar1 == '\0') {
      thunk_FUN_05475e00(aSStack_38,lVar5 + 0x30);
      psVar6 = extraout_x1_00;
    }
    else {
      thunk_FUN_05475e00(aSStack_38,lVar5 + 0x28);
      psVar6 = extraout_x1;
    }
    Sexy::UTF8StringToWString(aSStack_38,psVar6);
    TodStringTranslate(awStack_20);
    FUN_05476c50(awStack_20);
    FUN_05477b24(awStack_28,auStack_30);
    doSubstitutions(awStack_20,pWVar3,awStack_28);
    FUN_054766c8(auStack_30,awStack_20);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    LevelEditorStatueMazeSliderWidget::SetDescription1((wstring *)this_00);
    ArcadeTooltipAdaptor::SetTarget(this_00,pWVar3);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
    FUN_05476c50(auStack_30);
    std::string::~string((string *)aSStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PowerUpUIButton::ButtonDepress(int) */

void __thiscall PowerUpUIButton::ButtonDepress(PowerUpUIButton *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerUpUIButton::Draw(Sexy::Graphics*) */

void __thiscall PowerUpUIButton::Draw(PowerUpUIButton *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  string *psVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x31c) < 1.0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06aaa360);
    psVar3 = (string *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)psVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(psVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"Saturation");
    Sexy::RenderEffect::SetFloat(psVar3,*(float *)(this + 0x31c));
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,(RenderEffect *)psVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  }
  else {
    PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

