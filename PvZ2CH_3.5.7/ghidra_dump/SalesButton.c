// Class: SalesButton


/* SalesButton::Resize(Sexy::TRect<int>) */

void __thiscall SalesButton::Resize(SalesButton *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x30) = *param_2;
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


/* SalesButton::SetVisible(bool) */

void __thiscall SalesButton::SetVisible(SalesButton *this,bool param_1)

{
  this[0x41] = (SalesButton)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::onEnterState_IDLE(SalesButtonState) */

void SalesButton::onEnterState_IDLE(long param_1,undefined8 param_2,size_t param_3)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x108));
  if (cVar1 != '\0') {
    std::string::append((string *)(param_1 + 0xf8),"normal",param_3);
    FUN_05475d88(asStack_10,(string *)(param_1 + 0xf8));
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x108),asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::onEnterState_SELECTED(SalesButtonState) */

void SalesButton::onEnterState_SELECTED(long param_1,undefined8 param_2,size_t param_3)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x108));
  if (cVar1 != '\0') {
    std::string::append((string *)(param_1 + 0xf8),"selected_loop",param_3);
    FUN_05475d88(asStack_10,(string *)(param_1 + 0xf8));
    EffectAnim_UIAnim::PlayLoop((EffectAnim_UIAnim *)(param_1 + 0x108),asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesButton::isInState(SalesButtonState) const */

bool __thiscall SalesButton::isInState(SalesButton *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04a57b08(*(undefined4 *)(this + 0x58));
  return iVar1 == param_2;
}


/* SalesButton::getSalesButtonStateSerialization() */

void __thiscall SalesButton::getSalesButtonStateSerialization(SalesButton *this)

{
  FUN_04a57b08(*(undefined4 *)(this + 0x58));
  return;
}


/* SalesButton::~SalesButton() */

void __thiscall SalesButton::~SalesButton(SalesButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06936880;
  *(undefined ***)(this + 0x10) = &PTR__SalesButton_06936a30;
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x108));
  std::string::~string((string *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x108));
  std::string::~string((string *)(this + 0xf8));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x58));
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to SalesButton::~SalesButton() */

void __thiscall SalesButton::~SalesButton(SalesButton *this)

{
  ~SalesButton(this + -0x10);
  return;
}


/* SalesButton::~SalesButton() */

void __thiscall SalesButton::~SalesButton(SalesButton *this)

