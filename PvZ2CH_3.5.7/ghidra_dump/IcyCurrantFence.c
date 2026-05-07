// Class: IcyCurrantFence


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcyCurrantFence::StaticClassInit() */

void IcyCurrantFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"IcyCurrantFence");
    (*pcVar2)(plVar1,asStack_10,FUN_03c25400,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IcyCurrantFence::StaticGetClass() */

long * IcyCurrantFence::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IcyCurrantFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcyCurrantFence::GetClass() const */

long * IcyCurrantFence::GetClass(void)

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
  (*pcVar3)(plVar1,"IcyCurrantFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcyCurrantFence::IcyCurrantFence() */

void __thiscall IcyCurrantFence::IcyCurrantFence(IcyCurrantFence *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06749b30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* IcyCurrantFence::StaticNew() */

IcyCurrantFence * IcyCurrantFence::StaticNew(void)

{
  IcyCurrantFence *this;
  
  this = ::operator_new(0x38);
  IcyCurrantFence(this);
  return this;
}


/* IcyCurrantFence::~IcyCurrantFence() */

void __thiscall IcyCurrantFence::~IcyCurrantFence(IcyCurrantFence *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  GridItemIcyFence *this_02;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x20);
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetClass_06749b30;
  lVar2 = FUN_03c22e00(uVar5,*(undefined8 *)(this + 0x28));
  if (lVar2 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_03c22e28(uVar5,uVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c22e28(*(undefined8 *)(this + 0x20),uVar4);
        this_02 = (GridItemIcyFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        GridItemIcyFence::Release(this_02);
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(this + 0x20);
      uVar3 = FUN_03c22e00(uVar5,*(undefined8 *)(this + 0x28));
    } while (uVar4 < uVar3);
  }
  std::vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>
           *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* IcyCurrantFence::~IcyCurrantFence() */

void __thiscall IcyCurrantFence::~IcyCurrantFence(IcyCurrantFence *this)

{
  ~IcyCurrantFence(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcyCurrantFence::onDestroy() */

void __thiscall IcyCurrantFence::onDestroy(IcyCurrantFence *this)

{
  PlantIcyCurrant *extraout_x0;
  PlantIcyCurrant *extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantIcyCurrant::RemoveFence(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantIcyCurrant::RemoveFence(extraout_x0_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcyCurrantFence::Init(PlantIcyCurrant*, PlantIcyCurrant*) */

void IcyCurrantFence::Init(PlantIcyCurrant *param_1,PlantIcyCurrant *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SharkMinion *pSVar5;
  BoardEntity *pBVar6;
  GridItemIcyFence *this_01;
  long extraout_x0;
  GridItemIcyFence *this_02;
  long lVar7;
  long extraout_x0_00;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x10);
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pSVar5 = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar2 = SharkMinion::getRow(pSVar5);
  pSVar5 = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar3 = SharkMinion::getRow(pSVar5);
  if (iVar2 == iVar3) {
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar6);
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar6);
    uVar1 = iVar2 - iVar3;
    iVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = (int)uVar1 / iVar3;
    }
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar6);
    while( true ) {
      iVar3 = iVar3 + iVar2;
      pBVar6 = (BoardEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = BoardEntity::CalcColumnPosition(pBVar6);
      if (iVar3 == iVar4) break;
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aRStack_10,"icy_fence");
      pSVar5 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar4 = SharkMinion::getRow(pSVar5);
      lVar7 = Board::GetGridItemAt(pBVar8,(string *)aRStack_10,iVar3,iVar4);
      std::string::~string((string *)aRStack_10);
      nop();
      if (lVar7 == 0) {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aRStack_10,"icy_fence");
        pSVar5 = (SharkMinion *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        iVar4 = SharkMinion::getRow(pSVar5);
        Board::AddGridItem(pBVar8,(string *)aRStack_10,iVar3,iVar4,1);
        std::string::~string((string *)aRStack_10);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        PlantIcyCurrant::GetPrimaryDamage(param_2);
        FUN_03c22da8(extraout_x0 + 0x1a8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        GridItemIcyFence::Increase(this_01);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      std::
      vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>::
      push_back((vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>
                 *)(param_1 + 0x20),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  else {
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar6);
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar6);
    if (iVar2 == iVar3) {
      pSVar5 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar2 = SharkMinion::getRow(pSVar5);
      pSVar5 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = SharkMinion::getRow(pSVar5);
      uVar1 = iVar2 - iVar3;
      iVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = (int)uVar1 / iVar3;
      }
      pSVar5 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = SharkMinion::getRow(pSVar5);
      while( true ) {
        iVar3 = iVar3 + iVar2;
        pSVar5 = (SharkMinion *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar4 = SharkMinion::getRow(pSVar5);
        if (iVar3 == iVar4) break;
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aRStack_10,"icy_fence");
        pBVar6 = (BoardEntity *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        iVar4 = BoardEntity::CalcColumnPosition(pBVar6);
        lVar7 = Board::GetGridItemAt(pBVar8,(string *)aRStack_10,iVar4,iVar3);
        std::string::~string((string *)aRStack_10);
        nop();
        if (lVar7 == 0) {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_10,"icy_fence");
          pBVar6 = (BoardEntity *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          iVar4 = BoardEntity::CalcColumnPosition(pBVar6);
          Board::AddGridItem(pBVar8,(string *)aRStack_10,iVar4,iVar3,1);
          std::string::~string((string *)aRStack_10);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          nop();
          PlantIcyCurrant::GetPrimaryDamage(param_2);
          FUN_03c22da8(extraout_x0_00 + 0x1a8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        else {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          nop();
          GridItemIcyFence::Increase(this_02);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
        std::
        vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>
        ::push_back((vector<Sexy::RtWeakPtr<GridItemIcyFence>,std::allocator<Sexy::RtWeakPtr<GridItemIcyFence>>>
                     *)(param_1 + 0x20),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IcyCurrantFence::CreateFence(PlantIcyCurrant*, PlantIcyCurrant*) */

IcyCurrantFence * IcyCurrantFence::CreateFence(PlantIcyCurrant *param_1,PlantIcyCurrant *param_2)

{
  int iVar1;
  int iVar2;
  IcyCurrantFence *pIVar3;
  
  iVar1 = SharkMinion::getRow(*(SharkMinion **)(param_2 + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
  if (iVar1 != iVar2) {
    iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_2 + 0x10));
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    if (iVar1 != iVar2) {
      return (IcyCurrantFence *)0x0;
    }
  }
  pIVar3 = GameObject::Create<IcyCurrantFence>();
  Init((PlantIcyCurrant *)pIVar3,param_1);
  return pIVar3;
}

