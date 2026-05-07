// Class: PlantHatMushroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHatMushroom::StaticClassInit() */

void PlantHatMushroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHatMushroom");
    (*pcVar2)(plVar1,asStack_10,FUN_03b1fd78,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHatMushroom::StaticGetClass() */

long * PlantHatMushroom::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHatMushroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHatMushroom::GetClass() const */

long * PlantHatMushroom::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHatMushroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHatMushroom::Initialize() */

void __thiscall PlantHatMushroom::Initialize(PlantHatMushroom *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x50) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHatMushroom::onDestroy() */

void __thiscall PlantHatMushroom::onDestroy(PlantHatMushroom *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (cVar1 != '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      (**(code **)(*plVar2 + 0x48))();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      (**(code **)(*plVar2 + 0x48))();
      PlantFramework::onDestroy((PlantFramework *)this);
      return;
    }
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantHatMushroom::PlantHatMushroom() */

void __thiscall PlantHatMushroom::PlantHatMushroom(PlantHatMushroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672d0d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  Sexy::Point::Point((Point *)(this + 0x50));
  return;
}


/* PlantHatMushroom::StaticNew() */

PlantHatMushroom * PlantHatMushroom::StaticNew(void)

{
  PlantHatMushroom *this;
  
  this = ::operator_new(0x58);
  PlantHatMushroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHatMushroom::updateFloorEffect() */

void __thiscall PlantHatMushroom::updateFloorEffect(PlantHatMushroom *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  RtMixedPtr<Sexy::Image> *this_01;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  Effect_PopAnim *pEVar11;
  UIWidget *pUVar12;
  undefined8 uVar13;
  Board *this_02;
  Effect_PopAnim *pEVar14;
  string asStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
  std::string::string((string *)&local_18,"");
  lVar8 = Board::GetPlantAt(this_02,iVar1 + 1,iVar2,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar8 != 0) {
    Plant::GetType();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar9 = FUN_03b1ded8(*(undefined8 *)(this + 0x10));
    cVar3 = std::operator==((string *)(lVar8 + 8),(string *)(lVar9 + 0x2f0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (cVar3 != '\0') {
      this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x40);
      cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar3 != '\0') {
        this_01 = (RtMixedPtr<Sexy::Image> *)(this + 0x48);
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_01);
        if (cVar3 != '\0') {
          BoardEntity::CalcGridPosition();
          *(ulong *)(this + 0x50) = CONCAT44(uStack_14,local_18);
          std::string::string(asStack_48,"POPANIM_EFFECTS_HATMUSHROOM_FLOOR_EFFECT");
          nop();
          uVar5 = Board::MakeRenderOrder
                            (0x62250,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0xffffffff);
          Sexy::Point::Point((Point *)&local_40);
          Sexy::Point::Point((Point *)&local_38);
          iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
          iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
          local_40 = iVar1 * iVar6 + 200 + iVar7 / 2;
          iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar1 = local_40 + -1;
          local_3c = iVar2 * iVar6 + iVar7 / 2 + 0x9d;
          local_40 = iVar1;
          local_38 = BoardConstants::GRIDSQUARE_WIDTH();
          local_38 = iVar1 + local_38;
          local_34 = local_3c;
          FUN_05475d88(asStack_20,asStack_48);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_40,(float)local_3c,0.0);
          PopAnimEffectFactory::CreateEffect
                    (aRStack_30,local_18,uStack_14,local_10,asStack_20,uVar5,0,1);
          std::string::~string(asStack_20);
          FUN_05475d88(asStack_20,asStack_48);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_38,(float)local_34,0.0);
          PopAnimEffectFactory::CreateEffect
                    (aRStack_28,local_18,uStack_14,local_10,asStack_20,uVar5,0,1);
          std::string::~string(asStack_20);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
          if ((cVar3 != '\0') &&
             (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar3 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            nop();
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Effect_PopAnim::SetCentered(pEVar11,true);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            std::string::string((string *)&local_18,"idle");
            pEVar14._0_4_ = (Effect_PopAnim *)PVZ_EOT();
            Effect_PopAnim::PlayLoopingAnimation(pEVar11,(string *)&local_18,0);
            std::string::~string((string *)&local_18);
            nop();
            pUVar12 = (UIWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            plVar10 = (long *)UIWidget::GetAtlasImage(pUVar12);
            (**(code **)(*plVar10 + 0x80))(0x3f000000);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            nop();
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            Effect_PopAnim::SetCentered(pEVar11,true);
            uVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            std::string::string((string *)&local_18,"idle");
            Effect_PopAnim::PlayLoopingAnimation(pEVar14._0_4_,uVar13,(string *)&local_18,0);
            std::string::~string((string *)&local_18);
            nop();
            pUVar12 = (UIWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            plVar10 = (long *)UIWidget::GetAtlasImage(pUVar12);
            (**(code **)(*plVar10 + 0x80))(0x3f000000);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          std::string::~string(asStack_48);
          goto LAB_03b1e050;
        }
      }
      BoardEntity::CalcGridPosition();
      cVar3 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_18,(TPoint *)(this + 0x50));
      if ((cVar3 != '\0') &&
         (bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar4)) {
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
        if (bVar4) {
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar10 + 0x48))();
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
          (**(code **)(*plVar10 + 0x48))();
          Sexy::Point::Point((Point *)&local_18,-1,-1);
          *(ulong *)(this + 0x50) = CONCAT44(uStack_14,local_18);
        }
      }
      goto LAB_03b1e050;
    }
  }
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (cVar3 != '\0') {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar3 != '\0') {
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      (**(code **)(*plVar10 + 0x48))();
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      (**(code **)(*plVar10 + 0x48))();
      Sexy::Point::Point((Point *)&local_18,-1,-1);
      *(ulong *)(this + 0x50) = CONCAT44(uStack_14,local_18);
    }
  }
LAB_03b1e050:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHatMushroom::UpdateActions() */

void __thiscall PlantHatMushroom::UpdateActions(PlantHatMushroom *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  RtMixedPtr<Sexy::Image> *this_01;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  Effect_PopAnim *pEVar11;
  UIWidget *pUVar12;
  undefined8 uVar13;
  Board *this_02;
  Effect_PopAnim *pEVar14;
  string asStack_48 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  lStack_8 = ___stack_chk_guard;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
  std::string::string((string *)&uStack_18,"");
  lVar8 = Board::GetPlantAt(this_02,iVar1 + 1,iVar2,(string *)&uStack_18);
  std::string::~string((string *)&uStack_18);
  nop();
  if (lVar8 != 0) {
    Plant::GetType();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
    lVar9 = FUN_03b1ded8(*(undefined8 *)(this + 0x10));
    cVar3 = std::operator==((string *)(lVar8 + 8),(string *)(lVar9 + 0x2f0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
    if (cVar3 != '\0') {
      this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x40);
      cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar3 != '\0') {
        this_01 = (RtMixedPtr<Sexy::Image> *)(this + 0x48);
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_01);
        if (cVar3 != '\0') {
          BoardEntity::CalcGridPosition();
          *(ulong *)(this + 0x50) = CONCAT44(uStack_14,uStack_18);
          std::string::string(asStack_48,"POPANIM_EFFECTS_HATMUSHROOM_FLOOR_EFFECT");
          nop();
          uVar5 = Board::MakeRenderOrder
                            (0x62250,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0xffffffff);
          Sexy::Point::Point((Point *)&iStack_40);
          Sexy::Point::Point((Point *)&iStack_38);
          iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
          iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
          iStack_40 = iVar1 * iVar6 + 200 + iVar7 / 2;
          iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar1 = iStack_40 + -1;
          iStack_3c = iVar2 * iVar6 + iVar7 / 2 + 0x9d;
          iStack_40 = iVar1;
          iStack_38 = BoardConstants::GRIDSQUARE_WIDTH();
          iStack_38 = iVar1 + iStack_38;
          iStack_34 = iStack_3c;
          FUN_05475d88(asStack_20,asStack_48);
          EATextSquish::Vec3::Vec3((Vec3 *)&uStack_18,(float)iStack_40,(float)iStack_3c,0.0);
          PopAnimEffectFactory::CreateEffect
                    (aRStack_30,uStack_18,uStack_14,uStack_10,asStack_20,uVar5,0,1);
          std::string::~string(asStack_20);
          FUN_05475d88(asStack_20,asStack_48);
          EATextSquish::Vec3::Vec3((Vec3 *)&uStack_18,(float)iStack_38,(float)iStack_34,0.0);
          PopAnimEffectFactory::CreateEffect
                    (aRStack_28,uStack_18,uStack_14,uStack_10,asStack_20,uVar5,0,1);
          std::string::~string(asStack_20);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
          if ((cVar3 != '\0') &&
             (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar3 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            nop();
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)&uStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Effect_PopAnim::SetCentered(pEVar11,true);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            std::string::string((string *)&uStack_18,"idle");
            pEVar14._0_4_ = (Effect_PopAnim *)PVZ_EOT();
            Effect_PopAnim::PlayLoopingAnimation(pEVar11,(string *)&uStack_18,0);
            std::string::~string((string *)&uStack_18);
            nop();
            pUVar12 = (UIWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            plVar10 = (long *)UIWidget::GetAtlasImage(pUVar12);
            (**(code **)(*plVar10 + 0x80))(0x3f000000);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            nop();
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)&uStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
            pEVar11 = (Effect_PopAnim *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            Effect_PopAnim::SetCentered(pEVar11,true);
            uVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            std::string::string((string *)&uStack_18,"idle");
            Effect_PopAnim::PlayLoopingAnimation(pEVar14._0_4_,uVar13,(string *)&uStack_18,0);
            std::string::~string((string *)&uStack_18);
            nop();
            pUVar12 = (UIWidget *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            plVar10 = (long *)UIWidget::GetAtlasImage(pUVar12);
            (**(code **)(*plVar10 + 0x80))(0x3f000000);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          std::string::~string(asStack_48);
          goto LAB_03b1e050;
        }
      }
      BoardEntity::CalcGridPosition();
      cVar3 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&uStack_18,(TPoint *)(this + 0x50));
      if ((cVar3 != '\0') &&
         (bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar4)) {
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
        if (bVar4) {
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar10 + 0x48))();
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
          (**(code **)(*plVar10 + 0x48))();
          Sexy::Point::Point((Point *)&uStack_18,-1,-1);
          *(ulong *)(this + 0x50) = CONCAT44(uStack_14,uStack_18);
        }
      }
      goto LAB_03b1e050;
    }
  }
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
  if (cVar3 != '\0') {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar3 != '\0') {
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      (**(code **)(*plVar10 + 0x48))();
      plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      (**(code **)(*plVar10 + 0x48))();
      Sexy::Point::Point((Point *)&uStack_18,-1,-1);
      *(ulong *)(this + 0x50) = CONCAT44(uStack_14,uStack_18);
    }
  }
