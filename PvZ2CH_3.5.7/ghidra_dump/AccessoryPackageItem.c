// Class: AccessoryPackageItem


/* AccessoryPackageItem::~AccessoryPackageItem() */

void __thiscall AccessoryPackageItem::~AccessoryPackageItem(AccessoryPackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a43e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  PakRecord::~PakRecord((PakRecord *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessoryPackageItem::~AccessoryPackageItem() */

void __thiscall AccessoryPackageItem::~AccessoryPackageItem(AccessoryPackageItem *this)

{
  ~AccessoryPackageItem(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryPackageItem::Draw(Sexy::Graphics*) */

void __thiscall AccessoryPackageItem::Draw(AccessoryPackageItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar5;
  
  if (*(Image **)(this + 0x140) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x140),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pIVar5 = *(Image **)(this + 0x148);
  if (pIVar5 != (Image *)0x0) {
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
  }
  pIVar5 = *(Image **)(this + 0x150);
  if (pIVar5 != (Image *)0x0) {
    iVar1 = FUN_03814ff8(0x28);
    iVar2 = FUN_03814ff8(5);
    iVar3 = FUN_03814ff8(0xf);
    iVar4 = FUN_03814ff8(0x16);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  if (*(int *)(this + 0x164) == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2ee8;
  }
  else {
    if (*(int *)(this + 0x164) != 2) goto LAB_0381ac24;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3258;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_03814ff8(5);
  iVar2 = FUN_03814ff8(10);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2 - iVar2);
LAB_0381ac24:
  if (this[0x161] != (AccessoryPackageItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab30b8);
    iVar1 = FUN_03814ff8(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0x160] == (AccessoryPackageItem)0x0) {
    return;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3620);
  iVar1 = FUN_03814ff8(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* AccessoryPackageItem::AccessoryPackageItem() */

void __thiscall AccessoryPackageItem::AccessoryPackageItem(AccessoryPackageItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066a43e0;
  PlantAccessoryInfo::PlantAccessoryInfo((PlantAccessoryInfo *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0x108));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x160] = (AccessoryPackageItem)0x0;
  this[0x161] = (AccessoryPackageItem)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAccessorySelectContent);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AccessoryPackageItem,void(AccessoryPackageItem::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NewPlantView_NotifyAccessorySelectContent,&local_40);
  return;
}


/* AccessoryPackageItem::onNotifyAccessorySelectContent(std::string const&) */

void __thiscall
AccessoryPackageItem::onNotifyAccessorySelectContent(AccessoryPackageItem *this,string *param_1)

{
  char cVar1;
  UINewPlantView_AccessoryPackage *this_00;
  
  cVar1 = std::operator==(param_1,(string *)(this + 0xe0));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectAccessoryItem(this_00,this);
  return;
}


/* AccessoryPackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall AccessoryPackageItem::TouchEnded(AccessoryPackageItem *this,Touch *param_1)

{
  UINewPlantView_AccessoryPackage *this_00;
  
  if (*(long *)(this + 0x158) != *(long *)param_1) {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectAccessoryItem(this_00,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPackageItem::Refresh() */

void __thiscall AccessoryPackageItem::Refresh(AccessoryPackageItem *this)

{
  int iVar1;
  AccessoryPackageItem AVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  NameMapperBase *this_02;
  vector *pvVar5;
  ulong uVar6;
  PlantAccessoryInfo *pPVar7;
  undefined8 uVar8;
  string *psVar9;
  ulong uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
  iVar3 = NameMapperBase::GetIdForName(this_02,(string *)(lVar4 + 0x1d8));
  pvVar5 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20,pvVar5);
  iVar1 = *(int *)(this + 0xf8);
  uVar6 = FUN_03813c10(local_20,local_18);
  if ((ulong)(long)iVar1 < uVar6) {
    pPVar7 = (PlantAccessoryInfo *)FUN_03813c1c(local_20,(long)iVar1);
    PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xd8),pPVar7);
    iVar1 = *(int *)(this + 0xd8);
  }
  else {
    if (uVar6 != 0) {
      lVar4 = *(long *)(this + 0xe8);
      uVar10 = 0;
      do {
        pPVar7 = (PlantAccessoryInfo *)FUN_03813c1c(local_20,uVar10);
        if (*(long *)(pPVar7 + 0x10) == lVar4) {
          PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xd8),pPVar7);
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
    }
    iVar1 = *(int *)(this + 0xd8);
  }
  if (iVar1 < 1) {
    *(undefined4 *)(this + 0x164) = 0;
  }
  else if (iVar3 == iVar1) {
    *(undefined4 *)(this + 0x164) = 1;
  }
  else {
    *(undefined4 *)(this + 0x164) = 2;
  }
  uVar8 = Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
  AVar2 = (AccessoryPackageItem)
          PlantAccessoryMgr::IsTargetPlantDisabled(uVar8,aRStack_28,this + 0xe0);
  this[0x161] = AVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryPackageItem::InitView(int, PlantAccessoryInfo const&) */

void __thiscall
AccessoryPackageItem::InitView(AccessoryPackageItem *this,int param_1,PlantAccessoryInfo *param_2)

{
  string *psVar1;
  PlantAccessoryMgr *this_00;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xf8) = param_1;
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryByType(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xd8),param_2);
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)(this + 0xe0));
  AccessoryUIInfo::operator=((AccessoryUIInfo *)(this + 0x108),(AccessoryUIInfo *)aRStack_40);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aRStack_40);
  this_01 = (CachedUIResourcePtr<Sexy::Image> *)FUN_038131c8(*(undefined4 *)(this + 0x128));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  *(undefined8 *)(this + 0x140) = uVar2;
  uVar2 = StringHelper::ToImage((string *)(this + 0x120),false);
  *(undefined8 *)(this + 0x148) = uVar2;
  uVar2 = FUN_03813708(*(undefined4 *)(this + 0xf0));
  *(undefined8 *)(this + 0x150) = uVar2;
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

