// Class: PlantGeneItem


/* PlantGeneItem::OnGeneLevelUpSuccess(int, int) */

void __thiscall PlantGeneItem::OnGeneLevelUpSuccess(PlantGeneItem *this,int param_1,int param_2)

{
  PlantGeneItem PVar1;
  long lVar2;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  if (*(int *)(lVar2 + 0x10) != param_1) {
    return;
  }
  *(int *)(this + 0xf8) = param_2;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  PVar1 = (PlantGeneItem)GeneEnhancement::CanGeneUpgrade(*(int *)(lVar2 + 0x10));
  this[0xfc] = PVar1;
  return;
}


/* PlantGeneItem::GetGeneID() */

undefined4 __thiscall PlantGeneItem::GetGeneID(PlantGeneItem *this)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  return *(undefined4 *)(lVar1 + 0x10);
}


/* PlantGeneItem::~PlantGeneItem() */

void __thiscall PlantGeneItem::~PlantGeneItem(PlantGeneItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669f4d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantGeneItem::~PlantGeneItem() */

void __thiscall PlantGeneItem::~PlantGeneItem(PlantGeneItem *this)

{
  ~PlantGeneItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneItem::InitView(Sexy::RtWeakPtr<PlantGene>, int) */

void __thiscall PlantGeneItem::InitView(PlantGeneItem *this,RtWeakPtr *param_2,undefined4 param_3)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  PlantGeneItem PVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x100);
  this[0x59] = (PlantGeneItem)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  uVar9 = 1;
  uVar8 = 0;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar3 = GeneEnhancement::GetGeneLevel(*(int *)(lVar4 + 0x10));
  *(undefined4 *)(this + 0xf8) = uVar3;
  std::string::string(asStack_10,"FRAME");
  uVar5 = FUN_03802028(param_3,asStack_10);
  *(undefined8 *)(this + 0xd8) = uVar5;
  std::string::~string(asStack_10);
  nop();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  auVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x18));
  Sexy::StringToUpper((Sexy *)(auVar10._0_8_ + 8),auVar10._8_8_);
  std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",asStack_18);
  uVar5 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe0) = uVar5;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_10,"SUB");
  uVar5 = FUN_03802028(param_3,asStack_10);
  *(undefined8 *)(this + 0xe8) = uVar5;
  std::string::~string(asStack_10);
  nop();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PVar2 = (PlantGeneItem)GeneEnhancement::CanGeneUpgrade(*(int *)(lVar4 + 0x10));
  this[0xfc] = PVar2;
  while( true ) {
    lVar4 = LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    uVar5 = *(undefined8 *)(lVar4 + 0x160);
    uVar6 = FUN_037fe598(uVar5,*(undefined8 *)(lVar4 + 0x168));
    if (uVar6 <= uVar8) break;
    piVar7 = (int *)FUN_037fe9b8(uVar5,uVar8);
    iVar1 = *piVar7;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if ((iVar1 == *(int *)(lVar4 + 0x10)) && ((int)uVar8 < 10)) {
      Sexy::StrFormat("IMAGE_UI_PLANTGENE_RANK_%d",asStack_10,(ulong)uVar9);
      uVar5 = StringHelper::ToImage(asStack_10,false);
      *(undefined8 *)(this + 0xf0) = uVar5;
      std::string::~string(asStack_10);
    }
    uVar8 = uVar8 + 1;
    uVar9 = uVar9 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneItem::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantGeneItem::TouchEnded(PlantGeneItem *this,Touch *param_1)

{
  char cVar1;
  UIPlantGeneLevelUpView *this_00;
  PlantGeneEnhancementView *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    this_00 = (UIPlantGeneLevelUpView *)UISingletonDialog<UIPlantGeneLevelUpView>::ShowDialog();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x100));
    UIPlantGeneLevelUpView::LoadData(this_00,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this_01 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    cVar1 = PlantGeneEnhancementView::IsOnToturial(this_01);
    if (cVar1 != '\0') {
      UIPlantGeneLevelUpView::StartToturial(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneItem::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneItem::Draw(PlantGeneItem *this,Graphics *param_1)

{
  PlantGeneItem PVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  float fVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0xd8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xd8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x50));
  }
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x50));
    DrawAdaptiveInInscribedCircleImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  pIVar7 = *(Image **)(this + 0xe8);
  if (pIVar7 != (Image *)0x0) {
    iVar2 = FUN_03800484(0);
    iVar3 = FUN_03800484(0xc);
    iVar5 = *(int *)(this + 0x54);
    iVar4 = FUN_03800484(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar5 / 2 - iVar3,iVar4,iVar4);
  }
  if (*(int *)(this + 0xf8) == 0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2a90);
    Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x50));
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2d40);
    iVar2 = FUN_03800484(0);
    iVar3 = FUN_03800484(0xc);
    iVar5 = *(int *)(this + 0x54);
    iVar4 = FUN_03800484(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,iVar5 / 2 - iVar3,iVar4,iVar4);
    PVar1 = this[0xfc];
  }
  else {
    iVar5 = *(int *)(this + 0x50);
    fVar8 = (float)*(int *)(this + 0xf8) * 0.1;
    iVar2 = FUN_03800484(5);
    iVar3 = FUN_03800484(0x10);
    Sexy::Insets::Insets(aIStack_18,0,iVar5 + iVar2,iVar5,iVar3);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab25d0);
    Draw3SliceImage(param_1,aIStack_18,uVar6);
    if (fVar8 < 0.3) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab28b0);
      iVar5 = *(int *)(this + 0x50);
      iVar2 = FUN_03800484(5);
      iVar3 = FUN_03800484(0x10);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,iVar5 + iVar2,(int)(fVar8 * (float)iVar5),iVar3);
    }
    else {
      iVar5 = *(int *)(this + 0x50);
      iVar2 = FUN_03800484(5);
      iVar3 = FUN_03800484(0x10);
      Sexy::Insets::Insets(aIStack_18,0,iVar5 + iVar2,(int)(fVar8 * (float)iVar5),iVar3);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab28b0);
      Draw3SliceImage(param_1,aIStack_18,uVar6);
    }
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf8));
    std::operator+("Lv.",asStack_40);
    Sexy::ToWString(asStack_38);
    iVar5 = *(int *)(this + 0x50);
    iVar2 = FUN_03800484(0x18);
    iVar3 = FUN_03800484(0x14);
    Sexy::Insets::Insets(aIStack_28,0,iVar5 + iVar2,iVar5,iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    PVar1 = this[0xfc];
  }
  if (PVar1 != (PlantGeneItem)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2cc8);
    iVar5 = FUN_03800484(0x46);
    iVar2 = FUN_03800484(0x14);
    iVar3 = FUN_03800484(0x35);
    iVar4 = FUN_03800484(0x3c);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5,-iVar2,iVar3,iVar4);
  }
  pIVar7 = *(Image **)(this + 0xf0);
  if (pIVar7 != (Image *)0x0) {
    iVar5 = FUN_03800484(0x14);
    iVar2 = FUN_03800484(0x32);
    iVar3 = FUN_03800484(0x3e);
    Sexy::Graphics::DrawImage(param_1,pIVar7,-iVar5,-iVar5,iVar2,iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantGeneItem::PlantGeneItem() */

void __thiscall PlantGeneItem::PlantGeneItem(PlantGeneItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0669f4d0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xfc] = (PlantGeneItem)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGeneLevelUpSuccess);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PlantGeneItem,void(PlantGeneItem::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GeneLevelUpSuccess,&local_40);
  return;
}

