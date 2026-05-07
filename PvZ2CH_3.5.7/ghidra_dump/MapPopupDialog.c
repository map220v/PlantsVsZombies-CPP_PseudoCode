// Class: MapPopupDialog


/* MapPopupDialog::GetWidth() const */

MapPopupDialog * __thiscall MapPopupDialog::GetWidth(MapPopupDialog *this)

{
  return this + 0x2c;
}


/* MapPopupDialog::SetAnchorLocation(Sexy::Point) */

void __thiscall MapPopupDialog::SetAnchorLocation(MapPopupDialog *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x1c) = *param_2;
  (**(code **)(*(long *)this + 0x38))();
  return;
}


/* MapPopupDialog::PopIn() */

void __thiscall MapPopupDialog::PopIn(MapPopupDialog *this)

{
  this[0x1e4] = (MapPopupDialog)0x0;
  this[0x50] = (MapPopupDialog)0x1;
  return;
}


/* MapPopupDialog::SetBypassPurchaseData(std::wstring const&, std::wstring const&, Sexy::Delegate0)
    */

void __thiscall
MapPopupDialog::SetBypassPurchaseData
          (MapPopupDialog *this,undefined8 param_1,undefined8 param_2,Delegate2 *param_4)

{
  long lVar1;
  size_t __n;
  
  if (*(int *)(this + 0x58) < *(int *)(this + 0x5c)) {
    lVar1 = FUN_054765c4(param_2);
    if (lVar1 != 0) {
      __n = 1;
      this[0x88] = (MapPopupDialog)0x1;
      thunk_FUN_05477b9c(*(long *)(this + 0x10) + 0xd8,param_1);
      Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
                ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e8),param_4);
      std::string::append((string *)(this + 0xe0),"Play_UI_Menu_Buy_Gate_Press",__n);
      std::string::append((string *)(this + 0xe8),"Play_UI_Menu_Buy_Gate_Release",__n);
      return;
    }
  }
  this[0x88] = (MapPopupDialog)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::SetKeygateInfo(std::wstring const&, std::wstring const&, std::wstring const&) */

void __thiscall
MapPopupDialog::SetKeygateInfo
          (MapPopupDialog *this,wstring *param_1,wstring *param_2,wstring *param_3)

{
  MapPopupDialog *pMVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = this + 0x70;
  thunk_FUN_05477b9c(this + 0x78);
  thunk_FUN_05477b9c(this + 0x80,param_3);
  thunk_FUN_05477b9c(pMVar1,param_2);
  if (*(int *)(this + 0x54) == 0) {
    iVar3 = FUN_03ea4354(0xf);
    iVar3 = *(int *)(this + 0x2c) + iVar3 * -2;
    fVar5 = (float)iVar3;
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    FUN_05477b24(auStack_10,this + 0x90);
    Sexy::PrimeTypeface::SizeString_Paragraph(fVar5,uVar4,auStack_10,auStack_20,&local_1c);
    FUN_05476c50(auStack_10);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
    FUN_05477b24(auStack_10,pMVar1);
    Sexy::PrimeTypeface::SizeString_Paragraph(fVar5,uVar4,auStack_10,auStack_20,&local_18);
    FUN_05476c50(auStack_10);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    FUN_05477b24(auStack_10,this + 0x78);
    iVar2 = FUN_03ea4354(10);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(iVar3 - iVar2),uVar4,auStack_10,auStack_20,&local_14);
    FUN_05476c50(auStack_10);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_1c + local_18 + local_14;
  }
  else if (*(int *)(this + 0x54) == 1) {
    iVar3 = FUN_03ea4354(0xf);
    fVar5 = (float)(*(int *)(this + 0x2c) + iVar3 * -2);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    FUN_05477b24(auStack_10,pMVar1);
    Sexy::PrimeTypeface::SizeString_Paragraph(fVar5,uVar4,auStack_10,&local_18,&local_14);
    FUN_05476c50(auStack_10);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_14;
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(auStack_10,this + 0x80);
    Sexy::PrimeTypeface::SizeString_Paragraph(fVar5,uVar4,auStack_10,&local_18,&local_14);
    FUN_05476c50(auStack_10);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_14;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapPopupDialog::SetFreeLabel(std::wstring const&) */

void MapPopupDialog::SetFreeLabel(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xb8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::SetPurchaseData(int, int, Sexy::RtWeakPtr<Sexy::Image>, Sexy::PopAnim*,
   std::wstring const&, std::wstring const&) */

void __thiscall
MapPopupDialog::SetPurchaseData
          (MapPopupDialog *this,undefined4 param_1,undefined4 param_2,RtWeakPtr *param_4,
          PopAnim *param_5,undefined8 param_6,undefined8 param_7)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(this + 0xb8,&DAT_056f11a8);
  *(undefined4 *)(this + 0x58) = param_1;
  *(undefined4 *)(this + 0x5c) = param_2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),param_4);
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 0x18))();
  }
  *(PopAnim **)(this + 0x68) = param_5;
  if (param_5 != (PopAnim *)0x0) {
    std::string::string(asStack_10,"idle");
    Sexy::PopAnim::Play(param_5,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
  thunk_FUN_05477b9c(this + 0xc0,param_6);
  thunk_FUN_05477b9c(this + 200,param_7);
  this[0x88] = (MapPopupDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapPopupDialog::SetConfirmButtonPressed(std::wstring const&, Sexy::Delegate0, std::string const&,
   std::string const&) */

void __thiscall
MapPopupDialog::SetConfirmButtonPressed
          (MapPopupDialog *this,undefined8 param_2,Delegate2 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  
  thunk_FUN_05477b9c(*(long *)(this + 0x10) + 0xd8);
  (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e8),param_3);
  cVar1 = FUN_0547419c(param_4);
  if (cVar1 == '\0') {
    thunk_FUN_05475e00(this + 0xe0,param_4);
  }
  cVar1 = FUN_0547419c(param_5);
  if (cVar1 != '\0') {
    return;
  }
  thunk_FUN_05475e00(this + 0xe8,param_5);
  return;
}


/* MapPopupDialog::SetPreviewButtonPressed(std::wstring const&, Sexy::Delegate0) */

void __thiscall
MapPopupDialog::SetPreviewButtonPressed(MapPopupDialog *this,undefined8 param_2,Delegate2 *param_3)

{
  thunk_FUN_05477b9c(*(long *)(this + 0xf0) + 0xd8);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x218),param_3);
  return;
}


/* MapPopupDialog::SetCancelButtonPressed(std::wstring const&, Sexy::Delegate0) */

void __thiscall
MapPopupDialog::SetCancelButtonPressed(MapPopupDialog *this,undefined8 param_2,Delegate2 *param_3)

{
  thunk_FUN_05477b9c(*(long *)(this + 0xd8) + 0xd8);
  (**(code **)(**(long **)(this + 0xd8) + 0x158))(*(long **)(this + 0xd8),1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x248),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsStargatePreview(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsStargatePreview(MapPopupDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PrimeTypeface *pPVar9;
  float fVar7;
  float fVar8;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03ea4354(0x14);
  iVar5 = *(int *)(this + 0x28);
  iVar4 = *(int *)(this + 0x2c);
  iVar1 = *(int *)(this + 0x24);
  iVar3 = FUN_03ea4354(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar2 + iVar1,iVar2 + iVar5,iVar4 + iVar2 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar3) - iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
  iVar5 = local_24;
  pPVar9._0_4_ = (PrimeTypeface *)(float)local_28;
  iVar4 = FUN_03ea4354(0x14);
  fVar7 = (float)local_20;
  fVar8 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar9._0_4_,(float)(iVar5 + iVar4),fVar7,fVar8,uVar6,param_1,auStack_30,1,0,aCStack_18
             ,0);
  FUN_05476c50(auStack_30);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  iVar5 = FUN_03ea4354(0x1a);
  iVar4 = FUN_03ea4354(0x14);
  fVar7 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)local_28,(float)(local_24 + iVar5 + iVar4),(float)local_20,
             fVar7,uVar6,param_1,auStack_30,1,0,aCStack_18,0);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::IsMouseOver(int, int) */

