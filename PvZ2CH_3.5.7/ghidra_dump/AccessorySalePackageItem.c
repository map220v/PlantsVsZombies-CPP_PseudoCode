// Class: AccessorySalePackageItem


/* AccessorySalePackageItem::AccessorySalePackageItem() */

void __thiscall AccessorySalePackageItem::AccessorySalePackageItem(AccessorySalePackageItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066a4a20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  PlantAccessoryInfo::PlantAccessoryInfo((PlantAccessoryInfo *)(this + 0xe0));
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0x100));
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x158] = (AccessorySalePackageItem)0x0;
  this[0x159] = (AccessorySalePackageItem)0x0;
  return;
}


/* AccessorySalePackageItem::~AccessorySalePackageItem() */

void __thiscall AccessorySalePackageItem::~AccessorySalePackageItem(AccessorySalePackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a4a20;
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x100));
  PakRecord::~PakRecord((PakRecord *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessorySalePackageItem::~AccessorySalePackageItem() */

void __thiscall AccessorySalePackageItem::~AccessorySalePackageItem(AccessorySalePackageItem *this)

{
  ~AccessorySalePackageItem(this);
  AK::FreeHook(this);
  return;
}


/* AccessorySalePackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall AccessorySalePackageItem::TouchEnded(AccessorySalePackageItem *this,Touch *param_1)

{
  UINewPlantView_AccessoryPackage *this_00;
  
  if (*(long *)(this + 0x150) != *(long *)param_1) {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectSaleItem(this_00,this);
  return;
}


/* AccessorySalePackageItem::Draw(Sexy::Graphics*) */

void __thiscall AccessorySalePackageItem::Draw(AccessorySalePackageItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  
  if (*(Image **)(this + 0x138) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x138),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pIVar5 = *(Image **)(this + 0x140);
  if (pIVar5 != (Image *)0x0) {
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
  }
  pIVar5 = *(Image **)(this + 0x148);
  if (pIVar5 != (Image *)0x0) {
    iVar1 = FUN_03814ff8(0x28);
    iVar2 = FUN_03814ff8(5);
    iVar3 = FUN_03814ff8(0xf);
    iVar4 = FUN_03814ff8(0x16);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  if (this[0x159] == (AccessorySalePackageItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab30b8);
    iVar1 = FUN_03814ff8(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0x158] == (AccessorySalePackageItem)0x0) {
    return;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3620);
  iVar1 = FUN_03814ff8(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySalePackageItem::InitView(int, PlantAccessoryInfo const&) */

void __thiscall
AccessorySalePackageItem::InitView
          (AccessorySalePackageItem *this,int param_1,PlantAccessoryInfo *param_2)

{
  long lVar1;
  string *psVar2;
  PlantAccessoryMgr *this_00;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryByType(psVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xe0),param_2);
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)(param_2 + 8));
  AccessoryUIInfo::operator=((AccessoryUIInfo *)(this + 0x100),(AccessoryUIInfo *)aRStack_40);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aRStack_40);
  this_01 = (CachedUIResourcePtr<Sexy::Image> *)FUN_038131c8(*(undefined4 *)(this + 0x120));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  *(undefined8 *)(this + 0x138) = uVar3;
  uVar3 = StringHelper::ToImage((string *)(this + 0x118),false);
  *(undefined8 *)(this + 0x140) = uVar3;
  uVar3 = FUN_03813708(*(undefined4 *)(this + 0xf8));
  *(undefined8 *)(this + 0x148) = uVar3;
  lVar1 = ___stack_chk_guard;
  this[0x159] = (AccessorySalePackageItem)(*(int *)(this + 0xe0) < 1);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

