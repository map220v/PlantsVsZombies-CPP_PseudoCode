// Class: PuzzleRotateButton


/* PuzzleRotateButton::SetItemData(CoreItemDataBase*) */

void __thiscall PuzzleRotateButton::SetItemData(PuzzleRotateButton *this,CoreItemDataBase *param_1)

{
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)this,param_1);
  (**(code **)(*(long *)this + 0x40))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateButton::Resize(Sexy::TRect<int> const&) */

void __thiscall PuzzleRotateButton::Resize(PuzzleRotateButton *this,TRect *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)(this + 0x10),param_1);
  (**(code **)(*(long *)this + 0x48))((PuzzleTipUtil *)&local_18,this);
  pcVar2 = *(code **)(*(long *)this + 0x50);
  *(undefined8 *)(this + 0x318) = local_18;
  *(undefined8 *)(this + 800) = uStack_10;
  (*pcVar2)((PuzzleTipUtil *)&local_18,this);
  pcVar2 = *(code **)(*(long *)this + 0x58);
  *(undefined8 *)(this + 0x328) = local_18;
  *(undefined8 *)(this + 0x330) = uStack_10;
  (*pcVar2)((PuzzleTipUtil *)&local_18,this);
  pcVar2 = *(code **)(*(long *)(this + 0x10) + 0xd0);
  *(undefined8 *)(this + 0x51c) = local_18;
  *(undefined8 *)(this + 0x524) = uStack_10;
  (*pcVar2)(auStack_20,(PlantHeadshot *)(this + 0x10));
  PuzzleTipUtil::CreateTipRect((PuzzleTipUtil *)&local_18,auStack_20,*(undefined4 *)(this + 0x60));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x35c) = local_18;
  *(undefined8 *)(this + 0x364) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PuzzleRotateButton::Resize(Sexy::TRect<int> const&) */

void __thiscall PuzzleRotateButton::Resize(PuzzleRotateButton *this,TRect *param_1)

{
  Resize(this + -0x10,param_1);
  return;
}


/* PuzzleRotateButton::DeleteTip() */

void __thiscall PuzzleRotateButton::DeleteTip(PuzzleRotateButton *this)

{
  if (*(PuzzleTip **)(this + 0x370) != (PuzzleTip *)0x0) {
    PuzzleTipUtil::DeleteTip(*(PuzzleTip **)(this + 0x370));
    return;
  }
  return;
}


/* PuzzleRotateButton::ButtonDepress(int) */

void PuzzleRotateButton::ButtonDepress(int param_1)

{
  if (*(PuzzleTip **)((ulong)(uint)param_1 + 0x370) != (PuzzleTip *)0x0) {
    PuzzleTipUtil::DeleteTip(*(PuzzleTip **)((ulong)(uint)param_1 + 0x370));
    return;
  }
  return;
}


/* non-virtual thunk to PuzzleRotateButton::ButtonDepress(int) */

void __thiscall PuzzleRotateButton::ButtonDepress(PuzzleRotateButton *this,int param_1)

{
  ButtonDepress((int)this + -0x310);
  return;
}


/* PuzzleRotateButton::ButtonMouseLeave(int) */

void PuzzleRotateButton::ButtonMouseLeave(int param_1)

{
  if (*(PuzzleTip **)((ulong)(uint)param_1 + 0x370) != (PuzzleTip *)0x0) {
    PuzzleTipUtil::DeleteTip(*(PuzzleTip **)((ulong)(uint)param_1 + 0x370));
    return;
  }
  return;
}


/* non-virtual thunk to PuzzleRotateButton::ButtonMouseLeave(int) */

void __thiscall PuzzleRotateButton::ButtonMouseLeave(PuzzleRotateButton *this,int param_1)

{
  ButtonMouseLeave((int)this + -0x310);
  return;
}


/* PuzzleRotateButton::CreateFrameRect() */

void PuzzleRotateButton::CreateFrameRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  
  iVar1 = FUN_04c409f4(3);
  iVar2 = FUN_04c409f4(6);
  Sexy::Insets::Insets
            (in_x8,iVar1,iVar1,*(int *)(in_x0 + 0x60) - iVar2,*(int *)(in_x0 + 100) - iVar2);
  return;
}


/* PuzzleRotateButton::CreateIconRect() */

void PuzzleRotateButton::CreateIconRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  
  iVar1 = FUN_04c409f4(6);
  iVar2 = FUN_04c409f4(0xc);
  Sexy::Insets::Insets
            (in_x8,iVar1,iVar1,*(int *)(in_x0 + 0x60) - iVar2,*(int *)(in_x0 + 100) - iVar2);
  return;
}


/* PuzzleRotateButton::CreateCountRect() */