void __thiscall MapPopupDialog::IsMouseOver(MapPopupDialog *this,int param_1,int param_2)

{
  undefined1 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (this[0x50] != (MapPopupDialog)0x0) {
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0x24),*(int *)(this + 0x28),*(int *)(this + 0x2c),
               *(int *)(this + 0x30));
    uVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::SetRewardInfoData(Sexy::RtWeakPtr<ObjectTypeDescriptor const>, MapEventItem*) */

void __thiscall
MapPopupDialog::SetRewardInfoData(MapPopupDialog *this,RtWeakPtr *param_2,undefined8 param_3)

{
  MapPopupDialog *pMVar1;
  PrimeText_PotentialTypeface *this_00;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *pRVar5;
  float fVar6;
  undefined1 auVar7 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  int local_18 [2];
  Plant aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = this + 0xa0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x278),param_2);
  FUN_054772c4(pMVar1,&DAT_056f11a8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar5);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_20);
      Plant::GetFormattedNameString(aPStack_10,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      FUN_054766c8(this + 0x90,aPStack_10);
      FUN_05476c50(aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_20);
      Plant::GetFormattedDescriptionHeader(aPStack_10,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      FUN_054766c8(this + 0x98,aPStack_10);
      FUN_05476c50(aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_20);
      Plant::GetFormattedDescriptionEx
                (aPStack_10,(RtWeakPtr<Sexy::SoundResource> *)local_18,this + 0xa8,param_3);
      FUN_054766c8(pMVar1,aPStack_10);
      FUN_05476c50(aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_03ea4c74;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<GameFeatureType>(pRVar5);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)param_2);
      auVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Sexy::StringToUpper((Sexy *)(auVar7._0_8_ + 0x10),auVar7._8_8_);
      Sexy::ToWString((string *)aRStack_20);
      TodStringTranslate((wstring *)local_18);
      FUN_054766c8(this + 0x90,aPStack_10);
      FUN_05476c50(aPStack_10);
      FUN_05476c50((wstring *)local_18);
      std::string::~string((string *)aRStack_20);
      auVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      Sexy::StringToUpper((Sexy *)(auVar7._0_8_ + 0x18),auVar7._8_8_);
      Sexy::ToWString((string *)aRStack_20);
      TodStringTranslate((wstring *)local_18);
      FUN_054766c8(this + 0x98,aPStack_10);
      FUN_05476c50(aPStack_10);
      FUN_05476c50((wstring *)local_18);
      std::string::~string((string *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
LAB_03ea4c74:
  iVar3 = FUN_03ea4354(0xf);
  fVar6 = (float)(*(int *)(this + 0x2c) + iVar3 * -2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(aPStack_10,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,aPStack_10,aRStack_20,local_18);
  FUN_05476c50(aPStack_10);
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_18[0];
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(aPStack_10,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,aPStack_10,aRStack_20,local_18);
  FUN_05476c50(aPStack_10);
  this_00 = PrimeText_Game::Typeface_FZCuYuan_18;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_18[0];
  uVar4 = PrimeText_PotentialTypeface::Typeface(this_00);
  FUN_05477b24(aPStack_10,pMVar1);
  Sexy::PrimeTypeface::SizeString_Paragraph(fVar6,uVar4,aPStack_10,aRStack_20,local_18);
  FUN_05476c50(aPStack_10);
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + local_18[0];
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsStargatePurchase(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsStargatePurchase(MapPopupDialog *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ResourceInfo *pRVar11;
  int iVar12;
  long lVar13;
  PrimeTypeface *pPVar17;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03ea4354(0x14);
  iVar5 = *(int *)(this + 0x28);
  iVar12 = *(int *)(this + 0x2c);
  iVar1 = *(int *)(this + 0x24);
  iVar4 = FUN_03ea4354(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar3 + iVar1,iVar3 + iVar5,iVar12 + iVar3 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar4) - iVar5);
  lVar13 = *(long *)(this + 0xf0);
  if (*(char *)(lVar13 + 0x6c) != '\0') {
    iVar5 = FUN_03ea4354(0x28);
    local_1c = (*(int *)(lVar13 + 0x4c) - iVar5) - *(int *)(this + 0x28);
  }
  lVar13 = *(long *)(this + 0x68);
  if (lVar13 == 0) {
    fVar16 = 0.0;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    thunk_FUN_03ea4258(*(undefined4 *)(lVar13 + 0x3c));
    iVar5 = FUN_03ea4340();
    iVar12 = (int)((float)iVar5 * 0.33);
    thunk_FUN_03ea4258(*(undefined4 *)(lVar13 + 0x40));
    iVar5 = FUN_03ea4340();
    fVar16 = *(float *)(lVar13 + 0x28);
    *(float *)(lVar13 + 0x28) = fVar16 * 0.33;
    iVar5 = (int)((float)iVar5 * 0.33);
  }
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
  iVar1 = local_24;
  pPVar17._0_4_ = (PrimeTypeface *)(float)local_28;
  iVar3 = FUN_03ea4354(0x14);
  fVar14 = (float)local_20;
  fVar15 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar17._0_4_,(float)(iVar1 + iVar3),fVar14,fVar15,uVar10,param_1,auStack_30,1,0,
             aCStack_18,0);
  FUN_05476c50(auStack_30);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  iVar1 = local_24;
  pPVar17._0_4_ = (PrimeTypeface *)(float)local_28;
  iVar3 = FUN_03ea4354(0x1a);
  iVar4 = FUN_03ea4354(0x14);
  fVar15 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar14 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar17._0_4_,(float)(iVar1 + iVar3 + iVar4),fVar14,fVar15,uVar10,param_1,auStack_30,1,
             0,aCStack_18,0);
  FUN_05476c50(auStack_30);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  FUN_05477b24(aCStack_18,this + 0xc0);
  iVar6 = Sexy::PrimeTypeface::StringWidth(uVar10,aCStack_18);
  FUN_05476c50(aCStack_18);
  iVar7 = FUN_03ea4354(0x20);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
  iVar4 = local_24;
  iVar3 = -((iVar7 + iVar6) / 2);
  iVar1 = local_28 + local_20 / 2;
  iVar8 = FUN_03ea4354(0x1a);
  iVar9 = FUN_03ea4354(0x14);
  fVar14 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0xc0);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(iVar1 + iVar3),(float)(iVar4 + iVar8 * 3 + iVar9),
             (float)(iVar7 + iVar6),fVar14,uVar10,param_1,auStack_30,0,0,aCStack_18,0);
  FUN_05476c50(auStack_30);
  if (*(long *)(this + 0x68) == 0) {
    this_00 = (RtWeakPtr *)(this + 0x60);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      iVar5 = local_28 + local_20 / 2;
      iVar4 = FUN_03ea4354(0x14);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = local_24;
      iVar12 = *(int *)(lVar13 + 0x38);
      iVar7 = FUN_03ea4354(0x1a);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar11,(iVar3 + iVar5 + iVar6 + iVar4) - iVar12 / 2,
                 (iVar1 + iVar7 * 3 + iVar7 / 2) - *(int *)(lVar13 + 0x3c) / 2);
    }
  }
  else {
    Sexy::Graphics::PushState(param_1);
    iVar1 = local_28 + local_20 / 2;
    iVar7 = FUN_03ea4354(0x14);
    iVar4 = local_24;
    iVar8 = FUN_03ea4354(0x1a);
    Sexy::Graphics::Translate
              (param_1,(int)(float)((iVar3 + iVar1 + iVar6 + iVar7) - iVar12 / 2),
               (int)(float)((iVar4 + iVar8 * 3 + iVar8 / 2) - iVar5 / 2));
    Sexy::PopAnim::Draw(*(PopAnim **)(this + 0x68),param_1);
    Sexy::Graphics::PopState(param_1);
  }
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  iVar5 = FUN_03ea4354(0x1a);
  iVar12 = FUN_03ea4354(0x14);
  fVar14 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 200);
  Sexy::Color::Color(aCStack_18,0xc,0x5c,99);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)local_28,(float)(local_24 + iVar5 * 4 + iVar12),(float)local_20
             ,fVar14,uVar10,param_1,auStack_30,1,0,aCStack_18,0);
  FUN_05476c50(auStack_30);
  if (*(long *)(this + 0x68) != 0) {
    *(float *)(*(long *)(this + 0x68) + 0x28) = fVar16;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapPopupDialog::SetDialogType(MapPopupDialog::DialogType) */

void __thiscall MapPopupDialog::SetDialogType(MapPopupDialog *this,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  
  *(undefined4 *)(this + 0x54) = param_2;
  this[0x88] = (MapPopupDialog)0x0;
  FUN_054772c4(this + 0x98,&DAT_056f11a8);
  FUN_054772c4(this + 0x90,&DAT_056f11a8);
  (**(code **)(**(long **)(this + 0x10) + 0x158))(*(long **)(this + 0x10),0);
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  (**(code **)(**(long **)(this + 0xd8) + 0x158))(*(long **)(this + 0xd8),0);
  switch(*(undefined4 *)(this + 0x54)) {
  case 0:
    uVar1 = FUN_03ea4354(0x15e);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_03ea4354(0xc3);
    *(undefined4 *)(this + 0x30) = uVar1;
    return;
  case 1:
    uVar1 = FUN_03ea4354(300);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_03ea4354(0x3c);
    *(undefined4 *)(this + 0x30) = uVar1;
    return;
  case 2:
    uVar1 = FUN_03ea4354(0xdc);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_03ea4354(0x118);
    *(undefined4 *)(this + 0x30) = uVar1;
    return;
  case 3:
    uVar1 = FUN_03ea4354(0xdc);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_03ea4354(200);
    *(undefined4 *)(this + 0x30) = uVar1;
    return;
  case 4:
  case 6:
    uVar1 = FUN_03ea4354(300);
    *(undefined4 *)(this + 0x2c) = uVar1;
    iVar2 = FUN_03ea4354(0x49);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f30);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    *(int *)(this + 0x30) = iVar2 + iVar3;
    return;
  case 5:
    break;
  default:
    uVar1 = FUN_03ea4354(100);
    *(undefined4 *)(this + 0x2c) = uVar1;
    uVar1 = FUN_03ea4354(100);
    *(undefined4 *)(this + 0x30) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::calculateLocation() */

void __thiscall MapPopupDialog::calculateLocation(MapPopupDialog *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  SalesProgressBar *this_00;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_10;
  int iStack_c;
  long local_8;
  
  iVar9 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  iVar7 = *(int *)(this + 0x34);
  iVar8 = *(int *)(this + 0x3c);
  iVar10 = *(int *)(this + 0x38);
  iVar11 = *(int *)(this + 0x40);
  if (iVar9 == 3) {
    Sexy::Point::Point((Point *)&local_10,(iVar7 + iVar8 / 2) - *(int *)(this + 0x2c) / 2,
                       (iVar10 + iVar11 / 2) - *(int *)(this + 0x30) / 2);
    *(ulong *)(this + 0x24) = CONCAT44(iStack_c,local_10);
    iVar9 = *(int *)(this + 0x2c) + local_10;
    iVar7 = iStack_c;
  }
  else {
    iVar13 = *(int *)(this + 0x20);
    iVar2 = *(int *)(this + 0x1c);
    iVar3 = iVar13 - iVar10;
    fVar18 = (float)iVar3 / (float)iVar11;
    fVar19 = (float)(iVar2 - iVar7) / (float)iVar8;
    fVar17 = fVar18 - 0.5;
    fVar16 = fVar19 - 0.5;
    if (((fVar17 < 0.0) &&
        (piVar14 = (int *)eastl::
                          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                           *)this), iVar11 + (iVar10 - iVar13) < *piVar14)) ||
       ((0.0 < fVar17 &&
        (piVar14 = (int *)eastl::
                          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                           *)this), iVar3 < *piVar14)))) {
      bVar4 = false;
      bVar6 = ABS(fVar17) <= ABS(fVar16);
      bVar5 = false;
      if (0.0 <= fVar16) goto LAB_03ea580c;
LAB_03ea5a90:
      bVar1 = false;
      piVar14 = (int *)GetWidth(this);
      bVar5 = bVar4;
      if (*piVar14 <= iVar8 + (iVar7 - iVar2)) goto LAB_03ea580c;
      bVar5 = false;
      if (!bVar6) goto LAB_03ea5abc;
LAB_03ea5830:
      bVar1 = bVar5;
      fVar20 = ABS(fVar16);
      bVar6 = 0.55 < fVar16;
      if (fVar20 <= ABS(fVar17)) goto LAB_03ea5acc;
LAB_03ea5844:
      piVar14 = (int *)GetWidth(this);
      if ((*piVar14 <= iVar8 + (iVar7 - iVar2)) || (bVar1)) goto LAB_03ea5acc;
      fVar16 = 0.6;
      if (bVar6) goto LAB_03ea5ae4;
    }
    else {
      bVar6 = true;
      bVar4 = true;
      bVar5 = bVar4;
      if (fVar16 < 0.0) goto LAB_03ea5a90;
LAB_03ea580c:
      bVar4 = bVar5;
      if (fVar16 <= 0.0) {
        bVar1 = true;
      }
      else {
        piVar14 = (int *)GetWidth(this);
        bVar1 = *piVar14 <= iVar2 - iVar7;
      }
      bVar5 = bVar1;
      if (bVar6) goto LAB_03ea5830;
LAB_03ea5abc:
      fVar20 = 0.6;
      bVar6 = true;
      if (ABS(fVar17) < 0.6) goto LAB_03ea5844;
LAB_03ea5acc:
      fVar16 = ABS(fVar17);
      if ((0.55 < fVar17) && (fVar16 = ABS(fVar17), bVar6)) {
LAB_03ea5ae4:
        FUN_03ea427c(this + 0x18);
        goto LAB_03ea5a1c;
      }
    }
    if ((fVar20 < fVar16) || ((bVar4 && (iVar9 == 2)))) {
      if ((0.5 < fVar18) ||
         ((iVar9 == 2 &&
          (piVar14 = (int *)eastl::
                            hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                            ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                             *)this), *piVar14 <= iVar3)))) {
        iVar9 = *(int *)(this + 0x30);
        iVar7 = FUN_03ea4354(0x14);
        *(int *)(this + 0x28) = (iVar13 - iVar9) - iVar7;
        *(undefined4 *)(this + 0x4c) = 0x43340000;
        iVar7 = FUN_03ea4354(0);
        iVar8 = FUN_03ea4354(6);
        iVar9 = FUN_03ea4354(0x14);
        iVar9 = (iVar13 + iVar8) - iVar9;
      }
      else {
        iVar9 = FUN_03ea4354(0x14);
        *(int *)(this + 0x28) = iVar13 + iVar9;
        *(undefined4 *)(this + 0x4c) = 0;
        iVar7 = FUN_03ea4354(0);
        iVar8 = FUN_03ea4354(0xfffffff8);
        iVar9 = FUN_03ea4354(0x14);
        iVar9 = iVar13 + iVar8 + iVar9;
      }
      Sexy::Point::Point((Point *)&local_10,iVar2 + iVar7,iVar9);
      *(ulong *)(this + 0x44) = CONCAT44(iStack_c,local_10);
      iVar7 = (int)((float)*(int *)(this + 0x1c) - (float)*(int *)(this + 0x2c) * fVar19);
      *(int *)(this + 0x24) = iVar7;
      iVar9 = *(int *)(this + 0x2c) + iVar7;
      if (0.5 < fVar19) {
        local_10 = FUN_03ea4354(0x14);
        local_10 = iVar9 - local_10;
        piVar14 = eastl::min_alt<int>((int *)(this + 0x44),&local_10);
        *(int *)(this + 0x44) = *piVar14;
        iVar7 = *(int *)(this + 0x28);
      }
      else {
        local_10 = FUN_03ea4354(0x14);
        local_10 = iVar7 + local_10;
        piVar14 = eastl::max_alt<int>((int *)(this + 0x44),&local_10);
        *(int *)(this + 0x44) = *piVar14;
        iVar7 = *(int *)(this + 0x28);
      }
    }
    else {
      if (fVar19 <= 0.5) {
        iVar9 = FUN_03ea4354(0x14);
        *(int *)(this + 0x24) = iVar2 + iVar9;
        *(undefined4 *)(this + 0x4c) = 0x42b40000;
        iVar7 = FUN_03ea4354(0xfffffff8);
        iVar9 = FUN_03ea4354(0x14);
        iVar9 = iVar2 + iVar7 + iVar9;
      }
      else {
        iVar9 = *(int *)(this + 0x2c);
        iVar7 = FUN_03ea4354(0x14);
        *(int *)(this + 0x24) = (iVar2 - iVar9) - iVar7;
        *(undefined4 *)(this + 0x4c) = 0x43870000;
        iVar7 = FUN_03ea4354(8);
        iVar9 = FUN_03ea4354(0x14);
        iVar9 = (iVar2 + iVar7) - iVar9;
      }
      iVar7 = FUN_03ea4354(0);
      Sexy::Point::Point((Point *)&local_10,iVar9,iVar13 + iVar7);
      iVar9 = *(int *)(this + 0x30);
      *(ulong *)(this + 0x44) = CONCAT44(iStack_c,local_10);
      iVar7 = (int)((float)*(int *)(this + 0x20) - (float)iVar9 * fVar18);
      *(int *)(this + 0x28) = iVar7;
      if (0.5 < fVar18) {
        local_10 = FUN_03ea4354(0x14);
        local_10 = (iVar9 + iVar7) - local_10;
        piVar14 = eastl::min_alt<int>((int *)(this + 0x48),&local_10);
      }
      else {
        local_10 = FUN_03ea4354(0x14);
        local_10 = iVar7 + local_10;
        piVar14 = eastl::max_alt<int>((int *)(this + 0x48),&local_10);
      }
      *(int *)(this + 0x48) = *piVar14;
      iVar9 = *(int *)(this + 0x24) + *(int *)(this + 0x2c);
    }
  }
  lVar15 = *(long *)(this + 0xd8);
  iVar8 = 0;
  iVar10 = FUN_03ea4354(10);
  iVar11 = FUN_03ea4354(0x1e);
  *(int *)(lVar15 + 0x48) = (iVar9 - iVar10) - iVar11;
  iVar9 = FUN_03ea4354(10);
  *(int *)(lVar15 + 0x4c) = iVar9 + iVar7;
  uVar12 = FUN_03ea4354(0x1e);
  *(undefined4 *)(lVar15 + 0x50) = uVar12;
  uVar12 = FUN_03ea4354(0x1e);
  *(undefined4 *)(lVar15 + 0x54) = uVar12;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f30);
  iVar9 = SalesProgressBar::GetCurrentLevel(this_00);
  if (this[0x88] != (MapPopupDialog)0x0) {
    iVar8 = FUN_03ea4354(0xfffffff0);
  }
  lVar15 = *(long *)(this + 0x10);
  if (*(char *)(lVar15 + 0x6c) == '\0') {
    iVar10 = *(int *)(this + 0x24);
    iVar11 = *(int *)(this + 0x2c);
    iVar7 = *(int *)(this + 0x28) + *(int *)(this + 0x30);
  }
  else {
    iVar10 = *(int *)(this + 0x24);
    iVar13 = FUN_03ea4354(0x18);
    iVar7 = *(int *)(this + 0x28);
    iVar11 = *(int *)(this + 0x30);
    *(int *)(lVar15 + 0x48) = iVar10 + iVar13;
    iVar7 = iVar7 + iVar11;
    iVar11 = FUN_03ea4354(0x18);
    *(int *)(lVar15 + 0x4c) = ((iVar7 - iVar11) - iVar9) + iVar8;
    iVar11 = *(int *)(this + 0x2c);
    iVar13 = FUN_03ea4354(0x18);
    *(int *)(lVar15 + 0x54) = iVar9;
    *(int *)(lVar15 + 0x50) = iVar11 + iVar13 * -2;
    iVar13 = FUN_03ea4354(0x10);
    iVar8 = iVar8 - (iVar9 + iVar13);
  }
  lVar15 = *(long *)(this + 0xf0);
  iVar13 = FUN_03ea4354(0x18);
  *(int *)(lVar15 + 0x48) = iVar13 + iVar10;
  iVar10 = FUN_03ea4354(0x18);
  *(int *)(lVar15 + 0x4c) = ((iVar7 - iVar10) - iVar9) + iVar8;
  iVar7 = FUN_03ea4354(0x18);
  *(int *)(lVar15 + 0x54) = iVar9;
  *(int *)(lVar15 + 0x50) = iVar11 + iVar7 * -2;
