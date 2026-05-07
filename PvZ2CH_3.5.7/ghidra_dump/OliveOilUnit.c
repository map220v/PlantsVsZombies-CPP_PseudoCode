// Class: OliveOilUnit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilUnit::StaticClassInit() */

void OliveOilUnit::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"OliveOilUnit");
    (*pcVar2)(plVar1,asStack_10,FUN_0425f3a4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OliveOilUnit::StaticGetClass() */

long * OliveOilUnit::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"OliveOilUnit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OliveOilUnit::GetClass() const */

long * OliveOilUnit::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"OliveOilUnit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OliveOilUnit::~OliveOilUnit() */

void __thiscall OliveOilUnit::~OliveOilUnit(OliveOilUnit *this)

{
  *(undefined ***)this = &PTR_GetClass_0681c690;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* OliveOilUnit::~OliveOilUnit() */

void __thiscall OliveOilUnit::~OliveOilUnit(OliveOilUnit *this)

{
  ~OliveOilUnit(this);
  AK::FreeHook(this);
  return;
}


/* OliveOilUnit::CanDestroy() */

undefined8 __thiscall OliveOilUnit::CanDestroy(OliveOilUnit *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x10));
  if ((!bVar1) ||
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10)), cVar2 == '\0')) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x18));
    if ((!bVar1) ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x18)), cVar2 == '\0')) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
      if ((!bVar1) ||
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20)), cVar2 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilUnit::IsThereOil(Sexy::Point) */

void __thiscall OliveOilUnit::IsThereOil(OliveOilUnit *this,TPoint *param_2)

{
  char cVar1;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_28,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x10));
  cVar1 = FUN_0425d5f8(aPStack_28,aRStack_20);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x18));
    cVar1 = FUN_0425d5f8(aPStack_28,aRStack_18);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x20));
      cVar1 = FUN_0425d5f8(aPStack_28,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilUnit::onRemoveOil(GridItemOliveOil*) */

void __thiscall OliveOilUnit::onRemoveOil(OliveOilUnit *this,GridItemOliveOil *param_1)

{
  ResourceInfo *pRVar1;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  if (param_1 != (GridItemOliveOil *)pRVar1) {
    this_00 = (RtWeakPtr *)(this + 0x18);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (param_1 != (GridItemOliveOil *)pRVar1) {
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x20));
      if (param_1 == (GridItemOliveOil *)pRVar1) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      goto LAB_0425dc4c;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_0425dc4c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OliveOilUnit::OliveOilUnit() */

void __thiscall OliveOilUnit::OliveOilUnit(OliveOilUnit *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0681c690;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x2c] = (OliveOilUnit)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDamageZombie);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<OliveOilUnit,void(OliveOilUnit::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDamageZombie);
  local_70 = local_30;
  uStack_68 = uStack_28;
  local_60 = local_20;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<OliveOilUnit,void(OliveOilUnit::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieHelmDamageTaken,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRemoveOil);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<GridItemOliveOil*,Sexy::CBMemberTranslatorX<OliveOilUnit,void(OliveOilUnit::*)(GridItemOliveOil*)>>
            ((MessageRouter *)puVar1,Message::OnOliveOilDestroy,&local_90);
  return;
}


/* OliveOilUnit::StaticNew() */

OliveOilUnit * OliveOilUnit::StaticNew(void)

{
  OliveOilUnit *this;
  
  this = ::operator_new(0x30);
  OliveOilUnit(this);
  return this;
}


/* OliveOilUnit::CanAddOliveOilAt(Sexy::Point) */

char __thiscall OliveOilUnit::CanAddOliveOilAt(undefined8 param_1,Point *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  cVar1 = FUN_0425c588(*(long *)(gLawnApp + 0x9f0) + 0xf8,*(long *)(gLawnApp + 0x9f0) + 0xfc,param_2
                      );
  if ((cVar1 != '\0') &&
     (lVar3 = FUN_0425ef18(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar3 == 0)) {
    cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_2);
    if ((cVar1 == '\0') &&
       (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_2), cVar1 == '\0')) {
      iVar2 = Board::GetGridSquareType
                        (*(Board **)(gLawnApp + 0x9f0),*(int *)param_2,*(int *)(param_2 + 4));
      cVar1 = iVar2 == 1;
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilUnit::OnDamageZombie(Zombie*, DamageInfo const&) */

void __thiscall OliveOilUnit::OnDamageZombie(OliveOilUnit *this,Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *pRVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  GridItemOliveOil *pGVar5;
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if (this[0x2c] == (OliveOilUnit)0x0) {
    Sexy::Point::Point(aPStack_10,aTStack_18);
    cVar2 = IsThereOil(this,aPStack_10);
    if (cVar2 != '\0') {
      bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),0x400);
      if (bVar3) {
        pRVar1 = (RtWeakPtr *)(this + 0x10);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
        if ((bVar3) &&
           (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar2 != '\0')) {
          pGVar5 = (GridItemOliveOil *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
          ;
          cVar2 = GridItemOliveOil::TakeFire(pGVar5);
        }
        else {
          cVar2 = '\x01';
        }
        pRVar1 = (RtWeakPtr *)(this + 0x18);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
        if ((bVar3) &&
           (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar4 != '\0')) {
          if (cVar2 == '\0') {
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
            if (bVar3) {
              Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x20));
            }
            goto LAB_042605a4;
          }
          pGVar5 = (GridItemOliveOil *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
          ;
          cVar2 = GridItemOliveOil::TakeFire(pGVar5);
        }
        pRVar1 = (RtWeakPtr *)(this + 0x20);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
        if ((bVar3) &&
           (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1), cVar4 != '\0')) {
          if (cVar2 == '\0') goto LAB_042605a4;
          pGVar5 = (GridItemOliveOil *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
          ;
          cVar2 = GridItemOliveOil::TakeFire(pGVar5);
        }
        if (cVar2 == '\0') goto LAB_042605a4;
      }
      this[0x2c] = (OliveOilUnit)0x1;
    }
  }
LAB_042605a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OliveOilUnit::InitUint(Sexy::Point) */

void __thiscall OliveOilUnit::InitUint(OliveOilUnit *this,TPoint *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  OliveOilFire *pOVar3;
  char cVar4;
  undefined8 local_48;
  Insets aIStack_40 [16];
  undefined8 local_30;
  OliveOilUnit *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_40,*(int *)param_2 + -1,*(int *)(param_2 + 4),3,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,4,aIStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_30);
    if (!bVar1) {
      cVar4 = '\0';
LAB_04260b9c:
      local_30 = CONCAT71(local_30._1_7_,cVar4);
      local_28 = this;
      Sexy::Point::Point((Point *)&local_48,*(int *)param_2 + -1,*(int *)(param_2 + 4));
      FUN_04260884((__normal_iterator *)&local_30,(exception_ptr *)&local_48,0);
      Sexy::Point::Point((Point *)&local_48,param_2);
      FUN_04260884((__normal_iterator *)&local_30,(exception_ptr *)&local_48,1);
      Sexy::Point::Point((Point *)&local_48,*(int *)param_2 + 1,*(int *)(param_2 + 4));
      FUN_04260884((__normal_iterator *)&local_30,(exception_ptr *)&local_48,2);
      if (cVar4 != '\0') {
        this[0x2c] = (OliveOilUnit)0x1;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    pOVar3 = Sexy::RtObject::Cast<OliveOilFire>((RtObject *)*puVar2);
    if (pOVar3 != (OliveOilFire *)0x0) {
      cVar4 = '\x01';
      goto LAB_04260b9c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}

