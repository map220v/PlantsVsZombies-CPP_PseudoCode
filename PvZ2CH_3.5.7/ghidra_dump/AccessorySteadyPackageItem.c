// Class: AccessorySteadyPackageItem


/* AccessorySteadyPackageItem::TouchBegan(Sexy::Touch const&) */

void __thiscall
AccessorySteadyPackageItem::TouchBegan(AccessorySteadyPackageItem *this,Touch *param_1)

{
  *(undefined8 *)(this + 0x150) = *(undefined8 *)param_1;
  return;
}


/* AccessorySteadyPackageItem::AccessorySteadyPackageItem() */

void __thiscall
AccessorySteadyPackageItem::AccessorySteadyPackageItem(AccessorySteadyPackageItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066a4d40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  PlantAccessoryInfo::PlantAccessoryInfo((PlantAccessoryInfo *)(this + 0xe0));
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0x100));
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x158] = (AccessorySteadyPackageItem)0x0;
  this[0x159] = (AccessorySteadyPackageItem)0x0;
  return;
}


/* AccessorySteadyPackageItem::~AccessorySteadyPackageItem() */

void __thiscall
AccessorySteadyPackageItem::~AccessorySteadyPackageItem(AccessorySteadyPackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a4d40;
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x100));
  PakRecord::~PakRecord((PakRecord *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessorySteadyPackageItem::~AccessorySteadyPackageItem() */

void __thiscall
AccessorySteadyPackageItem::~AccessorySteadyPackageItem(AccessorySteadyPackageItem *this)

{
  ~AccessorySteadyPackageItem(this);
  AK::FreeHook(this);
  return;
}


/* AccessorySteadyPackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall
AccessorySteadyPackageItem::TouchEnded(AccessorySteadyPackageItem *this,Touch *param_1)

{
  UINewPlantView_AccessoryPackage *this_00;
  
  if (*(long *)(this + 0x150) != *(long *)param_1) {
    return;
  }
  this_00 = (UINewPlantView_AccessoryPackage *)
            UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  UINewPlantView_AccessoryPackage::SelectSteadyItem(this_00,this);
  return;
}


/* AccessorySteadyPackageItem::Draw(Sexy::Graphics*) */

void __thiscall AccessorySteadyPackageItem::Draw(AccessorySteadyPackageItem *this,Graphics *param_1)

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
  if (this[0x158] == (AccessorySteadyPackageItem)0x0) {
    return;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3620);
  iVar1 = FUN_03814ff8(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySteadyPackageItem::Refresh() */

void __thiscall AccessorySteadyPackageItem::Refresh(AccessorySteadyPackageItem *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  NameMapperBase *this_02;
  vector *pvVar3;
  ulong uVar4;
  PlantAccessoryInfo *pPVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar2 = UISingletonDialog<UINewPlantView_AccessoryPackage>::GetSingletonPtr();
  this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
  NameMapperBase::GetIdForName(this_02,(string *)(lVar2 + 0x1d8));
  pvVar3 = (vector *)PlayerInfo::GetPlantAccessoryInfos(this_01);
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20,pvVar3);
  iVar1 = *(int *)(this + 0xd4);
  uVar4 = FUN_03813c10(local_20,local_18);
  if ((ulong)(long)iVar1 < uVar4) {
    pPVar5 = (PlantAccessoryInfo *)FUN_03813c1c(local_20,(long)iVar1);
    PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xe0),pPVar5);
  }
  else if (uVar4 != 0) {
    lVar2 = *(long *)(this + 0xf0);
    uVar7 = 0;
    do {
      pPVar5 = (PlantAccessoryInfo *)FUN_03813c1c(local_20,uVar7);
      if (lVar2 == *(long *)(pPVar5 + 0x10)) {
        PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xe0),pPVar5);
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  uVar6 = FUN_03813708(*(undefined4 *)(this + 0xf8));
  *(undefined8 *)(this + 0x148) = uVar6;
  std::vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>>::~vector
            ((vector<PlantAccessoryInfo,std::allocator<PlantAccessoryInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessorySteadyPackageItem::InitView(int, Sexy::RtWeakPtr<PlantAccessoryPropertySheet>,
   PlantAccessoryInfo) */

void __thiscall
AccessorySteadyPackageItem::InitView
          (AccessorySteadyPackageItem *this,undefined4 param_1,RtWeakPtr *param_3,
          PlantAccessoryInfo *param_4)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  long lVar1;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  undefined8 uVar2;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xd8);
  *(undefined4 *)(this + 0xd4) = param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_3);
  PlantAccessoryInfo::operator=((PlantAccessoryInfo *)(this + 0xe0),param_4);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  this_01 = (CachedUIResourcePtr<Sexy::Image> *)FUN_038131c8(*(undefined4 *)(lVar1 + 0x80));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  *(undefined8 *)(this + 0x138) = uVar2;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar2 = StringHelper::ToImage((string *)(lVar1 + 0x28),false);
  *(undefined8 *)(this + 0x140) = uVar2;
  Refresh(this);
  return;
}