LAB_03ea5a1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsKeygateCleared(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsKeygateCleared(MapPopupDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  SalesProgressBar *pSVar8;
  PrimeTypeface *pPVar11;
  float fVar9;
  float fVar10;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03ea4354(0xf);
  iVar3 = *(int *)(this + 0x2c);
  iVar4 = *(int *)(this + 0x28);
  iVar5 = *(int *)(this + 0x24);
  iVar2 = FUN_03ea4354(0x1e);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar1 + iVar5,iVar1 + iVar4,iVar3 + iVar1 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar2) - iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  pPVar11._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar9 = (float)local_20;
  fVar10 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x70);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11._0_4_,(float)local_24,fVar9,fVar10,uVar6,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(aIStack_18,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar6,aIStack_18,auStack_38,&local_34);
  FUN_05476c50(aIStack_18);
  iVar3 = FUN_03ea4354(5);
  iVar3 = local_24 + iVar3 + local_34;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar5 = local_28;
  iVar1 = FUN_03ea4354(0);
  iVar4 = local_20 + iVar1 * 2;
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 - iVar1,iVar3,iVar4,iVar2);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar5 = FUN_03ea4354(0x12);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar9 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x80);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)local_28,(float)(iVar3 + iVar4 + iVar5),(float)local_20,fVar9,
             uVar6,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsKeygatePurchase(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsKeygatePurchase(MapPopupDialog *this,Graphics *param_1)

{
  MapPopupDialog MVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  Image *pIVar13;
  SalesProgressBar *pSVar14;
  CachedUIResourcePtr *pCVar15;
  ResourceInfo *pRVar16;
  LotteryResultProgressBar *pLVar17;
  long lVar18;
  undefined8 uVar19;
  PrimeTypeface *pPVar23;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_4c;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_18 [4];
  long local_8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03ea4354(0xf);
  iVar5 = *(int *)(this + 0x28);
  iVar6 = *(int *)(this + 0x2c);
  iVar7 = *(int *)(this + 0x24);
  iVar4 = FUN_03ea4354(0x1e);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar3 + iVar7,iVar3 + iVar5,iVar6 + iVar3 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar4) - iVar5);
  lVar18 = *(long *)(this + 0x68);
  if (lVar18 == 0) {
    fVar22 = 0.0;
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    fVar22 = *(float *)(lVar18 + 0x28);
    fVar20 = fVar22 * 0.33;
    *(float *)(lVar18 + 0x28) = fVar20;
    iVar5 = (int)(fVar20 * (float)*(int *)(lVar18 + 0x3c));
    iVar6 = (int)((float)*(int *)(lVar18 + 0x40) * fVar20);
  }
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  pPVar23._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar20 = (float)local_20;
  fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar23._0_4_,(float)local_24,fVar20,fVar21,uVar12,param_1,auStack_30,1,0,
             (Insets *)local_18,0);
  FUN_05476c50(auStack_30);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)local_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_20,uVar12,(Insets *)local_18,&local_4c,&local_48);
  FUN_05476c50((Insets *)local_18);
  iVar7 = FUN_03ea4354(0xfffffffb);
  iVar3 = local_24 + iVar7 + local_48;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  pPVar23._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar20 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x70);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar23._0_4_,(float)iVar3,fVar20,fVar21,uVar12,param_1,auStack_30,1,0,
             (Insets *)local_18,0);
  FUN_05476c50(auStack_30);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  FUN_05477b24((Insets *)local_18,this + 0x70);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_20,uVar12,(Insets *)local_18,&local_4c,&local_48);
  FUN_05476c50((Insets *)local_18);
  iVar7 = FUN_03ea4354(5);
  iVar3 = iVar3 + iVar7 + local_48;
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar4 = local_28;
  iVar8 = FUN_03ea4354(0);
  iVar7 = local_20 + iVar8 * 2;
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  Sexy::Graphics::DrawImage(param_1,pIVar13,iVar4 - iVar8,iVar3,iVar7,iVar9);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar4 = FUN_03ea4354(0x14);
  iVar3 = iVar3 + iVar7 + iVar4;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)local_18,this + 0xc0);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_20,uVar12,(Insets *)local_18,&local_4c,&local_48);
  FUN_05476c50((Insets *)local_18);
  iVar4 = local_4c;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)local_18,this + 200);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_20,uVar12,(Insets *)local_18,&local_4c,&local_48);
  FUN_05476c50((Insets *)local_18);
  iVar8 = local_4c;
  iVar10 = FUN_03ea4354(0xb);
  iVar9 = local_20;
  iVar7 = local_28;
  bVar2 = std::operator!=((wstring *)(this + 0xb8),L"");
  if (bVar2) {
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    iVar8 = local_20;
    iVar5 = local_28;
    iVar6 = Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_30,(wstring *)(this + 0xb8));
    Sexy::Color::Color((Color *)local_18,2);
    uVar19 = 1;
  }
  else {
    iVar7 = iVar7 + (iVar9 / 2 - (iVar4 + iVar8 + iVar10 * 2) / 2);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    fVar21 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    fVar20 = (float)local_20;
    FUN_05477b24(auStack_30,this + 0xc0);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Cost);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)iVar7,(float)iVar3,fVar20,fVar21,uVar12,param_1,auStack_30,
               bVar2,bVar2,(Insets *)local_18,0);
    FUN_05476c50(auStack_30);
    if (*(long *)(this + 0x68) != 0) {
      Sexy::Graphics::PushState(param_1);
      iVar8 = FUN_03ea4354(0xb);
      iVar9 = FUN_03ea4354(bVar2);
      iVar10 = FUN_03ea4354(0x10);
      Sexy::Graphics::Translate
                (param_1,(int)(float)(((iVar7 + iVar4 + iVar8) - iVar5 / 2) + iVar9),
                 (int)(float)((iVar3 - iVar6 / 2) + iVar10));
      Sexy::PopAnim::Draw(*(PopAnim **)(this + 0x68),param_1);
      Sexy::Graphics::PopState(param_1);
    }
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    iVar5 = FUN_03ea4354(0);
    iVar9 = FUN_03ea4354(0xb);
    iVar8 = local_20;
    iVar6 = Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_30,this + 200);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Cost);
    uVar19 = 0;
    iVar5 = iVar5 + iVar7 + iVar4 + iVar9 * 2;
  }
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar5,(float)iVar3,(float)iVar8,(float)iVar6,uVar12,param_1,
             auStack_30,uVar19,0,(Insets *)local_18,0);
  FUN_05476c50(auStack_30);
  iVar5 = local_48 + 0x19;
  iVar6 = FUN_03ea4354(3);
  iVar6 = iVar5 + iVar3 + iVar6;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_05477b24((Insets *)local_18,this + 0x78);
  iVar5 = local_20;
  iVar7 = FUN_03ea4354(10);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(iVar5 - iVar7),uVar12,(Insets *)local_18,&local_4c,&local_44);
  FUN_05476c50((Insets *)local_18);
  if (this[0x88] == (MapPopupDialog)0x0) {
    pCVar15 = (CachedUIResourcePtr *)&DAT_06ae0f30;
  }
  else {
    pCVar15 = (CachedUIResourcePtr *)&DAT_06ae0f08;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar15);
  if (this[0x88] == (MapPopupDialog)0x0) {
    pCVar15 = (CachedUIResourcePtr *)&DAT_06ae0da8;
  }
  else {
    pCVar15 = (CachedUIResourcePtr *)&DAT_06ae0ed8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar15);
  iVar5 = iVar6 + 10;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  iVar7 = FUN_03ea4354(10);
  Sexy::Insets::Insets
            ((Insets *)local_18,local_28,iVar6,local_20,
             *(int *)(lVar18 + 0x3c) + iVar7 * 2 + local_44);
  uVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0fd8);
  Draw9SliceImage(param_1,(Insets *)local_18,uVar19);
  uVar19 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  iVar6 = FUN_03ea4354(10);
  fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x78);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Reward);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(local_28 + iVar6),(float)iVar5,(float)(local_20 - iVar6),
             fVar20,uVar19,param_1,auStack_30,1,0,(Insets *)local_18,0);
  FUN_05476c50(auStack_30);
  iVar5 = iVar5 + local_44 + 3;
  Sexy::TRect<int>::GetCenter();
  iVar6 = FUN_03ea4354(0x8c);
  lVar18 = *(long *)(this + 0x10);
  iVar6 = local_18[0] - iVar6 / 2;
  *(int *)(lVar18 + 0x4c) = iVar5;
  *(int *)(lVar18 + 0x48) = iVar6;
  uVar11 = FUN_03ea4354(0x8c);
  *(undefined4 *)(lVar18 + 0x50) = uVar11;
  pSVar14 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
  MVar1 = this[0x1e4];
  *(undefined4 *)(lVar18 + 0x54) = uVar11;
  if (MVar1 == (MapPopupDialog)0x0) {
    iVar7 = FUN_03ea4354(0x8c);
    Sexy::Insets::Insets
              ((Insets *)local_18,iVar6,iVar5,iVar7,*(int *)(*(long *)(this + 0x10) + 0x54));
    this_00 = aRStack_40;
  }
  else {
    iVar7 = FUN_03ea4354(0x8c);
    Sexy::Insets::Insets
              ((Insets *)local_18,iVar6,iVar5,iVar7,*(int *)(*(long *)(this + 0x10) + 0x54));
    this_00 = aRStack_38;
  }
  pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  Draw3SliceImage(param_1,(Insets *)local_18,pRVar16);
  FUN_05477b24((Insets *)local_18,*(long *)(this + 0x10) + 0xd8);
  iVar7 = FUN_03ea4354(0x8c);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)iVar7,uVar12,(Insets *)local_18,&local_4c,&local_48);
  FUN_05476c50((Insets *)local_18);
  if (this[0x88] == (MapPopupDialog)0x0) {
    iVar7 = FUN_03ea4354(0x8c);
    iVar6 = iVar6 + (iVar7 - local_4c) / 2;
  }
  else {
    iVar7 = FUN_03ea4354(0x8c);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0e20);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0e20);
    iVar6 = iVar6 + ((iVar7 - local_4c) - iVar3) / 2;
    iVar7 = *(int *)(*(long *)(this + 0x10) + 0x54);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0e20);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar6,iVar5 + (iVar7 - iVar3) / 2);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0e20);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar3 = FUN_03ea4354(2);
    iVar6 = iVar6 + iVar7 + iVar3;
    iVar7 = FUN_03ea4354(0x8c);
  }
  iVar3 = *(int *)(*(long *)(this + 0x10) + 0x54);
  fVar20 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,*(long *)(this + 0x10) + 0xd8);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar6,(float)((iVar5 + iVar3 / 2) - local_48 / 2),(float)iVar7,
             fVar20,uVar12,param_1,auStack_30,0,0,(Insets *)local_18,0);
  FUN_05476c50(auStack_30);
  if (*(long *)(this + 0x68) != 0) {
    *(float *)(*(long *)(this + 0x68) + 0x28) = fVar22;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsDesc(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsDesc(MapPopupDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  SalesProgressBar *pSVar8;
  PrimeTypeface *pPVar11;
  float fVar9;
  float fVar10;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03ea4354(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar1 + *(int *)(this + 0x24),iVar1 + *(int *)(this + 0x28),
             *(int *)(this + 0x2c) + iVar1 * -2,
             *(int *)(*(long *)(this + 0x10) + 0x4c) - *(int *)(this + 0x28));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  pPVar11._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar9 = (float)local_20;
  fVar10 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11._0_4_,(float)local_24,fVar9,fVar10,uVar6,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(aIStack_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar6,aIStack_18,auStack_40,&local_3c);
  FUN_05476c50(aIStack_18);
  iVar1 = FUN_03ea4354(3);
  iVar1 = local_24 + iVar1 + local_3c;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar5 = local_28;
  iVar2 = FUN_03ea4354(0);
  iVar4 = local_20 + iVar2 * 2;
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 - iVar2,iVar1,iVar4,iVar3);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar5 = FUN_03ea4354(10);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(aIStack_18,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar6,aIStack_18,auStack_38,auStack_34);
  FUN_05476c50(aIStack_18);
  iVar2 = FUN_03ea4354(0xc);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar9 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)local_28,(float)(iVar1 + iVar4 + iVar5 + iVar2),(float)local_20
             ,fVar9,uVar6,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::drawContentsRewardInfo(Sexy::Graphics*) */

void __thiscall MapPopupDialog::drawContentsRewardInfo(MapPopupDialog *this,Graphics *param_1)

{
  wstring *pwVar1;
  MapPopupDialog MVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  Image *pIVar12;
  SalesProgressBar *pSVar13;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar14;
  PrimeTypeface *pPVar17;
  float fVar15;
  float fVar16;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03ea4354(0xf);
  pwVar1 = (wstring *)(this + 0xa0);
  iVar6 = *(int *)(this + 0x28);
  iVar8 = *(int *)(this + 0x24);
  iVar7 = *(int *)(this + 0x2c);
  iVar5 = FUN_03ea4354(0x1e);
  Sexy::Insets::Insets
            ((Insets *)&local_28,iVar4 + iVar8,iVar4 + iVar6,iVar7 + iVar4 * -2,
             (*(int *)(*(long *)(this + 0x10) + 0x4c) - iVar5) - iVar6);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  pPVar17._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar15 = (float)local_20;
  fVar16 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  FUN_05477b24(auStack_30,this + 0x90);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Header);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar17._0_4_,(float)local_24,fVar15,fVar16,uVar11,param_1,auStack_30,1,0,aIStack_18,0)
  ;
  FUN_05476c50(auStack_30);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  FUN_05477b24(aIStack_18,this + 0x90);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar11,aIStack_18,auStack_40,&local_3c);
  FUN_05476c50(aIStack_18);
  iVar6 = FUN_03ea4354(3);
  iVar6 = local_24 + iVar6 + local_3c;
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar7 = local_28;
  iVar4 = FUN_03ea4354(0);
  iVar8 = local_20 + iVar4 * 2;
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar7 - iVar4,iVar6,iVar8,iVar5);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f60);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar4 = FUN_03ea4354(10);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(aIStack_18,this + 0x98);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar11,aIStack_18,auStack_38,&local_34);
  FUN_05476c50(aIStack_18);
  iVar8 = FUN_03ea4354(0xc);
  iVar8 = iVar6 + iVar7 + iVar4 + iVar8;
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  pPVar17._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar16 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar15 = (float)local_20;
  FUN_05477b24(auStack_30,this + 0x98);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Desc);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar17._0_4_,(float)iVar8,fVar15,fVar16,uVar11,param_1,auStack_30,1,0,aIStack_18,0);
  FUN_05476c50(auStack_30);
  bVar3 = std::operator!=(pwVar1,L"");
  if (bVar3) {
    iVar8 = iVar8 + local_34;
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    FUN_05477b24(aIStack_18,pwVar1);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)local_20,uVar11,aIStack_18,auStack_38,&local_34);
    FUN_05476c50(aIStack_18);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    pPVar17._0_4_ = (PrimeTypeface *)(float)local_28;
    fVar16 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    fVar15 = (float)local_20;
    FUN_05477b24(auStack_30,pwVar1);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xa8));
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar17._0_4_,(float)iVar8,fVar15,fVar16,uVar11,param_1,auStack_30,1,0,aIStack_18,0);
    FUN_05476c50(auStack_30);
  }
  iVar6 = FUN_03ea4354(0xf);
  lVar14 = *(long *)(this + 0x10);
  if (*(char *)(lVar14 + 0x6c) != '\0') {
    iVar8 = iVar8 + iVar6 + local_34;
    iVar6 = FUN_03ea4354(0xa0);
    *(int *)(lVar14 + 0x4c) = iVar8;
    iVar6 = (local_28 + local_20 / 2) - iVar6 / 2;
    *(int *)(lVar14 + 0x48) = iVar6;
    uVar9 = FUN_03ea4354(0xa0);
    MVar2 = this[0x1e4];
    *(undefined4 *)(lVar14 + 0x50) = uVar9;
    if (MVar2 == (MapPopupDialog)0x0) {
      iVar7 = FUN_03ea4354(0xa0);
      Sexy::Insets::Insets(aIStack_18,iVar6,iVar8,iVar7,*(int *)(lVar14 + 0x54));
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f30;
    }
    else {
      iVar7 = FUN_03ea4354(0xa0);
      Sexy::Insets::Insets(aIStack_18,iVar6,iVar8,iVar7,*(int *)(lVar14 + 0x54));
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0da8;
    }
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Draw3SliceImage(param_1,aIStack_18,uVar11);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    FUN_05477b24(aIStack_18,*(long *)(this + 0x10) + 0xd8);
    iVar7 = FUN_03ea4354(0xa0);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)iVar7,uVar11,aIStack_18,auStack_40,&local_3c);
    FUN_05476c50(aIStack_18);
    iVar4 = FUN_03ea4354(6);
    iVar5 = FUN_03ea4354(4);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    iVar10 = FUN_03ea4354(0xa0);
    iVar7 = *(int *)(*(long *)(this + 0x10) + 0x54);
    FUN_05477b24(auStack_30,*(long *)(this + 0x10) + 0xd8);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Popover_Btn_Label);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)(iVar6 + iVar4),(float)(iVar8 + iVar5),
               (float)(iVar10 + iVar4 * -2),(float)(iVar7 + iVar5 * -2),uVar11,param_1,auStack_30,1,
               1,aIStack_18,0);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::Draw(Sexy::Graphics*) */

