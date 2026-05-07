// Class: StatementContent


/* StatementContent::~StatementContent() */

void __thiscall StatementContent::~StatementContent(StatementContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06842940;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0xf0));
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* StatementContent::~StatementContent() */

void __thiscall StatementContent::~StatementContent(StatementContent *this)

{
  ~StatementContent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatementContent::StatementContent(StatementData) */

void __thiscall StatementContent::StatementContent(StatementContent *this,undefined8 *param_2)

{
  StatementContent *pSVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  pSVar1 = this + 0xd8;
  *(undefined ***)this = &PTR_GetClass_06842940;
  FUN_05476574(pSVar1);
  Set8BytesTo0(this + 0xf0);
  if (*(int *)(param_2 + 1) < 1) {
    FUN_054772c4(pSVar1,&DAT_056f11a8);
  }
  else {
    Sexy::StrFormat(L"%d",auStack_10);
    FUN_054766c8(pSVar1,auStack_10);
    FUN_05476c50(auStack_10);
  }
  this[0xe8] = *(StatementContent *)((long)param_2 + 0xc);
  *(undefined8 *)(this + 0xe0) = *param_2;
  thunk_FUN_05475e00(this + 0xf0,param_2 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StatementContent::Draw(Sexy::Graphics*) */

void __thiscall StatementContent::Draw(StatementContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  Image *pIVar12;
  long lVar13;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0xe0) != 0) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
    iVar10 = FUN_043b7974(0);
    Sexy::Graphics::DrawImage(param_1,pIVar12,iVar10,iVar10);
    if (this[0xe8] == (StatementContent)0x0) {
      cVar8 = FUN_0547419c((string *)(this + 0xf0));
      if (cVar8 == '\0') {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
        iVar10 = FUN_043b7974(3);
        iVar11 = *(int *)(lVar13 + 0x38) + iVar10 * -2;
        iVar10 = FUN_043b7974(0);
        iVar10 = iVar10 + (*(int *)(this + 0x50) - iVar11) / 2;
        this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        this_01 = (RtWeakPtr *)
                  SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xf0));
        fVar16 = (float)iVar11;
        iVar11 = *(int *)(this_01 + 0x28);
        iVar1 = *(int *)(this_01 + 0x2c);
        iVar2 = *(int *)(this_01 + 0x30);
        iVar3 = *(int *)(this_01 + 0x34);
        iVar4 = *(int *)(this_01 + 0x18);
        iVar5 = *(int *)(this_01 + 0x1c);
        fVar17 = fVar16 / (float)iVar11;
        iVar6 = *(int *)(this_01 + 0x10);
        iVar7 = *(int *)(this_01 + 0x14);
        fVar16 = fVar16 / (float)iVar1;
        pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
        Sexy::Insets::Insets
                  (aIStack_18,iVar10 + (int)(fVar17 * (float)iVar2),
                   iVar10 + (int)(fVar16 * (float)iVar3),(int)(fVar17 * (float)iVar11),
                   (int)(fVar16 * (float)iVar1));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar14,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20));
        bVar9 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar9) {
          lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0x48));
          Sexy::Insets::Insets
                    (aIStack_18,iVar10 + (int)(fVar17 * (float)iVar4),
                     iVar10 + (int)(fVar16 * (float)iVar5),(int)(fVar17 * (float)iVar6),
                     (int)(fVar16 * (float)iVar7));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar14,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
        }
      }
      else {
        lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03170);
        iVar10 = FUN_043b7974(3);
        iVar11 = *(int *)(lVar13 + 0x38) + iVar10 * -2;
        iVar10 = FUN_043b7974(0);
        iVar10 = iVar10 + (*(int *)(this + 0x50) - iVar11) / 2;
        Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe0),iVar10,iVar10,iVar11,iVar11);
      }
    }
    else {
      iVar10 = FUN_043b7974(0);
      iVar10 = iVar10 + (*(int *)(this + 0x50) - *(int *)(*(Image **)(this + 0xe0) + 0x38)) / 2;
      Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe0),iVar10,iVar10);
    }
  }
  iVar10 = FUN_043b7974(0);
  iVar11 = FUN_043b7974(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,iVar10,*(int *)(this + 0x54) - iVar11,*(int *)(this + 0x50),iVar11);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar15,(Color *)aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

