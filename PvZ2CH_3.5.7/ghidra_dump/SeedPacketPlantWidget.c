// Class: SeedPacketPlantWidget


/* SeedPacketPlantWidget::~SeedPacketPlantWidget() */

void __thiscall SeedPacketPlantWidget::~SeedPacketPlantWidget(SeedPacketPlantWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06940fd0;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SeedPacketPlantWidget::~SeedPacketPlantWidget() */

void __thiscall SeedPacketPlantWidget::~SeedPacketPlantWidget(SeedPacketPlantWidget *this)

{
  ~SeedPacketPlantWidget(this);
  AK::FreeHook(this);
  return;
}


/* SeedPacketPlantWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
SeedPacketPlantWidget::DrawAll(SeedPacketPlantWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(PopAnimRig **)(this + 0xe8) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xe8),param_2);
  }
  if (*(PopAnimRig **)(this + 0xf0) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xf0),param_2);
    return;
  }
  return;
}


/* SeedPacketPlantWidget::SeedPacketPlantWidget() */

void __thiscall SeedPacketPlantWidget::SeedPacketPlantWidget(SeedPacketPlantWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06940fd0;
  Set8BytesTo0(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x59] = (SeedPacketPlantWidget)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketPlantWidget::SetNum(int, bool) */

void __thiscall SeedPacketPlantWidget::SetNum(SeedPacketPlantWidget *this,int param_1,bool param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  NumberWidget *pNVar6;
  long *plVar7;
  Color aCStack_18 [16];
  long local_8;
  
  pNVar6 = *(NumberWidget **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (pNVar6 == (NumberWidget *)0x0) {
    pNVar6 = ::operator_new(0x120);
    memset(pNVar6,0,0x120);
    NumberWidget::NumberWidget(pNVar6);
    *(NumberWidget **)(this + 0xf8) = pNVar6;
    uVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline;
    Sexy::Color::Color(aCStack_18,1);
    NumberWidget::SetFontMode(pNVar6,uVar1,aCStack_18);
    plVar7 = *(long **)(this + 0xf8);
    uVar2 = FUN_04a8ed7c(9);
    uVar3 = FUN_04a8ed7c(0x27);
    uVar4 = FUN_04a8ed7c(0x32);
    uVar5 = FUN_04a8ed7c(0x1e);
    (**(code **)(*plVar7 + 0x198))(plVar7,uVar2,uVar3,uVar4,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    pNVar6 = *(NumberWidget **)(this + 0xf8);
  }
  NumberWidget::SetNumber(pNVar6,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacketPlantWidget::GetNum() const */

void __thiscall SeedPacketPlantWidget::GetNum(SeedPacketPlantWidget *this)

{
  if (*(long *)(this + 0xf8) != 0) {
    FUN_04a8eb74(*(undefined4 *)(*(long *)(this + 0xf8) + 0xd4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketPlantWidget::PlayEffects() */

void __thiscall SeedPacketPlantWidget::PlayEffects(SeedPacketPlantWidget *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(PopAnimRig **)(this + 0xe8) != (PopAnimRig *)0x0) {
    PopAnimRig::SetDisabled(*(PopAnimRig **)(this + 0xe8),false);
    pPVar1 = *(PopAnimRig **)(this + 0xe8);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (*(PopAnimRig **)(this + 0xf0) != (PopAnimRig *)0x0) {
    PopAnimRig::SetDisabled(*(PopAnimRig **)(this + 0xf0),false);
    pPVar1 = *(PopAnimRig **)(this + 0xf0);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacketPlantWidget::Update() */

void __thiscall SeedPacketPlantWidget::Update(SeedPacketPlantWidget *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  
  if ((*(PopAnimRig **)(this + 0xe8) != (PopAnimRig *)0x0) &&
     (cVar1 = PopAnimRig::GetIsDisabled(*(PopAnimRig **)(this + 0xe8)), cVar1 == '\0')) {
    pPVar2 = *(PopAnimRig **)(this + 0xe8);
    fVar3 = (float)PVZ_RealT();
    fVar4 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
  }
  if ((*(PopAnimRig **)(this + 0xf0) != (PopAnimRig *)0x0) &&
     (cVar1 = PopAnimRig::GetIsDisabled(*(PopAnimRig **)(this + 0xf0)), cVar1 == '\0')) {
    pPVar2 = *(PopAnimRig **)(this + 0xf0);
    fVar3 = (float)PVZ_RealT();
    fVar4 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(pPVar2,fVar3,fVar4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketPlantWidget::SetPlantType(std::string const&) */

void SeedPacketPlantWidget::SetPlantType(string *param_1)

{
  string *psVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  SeedPacketUtils *this_01;
  undefined8 uVar4;
  PopAnim *pPVar5;
  RtClass *pRVar6;
  string asStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  psVar1 = param_1 + 0xd8;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(psVar1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar2 = PlayerInfo::GetPlantStarLevel(this_00,psVar1,false);
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  uVar4 = SeedPacketUtils::GetPlantPacketRenderData(this_01,psVar1,iVar2,-1,-1);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar2 = FUN_04a8ed7c(0xffffffb0);
  iVar3 = FUN_04a8ed7c(0xffffffcf);
  FUN_04a8eb54((float)iVar2,(float)iVar3,auStack_28,auStack_1c);
  if (*(long *)(param_1 + 0xe8) == 0) {
    std::string::string(asStack_38,"POPANIM_EFFECTS_PLANTBACK_EXPLODE");
    pPVar5 = (PopAnim *)StringHelper::ToAnimRig(asStack_38,true);
    pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable(pPVar5,pRVar6);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    std::string::~string(asStack_38);
    nop();
    PopAnimRig::SetDisabled(*(PopAnimRig **)(param_1 + 0xe8),true);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(param_1 + 0xe8),aSStack_30);
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    std::string::string(asStack_38,"POPANIM_EFFECTS_PLANTBACK_NUMBG");
    pPVar5 = (PopAnim *)StringHelper::ToAnimRig(asStack_38,true);
    pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable(pPVar5,pRVar6);
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    std::string::~string(asStack_38);
    nop();
    PopAnimRig::SetDisabled(*(PopAnimRig **)(param_1 + 0xf0),true);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(param_1 + 0xf0),aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketPlantWidget::Draw(Sexy::Graphics*) */

void __thiscall SeedPacketPlantWidget::Draw(SeedPacketPlantWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  Image *pIVar4;
  long lVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                       ((RtWeakPtr *)(*(long *)(this + 0xe0) + 0x170));
    lVar5 = *(long *)(this + 0xe0);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,*(int *)(lVar5 + 0x30),*(int *)(lVar5 + 0x34),
               (TRect *)(lVar5 + 0x20));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                       ((RtWeakPtr *)(*(long *)(this + 0xe0) + 0x170));
    lVar5 = *(long *)(this + 0xe0);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x1c),
               (TRect *)(lVar5 + 8));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                       ((RtWeakPtr *)(*(long *)(this + 0xe0) + 0x170));
    lVar5 = *(long *)(this + 0xe0);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(lVar5 + 0x150),*(int *)(lVar5 + 0x154),*(int *)(lVar5 + 0x148),
               *(int *)(lVar5 + 0x14c));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,(TRect *)aIStack_18,(TRect *)(*(long *)(this + 0xe0) + 0x140)
              );
    if (*(long *)(this + 0xf8) != 0) {
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ef98);
      iVar1 = FUN_04a8ed7c(3);
      iVar2 = FUN_04a8ed7c(0x24);
      Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