void __thiscall MapPopupDialog::Draw(MapPopupDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] != (MapPopupDialog)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0x24),*(int *)(this + 0x28),*(int *)(this + 0x2c),
               *(int *)(this + 0x30));
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0df8);
    Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_18,pIVar6);
    if (*(int *)(this + 0x18) != 3) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0eb0);
      iVar1 = *(int *)(this + 0x44);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0eb0);
      iVar2 = *(int *)(lVar7 + 0x38);
      iVar3 = *(int *)(this + 0x48);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0eb0);
      iVar4 = *(int *)(lVar7 + 0x3c);
      fVar9 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x4c));
      Sexy::Graphics::DrawImageRotated
                (param_1,pIVar6,iVar1 - iVar2 / 2,iVar3 - iVar4 / 2,(double)fVar9,(TRect *)0x0);
    }
    switch(*(undefined4 *)(this + 0x54)) {
    case 0:
      drawContentsKeygatePurchase(this,param_1);
      break;
    case 1:
      drawContentsKeygateCleared(this,param_1);
      break;
    case 2:
      drawContentsStargatePurchase(this,param_1);
      break;
    case 3:
      drawContentsStargatePreview(this,param_1);
      break;
    case 4:
      drawContentsRewardInfo(this,param_1);
      break;
    case 6:
      drawContentsDesc(this,param_1);
    }
    lVar7 = *(long *)(this + 0xf0);
    if (*(char *)(lVar7 + 0x6c) != '\0') {
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(lVar7 + 0x48),*(int *)(lVar7 + 0x4c),*(int *)(lVar7 + 0x50),
                 *(int *)(lVar7 + 0x54));
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f30);
      Draw3SliceImage(param_1,aIStack_18,uVar8);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar7 = *(long *)(this + 0xf0);
      iVar5 = FUN_03ea4354(2);
      iVar1 = *(int *)(lVar7 + 0x48);
      iVar2 = *(int *)(lVar7 + 0x4c);
      iVar3 = *(int *)(lVar7 + 0x50);
      iVar4 = *(int *)(lVar7 + 0x54);
      FUN_05477b24(auStack_20,lVar7 + 0xd8);
      Sexy::Color::Color((Color *)aIStack_18,1);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)(iVar5 + iVar1),(float)(iVar5 + iVar2),
                 (float)(iVar5 * -2 + iVar3),(float)(iVar5 * -2 + iVar4),uVar8,param_1,auStack_20,1,
                 1,aIStack_18,0);
      FUN_05476c50(auStack_20);
    }
    if ((*(int *)(this + 0x54) - 2U < 2) &&
       (lVar7 = *(long *)(this + 0x10), *(char *)(lVar7 + 0x6c) != '\0')) {
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(lVar7 + 0x48),*(int *)(lVar7 + 0x4c),*(int *)(lVar7 + 0x50),
                 *(int *)(lVar7 + 0x54));
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0f30);
      Draw3SliceImage(param_1,aIStack_18,uVar8);
      uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      lVar7 = *(long *)(this + 0x10);
      iVar5 = FUN_03ea4354(2);
      iVar1 = *(int *)(lVar7 + 0x48);
      iVar2 = *(int *)(lVar7 + 0x4c);
      iVar3 = *(int *)(lVar7 + 0x50);
      iVar4 = *(int *)(lVar7 + 0x54);
      FUN_05477b24(auStack_20,lVar7 + 0xd8);
      Sexy::Color::Color((Color *)aIStack_18,1);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)(float)(iVar5 + iVar1),(float)(iVar5 + iVar2),
                 (float)(iVar5 * -2 + iVar3),(float)(iVar5 * -2 + iVar4),uVar8,param_1,auStack_20,1,
                 1,aIStack_18,0);
      FUN_05476c50(auStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapPopupDialog::MapPopupDialog() */

void __thiscall MapPopupDialog::MapPopupDialog(MapPopupDialog *this)

{
  ButtonListener *this_00;
  undefined4 uVar1;
  ButtonWidget *pBVar2;
  ButtonListener *__n;
  undefined8 local_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  Renderable *local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 8);
  Renderable::Renderable((Renderable *)this,___stack_chk_guard);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR__MapPopupDialog_067920e0;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_06792130;
  Sexy::Point::Point((Point *)(this + 0x1c));
  Sexy::Point::Point((Point *)(this + 0x24));
  Sexy::Insets::Insets((Insets *)(this + 0x34));
  Sexy::Point::Point((Point *)(this + 0x44));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  FUN_05476574(this + 0x70);
  FUN_05476574(this + 0x78);
  FUN_05476574(this + 0x80);
  FUN_05476574(this + 0x90);
  FUN_05476574(this + 0x98);
  FUN_05476574(this + 0xa0);
  Sexy::Color::Color((Color *)(this + 0xa8));
  FUN_05476574(this + 0xb8);
  FUN_05476574(this + 0xc0);
  FUN_05476574(this + 200);
  FUN_05476574(this + 0xd0);
  Set8BytesTo0((string *)(this + 0xe0));
  Set8BytesTo0((string *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x110));
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)(this + 0x138));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1e8),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x218),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x248),(DummyInit *)0x0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x278));
  *(undefined4 *)(this + 0x18) = 0;
  Sexy::Point::Point((Point *)&local_48,0,0);
  *(undefined8 *)(this + 0x1c) = local_48;
  Sexy::Point::Point((Point *)&local_48,0,0);
  *(undefined8 *)(this + 0x24) = local_48;
  uVar1 = FUN_03ea4354(100);
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = FUN_03ea4354(100);
  *(undefined4 *)(this + 0x30) = uVar1;
  Sexy::Insets::Insets((Insets *)&local_48,0,0,100,100);
  *(undefined8 *)(this + 0x34) = local_48;
  *(undefined8 *)(this + 0x3c) = uStack_40;
  Sexy::Point::Point((Point *)&local_48,0,0);
  this[0x50] = (MapPopupDialog)0x0;
  *(undefined8 *)(this + 0x44) = local_48;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  *(undefined8 *)(this + 0x68) = 0;
  FUN_054772c4(this + 0x90,&DAT_056f11a8);
  FUN_054772c4(this + 0xb8,&DAT_056f11a8);
  FUN_054772c4(this + 0x98,&DAT_056f11a8);
  FUN_054772c4(this + 0xc0,&DAT_056f11a8);
  FUN_054772c4(this + 200,&DAT_056f11a8);
  FUN_054772c4(this + 0xd0,&DAT_056f11a8);
  this[0x88] = (MapPopupDialog)0x0;
  *(undefined4 *)(this + 0x1e0) = 1;
  pBVar2 = ::operator_new(0x198);
  Sexy::ButtonWidget::ButtonWidget(pBVar2,0,this_00);
  *(ButtonWidget **)(this + 0xd8) = pBVar2;
  pBVar2 = ::operator_new(0x198);
  __n = this_00;
  Sexy::ButtonWidget::ButtonWidget(pBVar2,1,this_00);
  *(ButtonWidget **)(this + 0x10) = pBVar2;
  std::string::append((string *)(this + 0xe0),"Play_UI_Menu_Button_General_Press",(size_t)__n);
  std::string::append((string *)(this + 0xe8),"Play_UI_Menu_Button_General_Release",(size_t)__n);
  pBVar2 = ::operator_new(0x198);
  Sexy::ButtonWidget::ButtonWidget(pBVar2,2,this_00);
  *(ButtonWidget **)(this + 0xf0) = pBVar2;
  this[0x1e4] = (MapPopupDialog)0x0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1e8),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x218),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x248),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapPopupDialog::~MapPopupDialog() */