{
  ~SalesButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SalesButton::~SalesButton() */

void __thiscall SalesButton::~SalesButton(SalesButton *this)

{
  ~SalesButton(this + -0x10);
  return;
}


/* SalesButton::OnUpdate() */

void __thiscall SalesButton::OnUpdate(SalesButton *this)

{
  char cVar1;
  
  if (this[0x41] == (SalesButton)0x0) {
    return;
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x108));
  if (cVar1 == '\0') {
    StateMachine<SalesButtonState>::UpdateState((StateMachine<SalesButtonState> *)(this + 0x58));
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x108));
  StateMachine<SalesButtonState>::UpdateState((StateMachine<SalesButtonState> *)(this + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::onEnterState_CLICKING(SalesButtonState) */

void SalesButton::onEnterState_CLICKING(long param_1)

{
  EffectAnim_UIAnim *this;
  string *this_00;
  float fVar1;
  char cVar2;
  long *plVar3;
  code *__n;
  undefined4 uVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  this = (EffectAnim_UIAnim *)(param_1 + 0x108);
  local_8 = ___stack_chk_guard;
  cVar2 = EffectAnim_UIAnim::IsValid(this);
  if (cVar2 != '\0') {
    this_00 = (string *)(param_1 + 0xf8);
    plVar3 = (long *)FUN_04a5798c(*(undefined8 *)(param_1 + 0x138));
    (**(code **)(*plVar3 + 0x158))(plVar3,1);
    plVar3 = (long *)FUN_04a5798c(*(undefined8 *)(param_1 + 0x138));
    __n = *(code **)(*plVar3 + 0x188);
    (*__n)(plVar3,0);
    std::string::append(this_00,"selected",(size_t)__n);
    FUN_05475d88(asStack_10,this_00);
    EffectAnim_UIAnim::PlayOnce(this,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,this_00);
    uVar4 = EffectAnim_UIAnim::GetAnimTime(this,asStack_10);
    *(undefined4 *)(param_1 + 0x104) = uVar4;
    std::string::~string(asStack_10);
    uVar4 = PVZ_RealT();
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a4) = 0x3f99999a;
    fVar5 = (float)PVZ_RealT();
    fVar1 = *(float *)(param_1 + 0x104) * 0.3;
    *(float *)(param_1 + 0x1b0) = fVar5 + 0.2;
    *(float *)(param_1 + 0x1b4) = fVar1;
    *(float *)(param_1 + 0x1b8) = fVar5 + 0.2 + fVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::onEnterState_BACK(SalesButtonState) */

void SalesButton::onEnterState_BACK(long param_1)

{
  EffectAnim_UIAnim *this;
  string *this_00;
  float fVar1;
  char cVar2;
  long *plVar3;
  code *__n;
  undefined4 uVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  this = (EffectAnim_UIAnim *)(param_1 + 0x108);
  local_8 = ___stack_chk_guard;
  cVar2 = EffectAnim_UIAnim::IsValid(this);
  if (cVar2 != '\0') {
    this_00 = (string *)(param_1 + 0xf8);
    plVar3 = (long *)FUN_04a5798c(*(undefined8 *)(param_1 + 0x138));
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    plVar3 = (long *)FUN_04a5798c(*(undefined8 *)(param_1 + 0x138));
    __n = *(code **)(*plVar3 + 0x188);
    (*__n)(plVar3,1);
    std::string::append(this_00,"back",(size_t)__n);
    FUN_05475d88(asStack_10,this_00);
    EffectAnim_UIAnim::PlayOnce(this,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,this_00);
    uVar4 = EffectAnim_UIAnim::GetAnimTime(this,asStack_10);
    *(undefined4 *)(param_1 + 0x104) = uVar4;
    std::string::~string(asStack_10);
    uVar4 = PVZ_RealT();
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    *(undefined4 *)(param_1 + 0x1a0) = 0x3f99999a;
    *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f99999a;
    fVar5 = (float)PVZ_RealT();
    fVar5 = fVar5 + *(float *)(param_1 + 0x104) * 0.7;
    fVar1 = *(float *)(param_1 + 0x104) * 0.3;
    *(float *)(param_1 + 0x1b4) = fVar1;
    *(float *)(param_1 + 0x1b0) = fVar5;
    *(float *)(param_1 + 0x1b8) = fVar5 + fVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::onEnterState_BUYING(SalesButtonState) */

void SalesButton::onEnterState_BUYING(long param_1,undefined8 param_2,size_t param_3)

{
  EffectAnim_UIAnim *this;
  string *this_00;
  char cVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  this = (EffectAnim_UIAnim *)(param_1 + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid(this);
  if (cVar1 != '\0') {
    this_00 = (string *)(param_1 + 0xf8);
    std::string::append(this_00,"pressed",param_3);
    FUN_05475d88(asStack_10,this_00);
    EffectAnim_UIAnim::PlayOnce(this,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,this_00);
    uVar2 = EffectAnim_UIAnim::GetAnimTime(this,asStack_10);
    *(undefined4 *)(param_1 + 0x104) = uVar2;
    std::string::~string(asStack_10);
    uVar2 = PVZ_RealT();
    *(undefined4 *)(param_1 + 0x100) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::ShowPriceLayer(std::string) */

void __thiscall SalesButton::ShowPriceLayer(SalesButton *this,string *param_2)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b7cb30);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b7cb30);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar1 = std::operator==(param_2,asStack_28);
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::HideLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      else {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::ShowLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::ShowDiscountLayer(std::string) */

void __thiscall SalesButton::ShowDiscountLayer(SalesButton *this,string *param_2)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b7c968);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b7c968);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar1 = std::operator==(param_2,asStack_28);
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::HideLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      else {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::ShowLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::ShowPiecesLayer(std::string) */

void __thiscall SalesButton::ShowPiecesLayer(SalesButton *this,string *param_2)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b7cd68);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b7cd68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar1 = std::operator==(param_2,asStack_28);
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::HideLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      else {
        FUN_05475d88(asStack_10,asStack_28);
        EffectAnim_UIAnim::ShowLayer(this_00,asStack_10);
        std::string::~string(asStack_10);
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::SetIndex(SalesButtonIndex) */

void __thiscall SalesButton::SetIndex(SalesButton *this,int param_2)

{
  char cVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x50) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x108));
    if (cVar1 == '\0') goto LAB_04a59ea8;
    if (*(int *)(this + 0x44) < 3) {
LAB_04a59f90:
      std::string::string(asStack_10,"price_98yuan");
      ShowPriceLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "pieces_140";
    }
    else {
      std::string::string(asStack_10,"price_38yuan");
      ShowPriceLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"2_discounts");
      ShowDiscountLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "piecesx40";
    }
  }
  else if (param_2 == 2) {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x108));
    if (cVar1 == '\0') goto LAB_04a59ea8;
    if (*(int *)(this + 0x44) < 3) goto LAB_04a59f90;
    std::string::string(asStack_10,"price_58yuan");
    ShowPriceLayer(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"1_discounts");
    ShowDiscountLayer(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    __s = "piecesx90";
  }
  else {
    if ((param_2 != 0) ||
       (cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x108)), cVar1 == '\0'))
    goto LAB_04a59ea8;
    if (*(int *)(this + 0x44) < 3) {
      std::string::string(asStack_10,"price_68yuan");
      ShowPriceLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "pieces_90";
    }
    else {
      std::string::string(asStack_10,"price_12yuan");
      ShowPriceLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"3_discounts");
      ShowDiscountLayer(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "piecesx10";
    }
  }
  std::string::string(asStack_10,__s);
  ShowPiecesLayer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04a59ea8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::OnDraw(Sexy::Graphics*) */