LAB_03b1e050:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHatMushroom::ApplyPlantfood() */

void __thiscall PlantHatMushroom::ApplyPlantfood(PlantHatMushroom *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  return;
}


/* PlantHatMushroom::~PlantHatMushroom() */

void __thiscall PlantHatMushroom::~PlantHatMushroom(PlantHatMushroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0672d0d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHatMushroom::~PlantHatMushroom() */

void __thiscall PlantHatMushroom::~PlantHatMushroom(PlantHatMushroom *this)

{
  ~PlantHatMushroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantHatMushroom::findAllTargetsAndSort() */

void __thiscall PlantHatMushroom::findAllTargetsAndSort(PlantHatMushroom *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  operator|(2,4);
  EntityFinder::GetEntitiesOnBoard();
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)in_x8);
  FUN_03b234ec(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHatMushroom::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantHatMushroom::Fire
          (PlantHatMushroom *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  RtObject *pRVar7;
  HatMushroomProjectile *this_01;
  ResourceInfo *pRVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Plant *this_02;
  long lVar12;
  RealObject *this_03;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  HatMushroomProjectile *pHVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
  lVar6 = FUN_03b1ded8(*(undefined8 *)(this + 0x10));
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    iVar3 = FUN_03b1b1bc(*(undefined8 *)(this + 0x10));
    fVar15 = *(float *)(lVar6 + 0x2e0);
    if ((1 < iVar3) && (fVar15 = *(float *)(lVar6 + 0x2e4), iVar3 != 2)) {
      fVar15 = *(float *)(lVar6 + 0x2e8);
    }
    fVar14 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    uVar5 = 0;
    if (fVar14 < fVar15) {
      uVar5 = 1;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
      uVar4 = 1;
      if (4 < iVar3) goto LAB_03b2375c;
LAB_03b23624:
      lVar12 = *(long *)(this + 0x10);
      pHVar16._0_4_ = (HatMushroomProjectile *)0x3f800000;
    }
    else {
      uVar4 = uVar5;
      if (iVar3 < 5) goto LAB_03b23624;
LAB_03b2375c:
      uVar5 = uVar4;
      fVar15 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      if (*(float *)(lVar6 + 0x2ec) <= fVar15) goto LAB_03b23624;
      lVar12 = *(long *)(this + 0x10);
                    /* WARNING: Load size is inaccurate */
      pHVar16._0_4_ = *(HatMushroomProjectile **)(lVar6 + 0x2d4);
      uVar5 = 2;
      *(undefined4 *)(lVar12 + 0x150) = 1;
    }
    *(undefined4 *)(lVar12 + 0x150) = 0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_50);
    pRVar7 = (RtObject *)PlantFramework::Fire((PlantFramework *)this,aRStack_20,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_01 = Sexy::RtObject::Cast<HatMushroomProjectile>(pRVar7);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_2);
    if (cVar1 == '\0') {
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
      Plant::FindTarget(aRStack_20,*(undefined8 *)(this + 0x10),0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_50,(RtWeakPtr *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  else {
    uVar5 = 3;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_50,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar4 = *(undefined4 *)(lVar6 + 0x2c0);
    this_02 = *(Plant **)(this + 0x10);
                    /* WARNING: Load size is inaccurate */
    pHVar16._0_4_ = *(HatMushroomProjectile **)(lVar6 + 0x2d8);
    *(undefined4 *)(this_02 + 0x150) = 0;
    cVar1 = Plant::GetAvatarEnable(this_02);
    if (cVar1 != '\0') {
      uVar4 = *(undefined4 *)(lVar6 + 0x2c4);
                    /* WARNING: Load size is inaccurate */
      pHVar16._0_4_ = *(HatMushroomProjectile **)(lVar6 + 0x2dc);
      uVar5 = 4;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
    }
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x28);
    findAllTargetsAndSort(this);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      uVar13 = *puVar9;
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
      uVar11 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
      ToolPacketData::GetProps();
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar10,uVar11,aRStack_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if ((bVar2) && (cVar1 = FUN_03b1cdf8(uVar13), cVar1 == '\0')) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_50,(RtWeakPtrBase *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)this_00,(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_50);
    if (cVar1 != '\0') {
      this_01 = (HatMushroomProjectile *)0x0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
      goto LAB_03b236f8;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_50);
    pRVar7 = (RtObject *)
             PlantFramework::Fire
                       ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_28,param_3,
                        param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    this_01 = Sexy::RtObject::Cast<HatMushroomProjectile>(pRVar7);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  }
  this_03 = *(RealObject **)(this + 0x10);
  *(undefined4 *)(this_03 + 0x150) = 0xffffffff;
  std::string::string((string *)aRStack_20,"hatmushroom_fire");
  RealObject::PlayPositionalSound(this_03,(string *)aRStack_20,0.0);
  std::string::~string((string *)aRStack_20);
  nop();
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)this_01,(BoardEntity *)pRVar8);
  HatMushroomProjectile::setValues(pHVar16._0_4_,0,this_01,uVar5,uVar4);
LAB_03b236f8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