void __thiscall MapPopupDialog::~MapPopupDialog(MapPopupDialog *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__MapPopupDialog_067920e0;
  *(undefined ***)(this + 8) = &PTR_ButtonPress_06792130;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  if (*(long **)(this + 0x10) == (long *)0x0) {
    plVar1 = *(long **)(this + 0xf0);
  }
  else {
    (**(code **)(**(long **)(this + 0x10) + 0x18))();
    *(undefined8 *)(this + 0x10) = 0;
    plVar1 = *(long **)(this + 0xf0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x278));
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)(this + 0x138));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x110));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xf8));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  FUN_05476c50(this + 0xd0);
  FUN_05476c50(this + 200);
  FUN_05476c50(this + 0xc0);
  FUN_05476c50(this + 0xb8);
  FUN_05476c50(this + 0xa0);
  FUN_05476c50(this + 0x98);
  FUN_05476c50(this + 0x90);
  FUN_05476c50(this + 0x80);
  FUN_05476c50(this + 0x78);
  FUN_05476c50(this + 0x70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  return;
}


/* MapPopupDialog::~MapPopupDialog() */

void __thiscall MapPopupDialog::~MapPopupDialog(MapPopupDialog *this)

{
  ~MapPopupDialog(this);
  AK::FreeHook(this);
  return;
}


