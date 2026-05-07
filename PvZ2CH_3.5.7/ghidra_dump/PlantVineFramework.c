// Class: PlantVineFramework


/* PlantVineFramework::onBoostPlant(Plant*) */

void PlantVineFramework::onBoostPlant(Plant *param_1)

{
  return;
}


/* PlantVineFramework::onPlantPlaced(Plant*) */

void PlantVineFramework::onPlantPlaced(Plant *param_1)

{
  return;
}


/* PlantVineFramework::onPlantDied(Plant*) */

void PlantVineFramework::onPlantDied(Plant *param_1)

{
  return;
}


/* PlantVineFramework::UpdateUnconditionally() */

void __thiscall PlantVineFramework::UpdateUnconditionally(PlantVineFramework *this)

{
  (**(code **)(*(long *)this + 0x6e0))();
  return;
}


/* PlantVineFramework::Initialize() */

void __thiscall PlantVineFramework::Initialize(PlantVineFramework *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  (**(code **)(*(long *)this + 0x6e8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVineFramework::StaticClassInit() */

void PlantVineFramework::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantVineFramework");
    (*pcVar2)(plVar1,asStack_10,FUN_03fda7c8,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVineFramework::StaticGetClass() */

long * PlantVineFramework::StaticGetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantVineFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantVineFramework::GetClass() const */

long * PlantVineFramework::GetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantVineFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVineFramework::plantDied(Plant*) */

void __thiscall PlantVineFramework::plantDied(PlantVineFramework *this,Plant *param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    fVar3 = (float)PVZ_T();
    pcVar2 = *(code **)(*(long *)this + 0x6f8);
    *(float *)(this + 0x134) = fVar3 + *(float *)(this + 0x130);
    if (pcVar2 != onPlantDied) {
      (*pcVar2)(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVineFramework::getBasePlant() */

void __thiscall PlantVineFramework::getBasePlant(PlantVineFramework *this)

{
  long lVar1;
  ResourceInfo *pRVar2;
  Point *pPVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  lVar1 = Board::GetPlantGroupAt(pPVar3);
  if (lVar1 != 0) {
    PlantGroup::GetPlantAtLayer(aPStack_10,lVar1,1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    if (pRVar2 == (ResourceInfo *)0x0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aPStack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),(RtWeakPtr *)aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x134) = fVar4 + *(float *)(this + 0x130);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),(RtWeakPtrBase *)aPStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (*(code **)(*(long *)this + 0x700) != onBoostPlant) {
        (**(code **)(*(long *)this + 0x700))(this,pRVar2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVineFramework::CheckMainPlant() */

void __thiscall PlantVineFramework::CheckMainPlant(PlantVineFramework *this)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  this_00 = gLawnApp;
  lVar2 = LawnApp::GetPlantLevelUpListView(gLawnApp);
  lVar3 = LawnApp::GetPlantAvatarListView(this_00);
  if ((lVar3 == 0) && (lVar2 == 0)) {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x128));
    if (cVar1 == '\0') {
      cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),4);
      if (cVar1 != '\0') {
        Plant::EndCondition(*(Plant **)(this + 0x10),4);
        return;
      }
    }
    else {
      fVar5 = *(float *)(this + 0x134);
      fVar4 = (float)PVZ_T();
      if (fVar5 <= fVar4) {
        Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
      }
      fVar4 = (float)PVZ_Dt();
      if (1.0 <= fVar4 + *(float *)(this + 0x138)) {
        *(undefined4 *)(this + 0x138) = 0;
        Plant::ApplyCondition(0x3f000000,0,*(undefined8 *)(this + 0x10),4);
        return;
      }
      *(float *)(this + 0x138) = fVar4 + *(float *)(this + 0x138);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVineFramework::plantPlaced(Plant*) */

void __thiscall PlantVineFramework::plantPlaced(PlantVineFramework *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  RtWeakPtrBase *pRVar7;
  ResourceInfo *pRVar8;
  Plant *pPVar9;
  Point *pPVar10;
  undefined4 uVar11;
  float fVar12;
  TPoint<int> aTStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  pPVar9 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (pPVar9 == param_1) {
    pPVar10 = *(Point **)(gLawnApp + 0x9f0);
    Sexy::Point::Point((Point *)aRStack_10,*(int *)(pPVar9 + 0x114),*(int *)(pPVar9 + 0x110));
    lVar5 = Board::GetPlantGroupAt(pPVar10);
    if (lVar5 != 0) {
      PlantGroup::GetPlantAtLayer((Point *)aRStack_10,lVar5,1);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (pRVar8 == (ResourceInfo *)0x0) {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar3 = std::operator==((string *)(lVar5 + 8),"aquavine");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (bVar3) {
          if (*(code **)(*(long *)this + 0x6f0) != onPlantPlaced) {
            (**(code **)(*(long *)this + 0x6f0))(this,pPVar9);
          }
        }
        else {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),(RtWeakPtr *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          fVar12 = (float)PVZ_T();
          *(float *)(this + 0x134) = fVar12 + *(float *)(this + 0x130);
        }
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),
                   (RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (*(code **)(*(long *)this + 0x6f0) != onPlantPlaced) {
          (**(code **)(*(long *)this + 0x6f0))(this,pRVar8);
        }
        uVar11 = PVZ_EOT();
        *(undefined4 *)(this + 0x134) = uVar11;
      }
    }
  }
  else {
    iVar4 = FUN_03fd98e8(*(undefined4 *)(param_1 + 0x230));
    if (iVar4 == 1) {
      BoardEntity::CalcGridPosition();
      BoardEntity::CalcGridPosition();
      cVar1 = Sexy::TPoint<int>::operator==(aTStack_28,(TPoint *)&local_20);
      if (cVar1 != '\0') {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        bVar2 = std::operator!=((string *)(lVar5 + 8),"smallcactus");
        bVar3 = false;
        if (bVar2) {
          Plant::GetType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          bVar3 = std::operator!=((string *)(lVar5 + 8),"smallChestnut");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (bVar3 != false) {
          pPVar10 = *(Point **)(gLawnApp + 0x9f0);
          Sexy::Point::Point((Point *)aRStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                             *(int *)(*(long *)(this + 0x10) + 0x110));
          lVar5 = Board::GetPlantGroupAt(pPVar10);
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)PlantGroup::Plants();
            local_20 = FUN_03fda168(*puVar6);
            local_18 = FUN_03fda1b8(puVar6[1]);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18)
                  , bVar3) {
              pRVar7 = (RtWeakPtrBase *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aTStack_28,pRVar7);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_28);
              ToolPacketData::GetProps();
              cVar1 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)(this + 0x128));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              if (cVar1 != '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_28);
                goto LAB_03fda258;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_28);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
            }
          }
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),
                     (RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          uVar11 = PVZ_EOT();
          *(undefined4 *)(this + 0x134) = uVar11;
          if (*(code **)(*(long *)this + 0x6f0) != onPlantPlaced) {
            (**(code **)(*(long *)this + 0x6f0))(this,param_1);
          }
        }
      }
    }
  }
LAB_03fda258:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVineFramework::~PlantVineFramework() */

void __thiscall PlantVineFramework::~PlantVineFramework(PlantVineFramework *this)

{
  *(undefined ***)this = &PTR_GetClass_067af610;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  PlantStatefulFramework::~PlantStatefulFramework((PlantStatefulFramework *)this);
  return;
}


/* PlantVineFramework::~PlantVineFramework() */

void __thiscall PlantVineFramework::~PlantVineFramework(PlantVineFramework *this)

{
  ~PlantVineFramework(this);
  AK::FreeHook(this);
  return;
}


/* PlantVineFramework::PlantVineFramework() */

void __thiscall PlantVineFramework::PlantVineFramework(PlantVineFramework *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantStatefulFramework::PlantStatefulFramework((PlantStatefulFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067af610;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  *(undefined4 *)(this + 0x130) = 0x40a00000;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x134) = uVar2;
  *(undefined4 *)(this + 0x138) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,plantPlaced);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantVineFramework,void(PlantVineFramework::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,plantDied);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantVineFramework,void(PlantVineFramework::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_50);
  return;
}


/* PlantVineFramework::StaticNew() */

PlantVineFramework * PlantVineFramework::StaticNew(void)

{
  PlantVineFramework *this;
  
  this = ::operator_new(0x140);
  PlantVineFramework(this);
  return this;
}