void __thiscall SalesButton::OnDraw(SalesButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x41] != (SalesButton)0x0) {
    cVar9 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x108));
    if (cVar9 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x108),param_1);
    }
    cVar9 = FUN_0547419c((string *)(this + 0x1c0));
    if (cVar9 == '\0') {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x1c0));
      iVar1 = *(int *)(this_01 + 0x28);
      iVar2 = *(int *)(this_01 + 0x2c);
      iVar3 = *(int *)(this_01 + 0x30);
      iVar4 = *(int *)(this_01 + 0x34);
      iVar5 = *(int *)(this_01 + 0x1c);
      iVar6 = *(int *)(this_01 + 0x18);
      iVar7 = *(int *)(this_01 + 0x14);
      fVar14 = (float)*(int *)(this + 0x168) / (float)iVar1;
      iVar8 = *(int *)(this_01 + 0x10);
      fVar13 = (float)*(int *)(this + 0x16c) / (float)iVar2;
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      Sexy::Insets::Insets
                (aIStack_18,(int)(fVar14 * (float)iVar3) + *(int *)(this + 0x160),
                 (int)(fVar13 * (float)iVar4) + *(int *)(this + 0x164),(int)(fVar14 * (float)iVar1),
                 (int)(fVar13 * (float)iVar2));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar11,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20));
      bVar10 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar10) {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x48));
        Sexy::Insets::Insets
                  (aIStack_18,(int)(fVar14 * (float)iVar6) + *(int *)(this + 0x160),
                   (int)(fVar13 * (float)iVar5) + *(int *)(this + 0x164),
                   (int)(fVar14 * (float)iVar8),(int)(fVar13 * (float)iVar7));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar11,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
      }
    }
    else {
      bVar10 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x140));
      if (bVar10) {
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x140));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar11,*(int *)(this + 0x160),*(int *)(this + 0x164),
                   *(int *)(this + 0x168),*(int *)(this + 0x16c));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::InitImgsRects() */

void __thiscall SalesButton::InitImgsRects(SalesButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  float fVar8;
  float fVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x44) < 3) {
    *(undefined4 *)(this + 0x48) = 0xa0;
    *(undefined4 *)(this + 0x4c) = 0x14;
    *(undefined4 *)(this + 0x1a8) = 0x3ecccccd;
  }
  else {
    *(undefined4 *)(this + 0x48) = 100;
    *(undefined4 *)(this + 0x4c) = 0x19;
    *(undefined4 *)(this + 0x1a8) = 0x3e99999a;
  }
  this_00 = (RtWeakPtr *)(this + 0x140);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    cVar2 = FUN_0547419c(this + 0x1c0);
    if (cVar2 == '\0') {
      iVar3 = FUN_04a58180(*(undefined4 *)(this + 0x48));
      iVar3 = iVar3 + *(int *)(this + 0x30);
      iVar4 = FUN_04a58180(*(undefined4 *)(this + 0x4c));
      iVar4 = iVar4 + *(int *)(this + 0x34);
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d008);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      fVar8 = (float)iVar5 * *(float *)(this + 0x1a8);
      pSVar7 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d008);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      fVar9 = *(float *)(this + 0x1a8);
    }
    else {
      iVar3 = FUN_04a58180(*(undefined4 *)(this + 0x48));
      iVar3 = iVar3 + *(int *)(this + 0x30);
      iVar4 = FUN_04a58180(*(undefined4 *)(this + 0x4c));
      iVar4 = iVar4 + *(int *)(this + 0x34);
      pLVar6 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      fVar8 = (float)iVar5 * *(float *)(this + 0x1a8);
      pSVar7 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      fVar9 = *(float *)(this + 0x1a8);
    }
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,(int)fVar8,(int)((float)iVar5 * fVar9));
    *(undefined8 *)(this + 0x160) = local_18;
    *(undefined8 *)(this + 0x168) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::UpdateImgRects() */