/* MapPopupDialog::OnMouseDown(int, int) */

void MapPopupDialog::OnMouseDown(int param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  string *psVar3;
  long *plVar4;
  
  uVar2 = (ulong)(uint)param_1;
  plVar4 = *(long **)(uVar2 + 0x10);
  if ((*(char *)((long)plVar4 + 0x6c) != '\0') &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_2), cVar1 != '\0')) {
    *(undefined1 *)(uVar2 + 0x1e4) = 1;
    cVar1 = FUN_0547419c((void *)(uVar2 + 0xe0));
    if (cVar1 == '\0') {
      psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar3,(void *)(uVar2 + 0xe0));
      return;
    }
  }
  return;
}


/* MapPopupDialog::OnMouseUp(int, int) */

void __thiscall MapPopupDialog::OnMouseUp(MapPopupDialog *this,int param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  string *psVar3;
  
  plVar2 = *(long **)(this + 0xd8);
  cVar1 = *(char *)((long)plVar2 + 0x6c);
  this[0x1e4] = (MapPopupDialog)0x0;
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*plVar2 + 0x300))(plVar2,param_1,param_2), cVar1 != '\0')) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x248));
    WorldMapEventAlert::HideBadge((WorldMapEventAlert *)this);
    return;
  }
  plVar2 = *(long **)(this + 0x10);
  if ((*(char *)((long)plVar2 + 0x6c) != '\0') &&
     (cVar1 = (**(code **)(*plVar2 + 0x300))(plVar2,param_1,param_2), cVar1 != '\0')) {
    cVar1 = FUN_0547419c(this + 0xe8);
    if (cVar1 == '\0') {
      psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar3,this + 0xe8);
    }
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1e8));
    WorldMapEventAlert::HideBadge((WorldMapEventAlert *)this);
    return;
  }
  plVar2 = *(long **)(this + 0xf0);
  if ((*(char *)((long)plVar2 + 0x6c) != '\0') &&
     (cVar1 = (**(code **)(*plVar2 + 0x300))(plVar2,param_1,param_2), cVar1 != '\0')) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x218));
    WorldMapEventAlert::HideBadge((WorldMapEventAlert *)this);
    return;
  }
  return;
}