void PuzzleRotateButton::CreateCountRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_x0;
  Insets *in_x8;
  
  iVar2 = FUN_04c409f4(0x3c);
  iVar3 = FUN_04c409f4(0x1e);
  iVar4 = FUN_04c409f4(0x78);
  iVar1 = *(int *)(in_x0 + 0x60);
  iVar5 = FUN_04c409f4(0x28);
  Sexy::Insets::Insets(in_x8,iVar2,iVar3,iVar1 - iVar4,iVar5);
  return;
}


/* PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  *(undefined ***)this = &PTR__PuzzleRotateButton_06986780;
  *(undefined **)(this + 0x10) = &DAT_069867f0;
  *(undefined ***)(this + 0x1a8) = &PTR__PuzzleRotateButton_06986b48;
  *(undefined **)(this + 0x310) = &DAT_06986b70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)(this + 0x10),true,true);
  PacketRenderData::~PacketRenderData((PacketRenderData *)(this + 0x378));
  FUN_05476c50(this + 0x350);
  FUN_05476c50(this + 0x348);
  PuzzleRotateItemBase::~PuzzleRotateItemBase((PuzzleRotateItemBase *)this);
  return;
}


/* non-virtual thunk to PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  ~PuzzleRotateButton(this + -0x1a8);
  return;
}


/* non-virtual thunk to PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  ~PuzzleRotateButton(this + -0x10);
  return;
}


/* PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  ~PuzzleRotateButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  ~PuzzleRotateButton(this + -0x1a8);
  return;
}


/* non-virtual thunk to PuzzleRotateButton::~PuzzleRotateButton() */

void __thiscall PuzzleRotateButton::~PuzzleRotateButton(PuzzleRotateButton *this)

{
  ~PuzzleRotateButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateButton::ButtonPress(int) */

void PuzzleRotateButton::ButtonPress(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(long *)(uVar1 + 0x370) == 0) {
    FUN_05477b24(auStack_20,uVar1 + 0x350);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(uVar1 + 0x35c));
    uVar2 = PuzzleTipUtil::PopTip(auStack_20,aIStack_18);
    *(undefined8 *)(uVar1 + 0x370) = uVar2;
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PuzzleRotateButton::ButtonPress(int) */

void __thiscall PuzzleRotateButton::ButtonPress(PuzzleRotateButton *this,int param_1)

{
  ButtonPress((int)this + -0x310);
  return;
}


/* PuzzleRotateButton::PuzzleRotateButton(int) */

void __thiscall PuzzleRotateButton::PuzzleRotateButton(PuzzleRotateButton *this,int param_1)

{
  PuzzleRotateItemBase::PuzzleRotateItemBase((PuzzleRotateItemBase *)this,param_1);
  *(undefined ***)this = &PTR__PuzzleRotateButton_06986780;
  *(undefined **)(this + 0x10) = &DAT_069867f0;
  *(undefined ***)(this + 0x1a8) = &PTR__PuzzleRotateButton_06986b48;
  *(undefined **)(this + 0x310) = &DAT_06986b70;
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  Sexy::Insets::Insets((Insets *)(this + 0x328));
  FUN_05476574(this + 0x348);
  FUN_05476574(this + 0x350);
  Sexy::Insets::Insets((Insets *)(this + 0x35c));
  PacketRenderData::PacketRenderData((PacketRenderData *)(this + 0x378));
  Sexy::Insets::Insets((Insets *)(this + 0x4f8));
  Sexy::Insets::Insets((Insets *)(this + 0x508));
  Sexy::Insets::Insets((Insets *)(this + 0x51c));
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  FUN_054772c4(this + 0x348,&DAT_056f11a8);
  FUN_054772c4(this + 0x350,&DAT_056f11a8);
  *(undefined4 *)(this + 0x358) = 0;
  this[0x518] = (PuzzleRotateButton)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateButton::InitPieceRenderData(std::wstring) */

void __thiscall PuzzleRotateButton::InitPieceRenderData(PuzzleRotateButton *this,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar5;
  float fVar6;
  float fVar7;
  string asStack_28 [8];
  int iStack_20;
  int iStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToString(param_2);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  pPVar5 = (PacketRenderData *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_28);
  fVar7 = ((float)*(int *)(this + 0x330) * 0.9) / (float)*(int *)(pPVar5 + 0x28);
  fVar6 = ((float)*(int *)(this + 0x334) * 0.9) / (float)*(int *)(pPVar5 + 0x2c);
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(pPVar5 + 0x170));
  GetImageOffset(&iStack_20,(RtId *)&local_18);
  Sexy::RtId::~RtId((RtId *)&local_18);
  UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_20,&iStack_1c,1536.0);
  Sexy::Insets::Insets
            ((Insets *)&local_18,
             (int)((float)*(int *)(this + 0x328) + (float)*(int *)(pPVar5 + 0x30) * fVar7),
             (int)((float)*(int *)(this + 0x32c) + (float)*(int *)(pPVar5 + 0x34) * fVar6),
             (int)(fVar7 * (float)*(int *)(pPVar5 + 0x28)),
             (int)(fVar6 * (float)*(int *)(pPVar5 + 0x2c)));
  iVar1 = *(int *)(pPVar5 + 0x18);
  iVar2 = *(int *)(pPVar5 + 0x1c);
  iVar3 = *(int *)(pPVar5 + 0x10);
  iVar4 = *(int *)(pPVar5 + 0x14);
  *(undefined8 *)(this + 0x4f8) = local_18;
  *(undefined8 *)(this + 0x500) = uStack_10;
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)*(int *)(this + 0x328) + (float)iVar1 * fVar7),
             (int)((float)*(int *)(this + 0x32c) + (float)iVar2 * fVar6),(int)(fVar7 * (float)iVar3)
             ,(int)(fVar6 * (float)iVar4));
  *(undefined8 *)(this + 0x508) = local_18;
  *(undefined8 *)(this + 0x510) = uStack_10;
  PacketRenderData::operator=((PacketRenderData *)(this + 0x378),pPVar5);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateButton::AnalyzeItemInfo(CoreItemDataBase*) */

