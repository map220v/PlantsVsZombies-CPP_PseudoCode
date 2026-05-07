// Class: AccessoryPiecesPackageItem


/* AccessoryPiecesPackageItem::TouchBegan(Sexy::Touch const&) */

void __thiscall
AccessoryPiecesPackageItem::TouchBegan(AccessoryPiecesPackageItem *this,Touch *param_1)

{
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  return;
}


/* AccessoryPiecesPackageItem::~AccessoryPiecesPackageItem() */

void __thiscall
AccessoryPiecesPackageItem::~AccessoryPiecesPackageItem(AccessoryPiecesPackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a4700;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessoryPiecesPackageItem::~AccessoryPiecesPackageItem() */

void __thiscall
AccessoryPiecesPackageItem::~AccessoryPiecesPackageItem(AccessoryPiecesPackageItem *this)

{
  ~AccessoryPiecesPackageItem(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryPiecesPackageItem::onNotifyAccessorySelectContent(std::string const&) */

void __thiscall
AccessoryPiecesPackageItem::onNotifyAccessorySelectContent
          (AccessoryPiecesPackageItem *this,string *param_1)

{
  char cVar1;
  long lVar2;
  UINewPlantView_AccessoryPackage *this_00;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  cVar1 = std::operator==(param_1,(string *)(lVar2 + 0x80));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectPieceItem(this_00,this);
  return;
}


/* AccessoryPiecesPackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall
AccessoryPiecesPackageItem::TouchEnded(AccessoryPiecesPackageItem *this,Touch *param_1)

{
  UINewPlantView_AccessoryPackage *this_00;
  
  if (*(long *)(this + 0xe0) != *(long *)param_1) {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectPieceItem(this_00,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPiecesPackageItem::Draw(Sexy::Graphics*) */

void __thiscall AccessoryPiecesPackageItem::Draw(AccessoryPiecesPackageItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x120) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x120),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pIVar4 = *(Image **)(this + 0x128);
  if (pIVar4 != (Image *)0x0) {
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
  }
  if (this[0x134] == (AccessoryPiecesPackageItem)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3090);
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x130));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_03814ff8(5);
  iVar2 = FUN_03814ff8(10);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (this[0x135] != (AccessoryPiecesPackageItem)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3620);
    iVar1 = FUN_03814ff8(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryPiecesPackageItem::Refresh() */

void __thiscall AccessoryPiecesPackageItem::Refresh(AccessoryPiecesPackageItem *this)

{
  AccessoryPiecesPackageItem AVar1;
  undefined4 uVar2;
  PlantAccessoryMgr *pPVar3;
  long lVar4;
  
  pPVar3 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  uVar2 = PlantAccessoryMgr::GetOwnedPieces(pPVar3,(string *)(lVar4 + 0x80));
  *(undefined4 *)(this + 0x130) = uVar2;
  pPVar3 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  AVar1 = (AccessoryPiecesPackageItem)
          PlantAccessoryMgr::IsAccessoryPiecesFull(pPVar3,(string *)(lVar4 + 0x80));
  this[0x134] = AVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPiecesPackageItem::InitView(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
AccessoryPiecesPackageItem::InitView(AccessoryPiecesPackageItem *this,RtWeakPtr *param_2)

{
  PlantAccessoryMgr *this_00;
  long lVar1;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  undefined8 uVar2;
  string *psVar3;
  TGAAccumulatedLoginData aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),param_2);
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)(lVar1 + 0x80));
  AccessoryUIInfo::operator=((AccessoryUIInfo *)(this + 0xe8),(AccessoryUIInfo *)aTStack_40);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
  this_01 = (CachedUIResourcePtr<Sexy::Image> *)FUN_038131c8(*(undefined4 *)(this + 0x108));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  *(undefined8 *)(this + 0x120) = uVar2;
  psVar3 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  PlantAccessoryMgr::GetAccessoryPieceDisplayImage(psVar3);
  uVar2 = StringHelper::ToImage((string *)aTStack_40,false);
  *(undefined8 *)(this + 0x128) = uVar2;
  std::string::~string((string *)aTStack_40);
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryPiecesPackageItem::AccessoryPiecesPackageItem() */

void __thiscall
AccessoryPiecesPackageItem::AccessoryPiecesPackageItem(AccessoryPiecesPackageItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066a4700;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0xe8));
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  this[0x134] = (AccessoryPiecesPackageItem)0x0;
  this[0x135] = (AccessoryPiecesPackageItem)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAccessorySelectContent);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AccessoryPiecesPackageItem,void(AccessoryPiecesPackageItem::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_NotifyAccessorySelectContent,&local_40);
  return;
}