/* MapPopupDialog::SetDescriptionListData(std::vector<std::wstring, std::allocator<std::wstring > >
   const&, std::vector<bool, std::allocator<bool> > const&) */

void __thiscall
MapPopupDialog::SetDescriptionListData(MapPopupDialog *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  wstring *pwVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xf8));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x110))
  ;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_03ea4268(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) break;
    pwVar2 = (wstring *)FUN_03ea4274(uVar5,uVar4);
    std::vector<std::wstring,std::allocator<std::wstring>>::push_back
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0xf8),pwVar2);
    bVar1 = (bool)FUN_03ea42e4(*(undefined8 *)param_2,uVar4);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)(this + 0x110),bVar1);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* MapPopupDialog::SetPositionBounds(Sexy::TRect<int>) */

void __thiscall MapPopupDialog::SetPositionBounds(MapPopupDialog *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x34) = *param_2;
  *(undefined8 *)(this + 0x3c) = uVar1;
  (**(code **)(*(long *)this + 0x38))();
  return;
}


/* MapPopupDialog::SetHeight(int) */

void __thiscall MapPopupDialog::SetHeight(MapPopupDialog *this,int param_1)

{
  *(int *)(this + 0x30) = param_1;
  (**(code **)(*(long *)this + 0x38))();
  return;
}


/* MapPopupDialog::SetHeader(std::wstring const&) */

void MapPopupDialog::SetHeader(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x90);
  return;
}


/* MapPopupDialog::SetDescription(std::wstring const&) */

void MapPopupDialog::SetDescription(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x98);
  return;
}


/* MapPopupDialog::GetInfoObjectType() const */

RtWeakPtr<Sexy::SoundResource> * MapPopupDialog::GetInfoObjectType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x278));
  return in_x8;
}