void __thiscall SalesButton::UpdateImgRects(SalesButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_01;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    cVar2 = FUN_0547419c(this + 0x1c0);
    if (cVar2 == '\0') {
      pLVar5 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d008);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      fVar7 = *(float *)(this + 0x1ac) * *(float *)(this + 0x1a8) * (float)iVar3;
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d008);
    }
    else {
      pLVar5 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
      fVar7 = *(float *)(this + 0x1ac) * *(float *)(this + 0x1a8) * (float)iVar3;
      this_01 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    }
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    fVar8 = *(float *)(this + 0x1ac);
    iVar6 = (int)(fVar8 * *(float *)(this + 0x1a8) * (float)iVar3);
    iVar3 = FUN_04a58180(*(undefined4 *)(this + 0x48));
    fVar8 = (1.0 - fVar8) * 0.5;
    iVar4 = FUN_04a58180(*(undefined4 *)(this + 0x4c));
    Sexy::Insets::Insets
              ((Insets *)&local_18,
               (int)((float)(iVar3 + *(int *)(this + 0x30)) + (float)(int)fVar7 * fVar8),
               (int)((float)(iVar4 + *(int *)(this + 0x34)) + (float)iVar6 * fVar8),(int)fVar7,iVar6
              );
    *(undefined8 *)(this + 0x160) = local_18;
    *(undefined8 *)(this + 0x168) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::GetImgPtrFromObjectId(int) */

void SalesButton::GetImgPtrFromObjectId(int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *psVar4;
  long lVar5;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
      if (cVar1 != '\0') {
        iVar2 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        std::operator+(asStack_10,"_piece");
        std::string::~string(asStack_10);
        psVar4 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
          if (lVar5 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)in_x8);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
      }
      goto LAB_04a5dd3c;
    }
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_031f5e7c(asStack_20,"avatar_piece_",asStack_28);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
      goto joined_r0x04a5dde4;
    }
  }
  else {
    iVar2 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    thunk_FUN_05475e00((ulong)(uint)param_1 + 0x1c0,asStack_28);
    FUN_031f5e7c(asStack_20,"plant_piece_",asStack_28);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
joined_r0x04a5dde4:
      if (lVar5 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)in_x8);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
LAB_04a5dd3c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::OnRefresh() */

void __thiscall SalesButton::OnRefresh(SalesButton *this)

{
  ProfileMgr *this_00;
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_38);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)a_Stack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    PlayerInfo::GetCurrentSalesInfo();
    CurrentSalesInfo::~CurrentSalesInfo((CurrentSalesInfo *)a_Stack_38);
    GetImgPtrFromObjectId((int)this);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)a_Stack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::InitSalesButton(Sexy::TRect<int>, SalesButtonIndex) */

void __thiscall SalesButton::InitSalesButton(SalesButton *this,Insets *param_2,undefined4 param_3)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 local_28;
  undefined4 local_24;
  string asStack_20 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)a_Stack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  this[0x40] = (SalesButton)0x0;
  this[0x41] = (SalesButton)0x0;
  Sexy::Insets::Insets((Insets *)a_Stack_18,param_2);
  Resize(this,a_Stack_18);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_28,(float)(*(int *)param_2 + *(int *)(param_2 + 8) / 2),
             (float)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) / 2));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  *(undefined4 *)(this + 0x44) = 1;
  iVar1 = 0;
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetCurrentSalesPricesCount(this_01);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x44) = 1;
      iVar1 = 0;
    }
    else {
      *(int *)(this + 0x44) = iVar1;
      iVar1 = iVar1 + -1;
    }
  }
  FUN_05475d88(asStack_20,&DAT_06b7cab8 + (long)iVar1 * 8);
  FUN_05475d88(a_Stack_18,asStack_20);
  EffectAnim_UIAnim::InitUIAnim(0x3f589375,local_28,local_24,this + 0x108,a_Stack_18,1);
  std::string::~string((string *)a_Stack_18);
  OnRefresh(this);
  SetIndex(this,param_3);
  InitImgsRects(this);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  SetVisible(this,false);
  *(undefined4 *)(this + 0x1a0) = 0x3f800000;
  *(undefined4 *)(this + 0x1a4) = 0x3f800000;
  *(undefined4 *)(this + 0x1ac) = 0x3f800000;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::StaticClassInit() */

void SalesButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<SalesButtonState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<SalesButtonState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"SalesButton");
      (*pcVar4)(plVar1,asStack_150,FUN_04a606ec,0x1c8,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<SalesButtonState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_READY");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_IDLE");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_CLICKING");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_BACK");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_SELECTED");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x190);
  Sexy::Delegate0::Delegate0<SalesButton,void(SalesButton::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x198);
  Sexy::Delegate1<SalesButtonState>::Delegate1<SalesButton,void(SalesButton::*)(SalesButtonState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"SalesButtonState_BUYING");
  StateDefinition<SalesButtonState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a5ffdc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SalesButton::StaticGetClass() */

long * SalesButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"SalesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SalesButton::GetClass() const */

long * SalesButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"SalesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::setState(SalesButtonState) */

void __thiscall SalesButton::setState(SalesButton *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SalesButtonState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SalesButtonState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SalesButtonState>::GetStateDefinition
                     ((StateMachineTable<SalesButtonState> *)pSVar2,param_2);
  StateDefinition<SalesButtonState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SalesButtonState>::SetContext(aSStack_a8,this);
  StateMachine<SalesButtonState>::SetState
            ((StateMachine<SalesButtonState> *)(this + 0x58),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::SalesButton() */

void __thiscall SalesButton::SalesButton(SalesButton *this)

{
  size_t __n;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_06936880;
  *(undefined ***)(this + 0x10) = &PTR__SalesButton_06936a30;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  StateMachine<SalesButtonState>::StateMachine((StateMachine<SalesButtonState> *)(this + 0x58));
  Set8BytesTo0((string *)(this + 0xf8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Set8BytesTo0((string *)(this + 0x1c0));
  this[0x40] = (SalesButton)0x0;
  __n = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  this[0x41] = (SalesButton)0x0;
  std::string::append((string *)(this + 0xf8),"",0xffffffff);
  *(undefined8 *)(this + 0x138) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::string::append((string *)(this + 0x1c0),"",__n);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesButton::StaticNew() */

SalesButton * SalesButton::StaticNew(void)

{
  SalesButton *this;
  
  this = ::operator_new(0x1c8);
  SalesButton(this);
  return this;
}


/* SalesButton::HandleAnimStopped(std::string const&) */

void __thiscall SalesButton::HandleAnimStopped(SalesButton *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x100) = uVar3;
  *(undefined4 *)(this + 0x104) = uVar3;
  bVar1 = std::operator==("back",param_1);
  if ((bVar1) && (cVar2 = isInState(this,3), cVar2 != '\0')) {
    setState(this,1);
    return;
  }
  bVar1 = std::operator==("selected",param_1);
  if (((!bVar1) || (cVar2 = isInState(this,2), cVar2 == '\0')) &&
     ((bVar1 = std::operator==("pressed",param_1), !bVar1 ||
      (cVar2 = isInState(this,5), cVar2 == '\0')))) {
    return;
  }
  setState(this,4);
  return;
}


/* SalesButton::updateState_BACK() */

void __thiscall SalesButton::updateState_BACK(SalesButton *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0x104);
  fVar3 = *(float *)(this + 0x100);
  fVar2 = (float)PVZ_RealT();
  if (fVar1 + fVar3 <= fVar2) {
    HandleAnimStopped(this,(string *)(this + 0xf8));
  }
  fVar1 = (float)PVZ_RealT();
  if (*(float *)(this + 0x1b8) <= fVar1) {
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(this + 0x1a4);
    return;
  }
  fVar2 = *(float *)(this + 0x1b0);
  fVar1 = (float)PVZ_RealT();
  if (fVar1 <= fVar2) {
    *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(this + 0x1a0);
    return;
  }
  fVar1 = (float)PVZ_RealT();
  *(float *)(this + 0x1ac) =
       *(float *)(this + 0x1a0) +
       (*(float *)(this + 0x1a4) - *(float *)(this + 0x1a0)) *
       ((fVar1 - *(float *)(this + 0x1b0)) / *(float *)(this + 0x1b4));
  UpdateImgRects(this);
  return;
}


/* SalesButton::updateState_BUYING() */

void __thiscall SalesButton::updateState_BUYING(SalesButton *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0x104);
  fVar3 = *(float *)(this + 0x100);
  fVar2 = (float)PVZ_RealT();
  if (fVar2 < fVar1 + fVar3) {
    return;
  }
  HandleAnimStopped(this,(string *)(this + 0xf8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesButton::setSalesButtonStateSerialization(int) */

void __thiscall SalesButton::setSalesButtonStateSerialization(SalesButton *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<SalesButtonState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<SalesButtonState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<SalesButtonState>::GetStateDefinition
                     ((StateMachineTable<SalesButtonState> *)pSVar2,param_1);
  StateDefinition<SalesButtonState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<SalesButtonState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x58),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