void __thiscall
PuzzleRotateButton::AnalyzeItemInfo(PuzzleRotateButton *this,CoreItemDataBase *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int extraout_w1;
  undefined1 auVar5 [12];
  undefined1 auStack_30 [8];
  GameItemInfo aGStack_28 [8];
  int local_20;
  int local_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (CoreItemDataBase *)0x0) {
    uVar2 = FUN_04c40588(*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_04c4058c(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(this + 0x358) = uVar3;
    if ((uVar2 == 0xbc0) || (uVar2 == 0xfad)) {
      uVar4 = GameResourceUtil::GetFrameImageById(uVar2);
      *(undefined8 *)(this + 0x338) = uVar4;
      auVar5 = GameResourceUtil::GetImageById(uVar2);
      *(long *)(this + 0x340) = auVar5._0_8_;
      GameInfoUtil::GetDescriptionById((GameInfoUtil *)(ulong)uVar2,auVar5._8_4_);
      FUN_054766c8(this + 0x348,aGStack_28);
      FUN_05476c50(aGStack_28);
      GameInfoUtil::GetDescriptionById((GameInfoUtil *)(ulong)uVar2,extraout_w1);
      FUN_054766c8(this + 0x350,aGStack_28);
      FUN_05476c50(aGStack_28);
    }
    else {
      GameItemInfo::GameItemInfo(aGStack_28);
      cVar1 = GameInfoUtil::GetItemInfoById(uVar2,aGStack_28);
      if (cVar1 != '\0') {
        uVar4 = GameResourceUtil::GetFrameImageByRare(local_1c);
        *(undefined8 *)(this + 0x338) = uVar4;
        *(undefined8 *)(this + 0x340) = local_18;
        thunk_FUN_05477b9c(this + 0x348,aGStack_28);
        thunk_FUN_05477b9c(this + 0x350,aGStack_28);
        if (local_20 == 2) {
          this[0x518] = (PuzzleRotateButton)0x1;
          FUN_05477b24(auStack_30,this + 0x348);
          InitPieceRenderData(this,auStack_30);
          FUN_05476c50(auStack_30);
        }
      }
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotateButton::Draw(Sexy::Graphics*) */

void __thiscall PuzzleRotateButton::Draw(PuzzleRotateButton *this,Graphics *param_1)

{
  bool bVar1;
  Image *pIVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90750);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x60),*(int *)(this + 100));
  if (*(Image **)(this + 0x338) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x338),*(int *)(this + 0x318),*(int *)(this + 0x31c),
               *(int *)(this + 800),*(int *)(this + 0x324));
  }
  if (this[0x518] == (PuzzleRotateButton)0x0) {
    if (*(Image **)(this + 0x340) != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0x340),*(int *)(this + 0x328),*(int *)(this + 0x32c),
                 *(int *)(this + 0x330),*(int *)(this + 0x334));
    }
  }
  else {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x4e8));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar4,(TRect *)(this + 0x4f8),(TRect *)(this + 0x398));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x378));
    if (bVar1) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x378));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x48));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar4,(TRect *)(this + 0x508),(TRect *)(this + 0x380));
    }
  }
  if (*(int *)(this + 0x358) != 0) {
    Sexy::StrFormat(L"%d",auStack_20);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_20,this + 0x51c,uVar3,aCStack_18,5,1);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PuzzleRotateButton::Draw(Sexy::Graphics*) */

void __thiscall PuzzleRotateButton::Draw(PuzzleRotateButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

