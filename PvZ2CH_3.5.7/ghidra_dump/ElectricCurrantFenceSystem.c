// Class: ElectricCurrantFenceSystem


/* ElectricCurrantFenceSystem::doesFenceContainNode(Sexy::RtWeakPtr<ElectricCurrantFence>,
   Sexy::Point) */

void __thiscall
ElectricCurrantFenceSystem::doesFenceContainNode
          (undefined8 param_1,RtMixedPtrBase *param_2,TPoint *param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar2 + 0x10),param_3);
    if (cVar1 == '\0') {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar2 + 0x18),param_3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::StaticClassInit() */

void ElectricCurrantFenceSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ElectricCurrantLocation");
    (*pcVar3)(plVar2,asStack_10,FUN_04199e84,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ElectricCurrantFenceSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0419c380,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFenceSystem::StaticGetClass() */

long * ElectricCurrantFenceSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricCurrantFenceSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricCurrantFenceSystem::GetClass() const */

long * ElectricCurrantFenceSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricCurrantFenceSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::getOrderedLocations(PlantElectricCurrant*, PlantElectricCurrant*,
   Sexy::Point&, Sexy::Point&) */

void __thiscall
ElectricCurrantFenceSystem::getOrderedLocations
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1,
          PlantElectricCurrant *param_2,Point *param_3,Point *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 local_10;
  long local_8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_2 + 0x10);
  iVar1 = *(int *)(lVar4 + 0x110);
  iVar2 = *(int *)(lVar6 + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar2 == iVar1) {
    iVar5 = *(int *)(lVar6 + 0x114);
    iVar3 = *(int *)(lVar4 + 0x114);
    if (iVar3 < iVar5) goto LAB_041999a8;
  }
  else {
    if (iVar1 <= iVar2) {
      iVar3 = *(int *)(lVar4 + 0x114);
LAB_041999a8:
      Sexy::Point::Point((Point *)&local_10,iVar3,iVar1);
      lVar4 = *(long *)(param_1 + 0x10);
      goto LAB_0419995c;
    }
    iVar5 = *(int *)(lVar6 + 0x114);
  }
  Sexy::Point::Point((Point *)&local_10,iVar5,iVar2);
  lVar4 = *(long *)(param_2 + 0x10);
LAB_0419995c:
  *(undefined8 *)param_3 = local_10;
  Sexy::Point::Point((Point *)&local_10,*(int *)(lVar4 + 0x114),*(int *)(lVar4 + 0x110));
  *(undefined8 *)param_4 = local_10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::ApplyPlantfoodToNode(PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::ApplyPlantfoodToNode
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  ElectricCurrantFence *this_00;
  Point aPStack_30 [8];
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_041987e8(param_1[0x30]);
  if (cVar1 != '\0') {
    Sexy::Point::Point(aPStack_30,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                       *(int *)(*(long *)(param_1 + 0x10) + 0x110));
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
        Sexy::Point::Point((Point *)&local_10,(TPoint *)aPStack_30);
        cVar1 = doesFenceContainNode(this,aRStack_18,(Point *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (cVar1 != '\0') {
          this_00 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          ElectricCurrantFence::ApplyPlantfood(this_00);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      FUN_0419a050((__normal_iterator *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::GetNumFencesOnNode(PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::GetNumFencesOnNode
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  int iVar4;
  long lVar5;
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (PlantElectricCurrant *)0x0) {
    iVar4 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    iVar4 = 0;
    if (lVar5 != 0) {
      iVar4 = 0;
      Sexy::Point::Point(aPStack_20,*(int *)(lVar5 + 0x114),*(int *)(lVar5 + 0x110));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x18));
      while( true ) {
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x18));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar1) break;
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
        if (cVar2 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar5 + 0x10),(TPoint *)aPStack_20);
          if (cVar2 == '\0') {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            cVar2 = Sexy::TPoint<int>::operator==
                              ((TPoint<int> *)(lVar5 + 0x18),(TPoint *)aPStack_20);
            if (cVar2 != '\0') {
              iVar4 = iVar4 + 1;
            }
          }
          else {
            iVar4 = iVar4 + 1;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        FUN_0419a050((__normal_iterator *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::getPieceWithEndpoints(Sexy::Point, Sexy::Point) */

void ElectricCurrantFenceSystem::getPieceWithEndpoints
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,TPoint *param_3,TPoint *param_4
               )

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ElectricCurrantFence *pEVar4;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x18));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_0419a468:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pEVar4 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      Sexy::Point::Point(aPStack_18,param_3);
      cVar2 = ElectricCurrantFence::HasNode(pEVar4,aPStack_18);
      if (cVar2 != '\0') {
        pEVar4 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        Sexy::Point::Point((Point *)&local_10,param_4);
        cVar2 = ElectricCurrantFence::HasNode(pEVar4,(Point *)&local_10);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          goto LAB_0419a468;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    FUN_0419a050((__normal_iterator *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::DoHitEffect(BoardEntity*) */

void __thiscall
ElectricCurrantFenceSystem::DoHitEffect(ElectricCurrantFenceSystem *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  SexyVector3 *this_01;
  PopAnim *pPVar3;
  char *__s;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  uVar4 = 0xc20c0000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-35.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar4;
  local_10 = uVar5;
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2);
  std::string::string((string *)aVStack_28,"POPANIM_EFFECTS_ELECTRICCURRANT_HIT");
  GetPAMByName((string *)aVStack_28);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string((string *)aVStack_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  if (this[0x34] == (ElectricCurrantFenceSystem)0x0) {
    __s = "idle";
  }
  else {
    __s = "level_idle";
  }
  std::string::string((string *)&local_18,__s);
  nop();
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,2);
  std::string::~string((string *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::ElectricCurrantFenceSystem() */

void __thiscall
ElectricCurrantFenceSystem::ElectricCurrantFenceSystem(ElectricCurrantFenceSystem *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  this[0x10] = (ElectricCurrantFenceSystem)0x0;
  *(undefined ***)this = &PTR_GetClass_067fd3c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x34] = (ElectricCurrantFenceSystem)0x0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<ElectricCurrantFenceSystem,void(ElectricCurrantFenceSystem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<ElectricCurrantFenceSystem,void(ElectricCurrantFenceSystem::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMechanismPlankMoved);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<GridItemMechanismPlank*,Sexy::CBMemberTranslatorX<ElectricCurrantFenceSystem,void(ElectricCurrantFenceSystem::*)(GridItemMechanismPlank*)>>
            ((MessageRouter *)puVar1,Message::MechanismPlankMoved,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFenceSystem::StaticNew() */

ElectricCurrantFenceSystem * ElectricCurrantFenceSystem::StaticNew(void)

{
  ElectricCurrantFenceSystem *this;
  
  this = ::operator_new(0x38);
  ElectricCurrantFenceSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::clearEffectsOnNode(Sexy::Point) */

void __thiscall
ElectricCurrantFenceSystem::clearEffectsOnNode(ElectricCurrantFenceSystem *this,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  PlantElectricCurrant *extraout_x0;
  PlantElectricCurrant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantElectricCurrant *)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,*param_2,param_2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((*(RtObject **)(pPVar4 + 0xa8) != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<PlantElectricCurrant>(*(RtObject **)(pPVar4 + 0xa8)), bVar1)) {
      nop();
      nop();
      this_00 = extraout_x0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if ((this_00 != (PlantElectricCurrant *)0x0) &&
     (iVar2 = GetNumFencesOnNode(this,this_00), iVar2 == 0)) {
    PlantElectricCurrant::RemovePlantElectrifiedGlow(this_00);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::removeFence(Sexy::RtWeakPtr<ElectricCurrantFence>) */

void __thiscall
ElectricCurrantFenceSystem::removeFence(ElectricCurrantFenceSystem *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ElectricCurrantFence *this_01;
  long *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ElectricCurrantFence>*,std::vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>>,Sexy::RtWeakPtr<ElectricCurrantFence>>
                       (uVar3,uVar4,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::
               vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
               ::erase((vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
                        *)this_00,local_10);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  }
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2), cVar2 != '\0'))
  {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar5 + 0x10));
    clearEffectsOnNode(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_10);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Point::Point((Point *)&local_10,(TPoint *)(lVar5 + 0x18));
    clearEffectsOnNode(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_10);
    this_01 = (ElectricCurrantFence *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    ElectricCurrantFence::DestroyFence(this_01);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    (**(code **)(*plVar6 + 0x48))();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_18);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::removeFenceBetweenPlants(PlantElectricCurrant*,
   PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::removeFenceBetweenPlants
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1,
          PlantElectricCurrant *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtr aRStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(param_2 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_2 + 0x10) + 0x110));
  getPieceWithEndpoints(aRStack_20,this,aPStack_18,aPStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_10,(RtWeakPtrBase *)aRStack_20);
    removeFence(this,aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    iVar3 = GetNumFencesOnNode(this,param_1);
    if (iVar3 == 0) {
      PlantElectricCurrant::RemovePlantElectrifiedGlow(param_1);
    }
    iVar3 = GetNumFencesOnNode(this,param_2);
    if (iVar3 == 0) {
      PlantElectricCurrant::RemovePlantElectrifiedGlow(param_2);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::removeAllFences() */

void __thiscall ElectricCurrantFenceSystem::removeAllFences(ElectricCurrantFenceSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  ElectricCurrantFence *this_01;
  long *plVar5;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  while (lVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), lVar3 != 0
        ) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,pRVar4);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      local_20 = std::
                 vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
                 ::erase((vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
                          *)this_00,local_10);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if ((bVar1) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) {
        this_01 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        ElectricCurrantFence::DestroyFence(this_01);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        (**(code **)(*plVar5 + 0x48))();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricCurrantFenceSystem::~ElectricCurrantFenceSystem() */

void __thiscall
ElectricCurrantFenceSystem::~ElectricCurrantFenceSystem(ElectricCurrantFenceSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067fd3c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  removeAllFences(this);
  std::
  vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
  ::~vector((vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
             *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ElectricCurrantFenceSystem::~ElectricCurrantFenceSystem() */

void __thiscall
ElectricCurrantFenceSystem::~ElectricCurrantFenceSystem(ElectricCurrantFenceSystem *this)

{
  ~ElectricCurrantFenceSystem(this);
  AK::FreeHook(this);
  return;
}


/* ElectricCurrantFenceSystem::onLevelEnded() */

void __thiscall ElectricCurrantFenceSystem::onLevelEnded(ElectricCurrantFenceSystem *this)

{
  removeAllFences(this);
  this[0x10] = (ElectricCurrantFenceSystem)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::doEndNodesExistForFence(Sexy::RtWeakPtr<ElectricCurrantFence>,
   std::set<Sexy::Point, point_compare, std::allocator<Sexy::Point> >&) */

void __thiscall
ElectricCurrantFenceSystem::doEndNodesExistForFence
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          set<Sexy::Point,point_compare,std::allocator<Sexy::Point>> *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  Board *pBVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(lVar2 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_18,(TPoint *)(lVar2 + 0x18));
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar2 = Board::GetPlantAt(pBVar4,local_20,local_1c,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 == 0) {
LAB_0419cf98:
    uVar3 = 0;
    std::set<Sexy::Point,point_compare,std::allocator<Sexy::Point>>::insert
              (param_3,(Point *)&local_20);
  }
  else {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"electriccurrant");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (bVar1) goto LAB_0419cf98;
    uVar3 = 1;
  }
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar2 = Board::GetPlantAt(pBVar4,local_18,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 != 0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"electriccurrant");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (!bVar1) goto LAB_0419cf50;
  }
  uVar3 = 0;
  std::set<Sexy::Point,point_compare,std::allocator<Sexy::Point>>::insert
            (param_3,(Point *)&local_18);
LAB_0419cf50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ElectricCurrantFenceSystem::RemoveUndamageableEntitiesFromList
          (ElectricCurrantFenceSystem *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RtObject *)*puVar3;
    if (this_00 != (RtObject *)0x0) {
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (((pZVar4 != (Zombie *)0x0) &&
          ((((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 != '\0' ||
             (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 != '\0')) ||
            (cVar2 = Zombie::HasCondition(pZVar4,0x65), cVar2 != '\0')) ||
           (cVar2 = RealObject::IsOnTeam(pZVar4,1), cVar2 != '\0')))) ||
         (((bVar1 = Sexy::RtObject::IsA<GridItem>(this_00), bVar1 &&
           (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 != (GridItem *)0x0)) &&
          (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(), cVar2 == '\0')))) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                             ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10)
        ;
      }
      else {
        FUN_0419a4a0((exception_ptr *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::getEntitiesToAttackInFence(Sexy::RtWeakPtr<ElectricCurrantFence>,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall
ElectricCurrantFenceSystem::getEntitiesToAttackInFence
          (ElectricCurrantFenceSystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,vector *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  TRect *extraout_x1;
  TRect *pTVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [8];
  uint local_20;
  int local_1c;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_38,(TPoint *)(lVar4 + 0x18));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)(lVar4 + 0x10));
  Sexy::Insets::Insets(aIStack_28,local_30,local_2c,1,1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar2 = FUN_041987a4(*(undefined1 *)(lVar4 + 0x3a));
  if (cVar2 == '\0') {
    local_20 = local_38 - local_30;
    pTVar5 = (TRect *)(ulong)local_20;
    iVar1 = local_2c;
  }
  else {
    local_1c = local_34 - local_2c;
    pTVar5 = extraout_x1;
    iVar1 = local_34;
  }
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_28,pTVar5);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle(param_3,uVar3,auStack_18,local_2c,iVar1);
  RemoveUndamageableEntitiesFromList(this,param_3);
  FUN_0419886c(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::HasAttackTargets(Sexy::Point) */

void __thiscall
ElectricCurrantFenceSystem::HasAttackTargets(ElectricCurrantFenceSystem *this,TPoint *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_38;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  bVar6 = false;
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_20);
    if (bVar1 <= bVar6) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar4);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar5 + 0x10),param_2);
    if (cVar2 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      iVar3 = getEntitiesToAttackInFence
                        (this,aRStack_28,
                         (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      bVar6 = 0 < iVar3;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_0419a050((__normal_iterator *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::DoFenceAttack(PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::DoFenceAttack
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  PlantAction *pPVar8;
  undefined8 *puVar9;
  long *plVar10;
  BoardEntity *pBVar11;
  RtWeakPtrBase *pRVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  BoardEntity *this_00;
  int iVar17;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  long lVar18;
  byte local_160 [8];
  Point aPStack_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  Insets aIStack_138 [16];
  undefined8 local_128 [3];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_110 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f8 [24];
  undefined8 local_e0;
  float local_d8;
  undefined1 auStack_d0 [80];
  undefined8 local_80 [15];
  long local_8;
  
  iVar17 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_158,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f8);
  local_128[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x18));
  while( true ) {
    local_80[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_128,(__normal_iterator *)local_80);
    if ((1 < iVar17) || (!bVar1)) break;
    pRVar12 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_128);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_e0,pRVar12);
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
    cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar18 + 0x10),(TPoint *)aPStack_158);
    if (cVar2 != '\0') {
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
      bVar3 = FUN_041987a8(*(undefined1 *)(lVar18 + 0x38));
      local_160[iVar17] = bVar3;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_80,(RtWeakPtrBase *)&local_e0);
      getEntitiesToAttackInFence(this,(PlantAction *)local_80,avStack_110 + (long)iVar17 * 0x18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
      iVar17 = iVar17 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
    FUN_0419a050((__normal_iterator *)local_128);
  }
  if (iVar17 == 2) {
    local_128[0] = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_110);
LAB_0419dba8:
    local_80[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_110);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_128,(__normal_iterator *)local_80);
    if (bVar1) {
      while( true ) {
        uVar13 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_f8);
        uVar14 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_f8);
        uVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_128);
        local_e0 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                             (uVar13,uVar14,uVar15);
        local_80[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_f8);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)local_80);
        if (!bVar1) break;
        if ((local_160[0] == 0) && (local_160[1] != '\0')) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_80,(__normal_iterator *)local_128);
          local_128[0] = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                                   ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_110
                                    ,local_80[0]);
          goto LAB_0419dba8;
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_80,(__normal_iterator *)&local_e0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_f8,local_80[0]);
        FUN_0419a4a0((__normal_iterator *)local_128);
        local_80[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_110);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_128,(__normal_iterator *)local_80);
        if (!bVar1) goto LAB_0419d804;
      }
      FUN_0419a4a0((__normal_iterator *)local_128);
      goto LAB_0419dba8;
    }
  }
  else {
    uVar16 = 0;
    if (iVar17 == 0) goto LAB_0419db20;
  }
LAB_0419d804:
  lVar18 = 0;
  uVar16 = 0;
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)avStack_110;
  do {
    bVar3 = local_160[lVar18];
    Plant::GetProps();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
    pPVar8 = (PlantAction *)FUN_0419885c(*(undefined8 *)(lVar7 + 0x70),bVar3 + 2);
    PlantAction::PlantAction((PlantAction *)local_80,pPVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
    operator|=(auStack_d0,0x80);
    local_d8 = *(float *)(this + 0x30) * local_d8;
    local_150 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_01);
    while( true ) {
      local_128[0] = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_01);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_150,(__normal_iterator *)local_128);
      if (!bVar1) break;
      uVar16 = uVar16 | bVar3;
      puVar9 = (undefined8 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
      this_00 = (BoardEntity *)*puVar9;
      (**(code **)(*(long *)this_00 + 0x110))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
      if ((bVar3 == 0) ||
         (cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10)), cVar2 == '\0')) {
        DoHitEffect(this,this_00);
        iVar4 = FUN_04198754(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
      }
      else {
        PlantElectricCurrant::NumbZombieIfPossible(param_1,this_00);
        DoHitEffect(this,this_00);
        iVar4 = FUN_04198754(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
      }
      if (2 < iVar4) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_128);
        iVar4 = BoardEntity::CalcColumnPosition(this_00);
        iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
        Sexy::Insets::Insets(aIStack_138,iVar4 + -1,iVar5 + -1,3,3);
        uVar6 = operator|(2,4);
        EntityFinder::GetEntitiesInGridSquares((__normal_iterator *)local_128,uVar6,aIStack_138);
        RemoveUndamageableEntitiesFromList(this,(vector *)local_128);
        local_148 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)local_128);
        local_140 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_128);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_148,(__normal_iterator *)&local_140),
              bVar1) {
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_148)
          ;
          pBVar11 = (BoardEntity *)*plVar10;
          if (pBVar11 != this_00) {
            local_d8 = local_d8 * 0.5;
            (**(code **)(*(long *)pBVar11 + 0x110))
                      (pBVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_e0);
            DoHitEffect(this,(BoardEntity *)*plVar10);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_148);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_128);
      }
      FUN_0419a4a0((__normal_iterator *)&local_150);
    }
    lVar18 = lVar18 + 1;
    this_01 = this_01 + 0x18;
    DamageInfo::~DamageInfo((DamageInfo *)&local_e0);
    PlantAction::~PlantAction((PlantAction *)local_80);
  } while ((int)lVar18 < iVar17);
LAB_0419db20:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_f8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_110);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::addFenceHelper(Sexy::Point, Sexy::Point, bool) */

void __thiscall
ElectricCurrantFenceSystem::addFenceHelper
          (ElectricCurrantFenceSystem *this,TPoint *param_2,TPoint *param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ElectricCurrantFence *pEVar4;
  char *pcVar5;
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_20,param_2);
  Sexy::Point::Point((Point *)&local_18,param_3);
  getPieceWithEndpoints(aRStack_30,this,aPStack_20,(Point *)&local_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  else {
    iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    GameObject::Create<ElectricCurrantFence>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pEVar4 = (ElectricCurrantFence *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::Point::Point(aPStack_20,param_2);
    Sexy::Point::Point((Point *)&local_18,param_3);
    ElectricCurrantFence::CreateFence(pEVar4,aPStack_20,(Point *)&local_18,param_4,this[0x34]);
    _ElectricCurrantLocation::_ElectricCurrantLocation((_ElectricCurrantLocation *)&local_18);
    local_18 = *(undefined8 *)param_2;
    local_10 = *(undefined8 *)param_3;
    std::
    vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
    ::push_back((vector<Sexy::RtWeakPtr<ElectricCurrantFence>,std::allocator<Sexy::RtWeakPtr<ElectricCurrantFence>>>
                 *)(this + 0x18),(RtWeakPtr *)aRStack_28);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), 0 < iVar3))
    {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_Plant_ElectricCurrant_Loop_Start");
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::addFence(PlantElectricCurrant*, PlantElectricCurrant*, bool) */

void __thiscall
ElectricCurrantFenceSystem::addFence
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1,
          PlantElectricCurrant *param_2,bool param_3)

{
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_28);
  Sexy::Point::Point(aPStack_20);
  getOrderedLocations(this,param_1,param_2,aPStack_28,aPStack_20);
  Sexy::Point::Point(aPStack_18,(TPoint *)aPStack_28);
  Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_20);
  addFenceHelper(this,aPStack_18,aPStack_10,param_3);
  PlantElectricCurrant::CreatePlantElectrifiedGlow(param_1);
  PlantElectricCurrant::CreatePlantElectrifiedGlow(param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::getNearestPlants(Sexy::Point&, std::vector<PlantElectricCurrant*,
   std::allocator<PlantElectricCurrant*> >&) */

void __thiscall
ElectricCurrantFenceSystem::getNearestPlants
          (ElectricCurrantFenceSystem *this,Point *param_1,vector *param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  Plant *this_00;
  PlantElectricCurrant *pPVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>>::clear
            ((vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>> *)param_2);
  std::vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>>::resize
            ((vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>> *)param_2,4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar2 = _FUN_0419eef0;
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar4) {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_2);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
      iVar9 = 0;
      while (bVar4 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar4) {
        plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if (*plVar8 != 0) {
          iVar9 = iVar9 + 1;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar9);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    if ((((this_00 != (Plant *)0x0) &&
         ((((*(int *)(this_00 + 0x114) != *(int *)param_1 ||
            (*(int *)(this_00 + 0x110) != *(int *)(param_1 + 4))) &&
           (*(long *)(this_00 + 0xa8) != 0)) &&
          ((cVar3 = Plant::IsSuspended(this_00), cVar3 == '\0' &&
           (cVar3 = GameObject::IsDestroyed((GameObject *)this_00), cVar3 == '\0')))))) &&
        (fVar2 < *(float *)(this_00 + 0xd8))) &&
       ((cVar3 = Plant::IsSwapping(this_00), cVar3 == '\0' &&
        (pPVar6 = Sexy::RtObject::Cast<PlantElectricCurrant>(*(RtObject **)(this_00 + 0xa8)),
        pPVar6 != (PlantElectricCurrant *)0x0)))) {
      lVar7 = *(long *)(pPVar6 + 0x10);
      iVar9 = *(int *)(param_1 + 4);
      iVar1 = *(int *)(lVar7 + 0x110);
      if (iVar1 == iVar9) {
        iVar9 = *(int *)(lVar7 + 0x114);
        if (iVar9 < *(int *)param_1) {
          plVar8 = (long *)FUN_041987fc(*(undefined8 *)param_2,3);
          if (*plVar8 == 0) {
LAB_0419edbc:
            *plVar8 = (long)pPVar6;
          }
          else if (*(int *)(*(long *)(*plVar8 + 0x10) + 0x114) < iVar9) {
            *plVar8 = (long)pPVar6;
          }
        }
        else if (*(int *)param_1 < iVar9) {
          plVar8 = (long *)FUN_041987fc(*(undefined8 *)param_2,1);
          if (*plVar8 == 0) goto LAB_0419edbc;
          if (iVar9 < *(int *)(*(long *)(*plVar8 + 0x10) + 0x114)) {
            *plVar8 = (long)pPVar6;
          }
        }
      }
      else if (*(int *)(lVar7 + 0x114) == *(int *)param_1) {
        if (iVar1 < iVar9) {
          plVar8 = (long *)FUN_041987fc(*(undefined8 *)param_2,0);
          if (*plVar8 == 0) goto LAB_0419edbc;
          if (*(int *)(*(long *)(*plVar8 + 0x10) + 0x110) < iVar1) {
            *plVar8 = (long)pPVar6;
            goto LAB_0419ecd0;
          }
        }
        if (iVar9 < iVar1) {
          plVar8 = (long *)FUN_041987fc(*(undefined8 *)param_2,2);
          if ((*plVar8 == 0) || (iVar1 < *(int *)(*(long *)(*plVar8 + 0x10) + 0x110)))
          goto LAB_0419edbc;
        }
      }
    }
LAB_0419ecd0:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::getNearestPlants(PlantElectricCurrant*,
   std::vector<PlantElectricCurrant*, std::allocator<PlantElectricCurrant*> >&) */

void __thiscall
ElectricCurrantFenceSystem::getNearestPlants
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1,vector *param_2)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  getNearestPlants(this,aPStack_10,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::AddNode(PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::AddNode(ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  PlantElectricCurrant *pPVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  uVar5 = local_20[0];
  puVar2 = (undefined8 *)FUN_041987fc(local_20[0],0);
  pPVar3 = (PlantElectricCurrant *)*puVar2;
  if (pPVar3 != (PlantElectricCurrant *)0x0) {
    puVar2 = (undefined8 *)FUN_041987fc(uVar5,2);
    if ((PlantElectricCurrant *)*puVar2 != (PlantElectricCurrant *)0x0) {
      removeFenceBetweenPlants(this,pPVar3,(PlantElectricCurrant *)*puVar2);
      uVar5 = local_20[0];
    }
  }
  puVar2 = (undefined8 *)FUN_041987fc(uVar5,3);
  pPVar3 = (PlantElectricCurrant *)*puVar2;
  if (pPVar3 != (PlantElectricCurrant *)0x0) {
    puVar2 = (undefined8 *)FUN_041987fc(uVar5,1);
    if ((PlantElectricCurrant *)*puVar2 != (PlantElectricCurrant *)0x0) {
      removeFenceBetweenPlants(this,pPVar3,(PlantElectricCurrant *)*puVar2);
      uVar5 = local_20[0];
    }
  }
  lVar4 = 0;
  iVar6 = 0;
  puVar2 = (undefined8 *)FUN_041987fc(uVar5,0);
  pPVar3 = (PlantElectricCurrant *)*puVar2;
  while( true ) {
    if (pPVar3 != (PlantElectricCurrant *)0x0) {
      cVar1 = FUN_041987e8(param_1[0x30]);
      if (cVar1 == '\0') {
        cVar1 = FUN_041987e8(pPVar3[0x30]);
      }
      iVar6 = iVar6 + 1;
      addFence(this,pPVar3,param_1,(bool)cVar1);
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 4) break;
    puVar2 = (undefined8 *)FUN_041987fc(local_20[0],lVar4);
    pPVar3 = (PlantElectricCurrant *)*puVar2;
  }
  if (iVar6 != 0) {
    PlantElectricCurrant::CreatePlantElectrifiedGlow(param_1);
  }
  std::vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>>::~vector
            ((vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>> *)local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::RemoveNode(PlantElectricCurrant*) */

void __thiscall
ElectricCurrantFenceSystem::RemoveNode
          (ElectricCurrantFenceSystem *this,PlantElectricCurrant *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  ElectricCurrantFence *pEVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  PlantElectricCurrant *pPVar9;
  undefined8 uVar10;
  PlantElectricCurrant *pPVar11;
  Point aPStack_40 [8];
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  Sexy::Point::Point(aPStack_40,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                     *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) {
      lVar8 = 0;
      uVar10 = local_20[0];
      do {
        puVar6 = (undefined8 *)FUN_041987fc(uVar10,lVar8);
        if ((PlantElectricCurrant *)*puVar6 != (PlantElectricCurrant *)0x0) {
          removeFenceBetweenPlants(this,(PlantElectricCurrant *)*puVar6,param_1);
          uVar10 = local_20[0];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      puVar6 = (undefined8 *)FUN_041987fc(uVar10,0);
      pPVar9 = (PlantElectricCurrant *)*puVar6;
      if (pPVar9 != (PlantElectricCurrant *)0x0) {
        puVar6 = (undefined8 *)FUN_041987fc(uVar10,2);
        pPVar11 = (PlantElectricCurrant *)*puVar6;
        if (pPVar11 != (PlantElectricCurrant *)0x0) {
          cVar2 = FUN_041987e8(pPVar9[0x30]);
          if (cVar2 == '\0') {
            cVar2 = FUN_041987e8(pPVar11[0x30]);
          }
          addFence(this,pPVar9,pPVar11,(bool)cVar2);
          uVar10 = local_20[0];
        }
      }
      puVar6 = (undefined8 *)FUN_041987fc(uVar10,3);
      pPVar9 = (PlantElectricCurrant *)*puVar6;
      if (pPVar9 != (PlantElectricCurrant *)0x0) {
        puVar6 = (undefined8 *)FUN_041987fc(uVar10,1);
        pPVar11 = (PlantElectricCurrant *)*puVar6;
        if (pPVar11 != (PlantElectricCurrant *)0x0) {
          cVar2 = FUN_041987e8(pPVar9[0x30]);
          if (cVar2 == '\0') {
            cVar2 = FUN_041987e8(pPVar11[0x30]);
          }
          addFence(this,pPVar9,pPVar11,(bool)cVar2);
        }
      }
      if ((0 < iVar3) &&
         (iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)),
         iVar3 == 0)) {
        pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar7,"Play_Plant_ElectricCurrant_Loop_End");
      }
      std::vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>>::~vector
                ((vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>> *)local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 == '\0') {
LAB_0419f404:
      FUN_0419a050((__normal_iterator *)&local_38);
    }
    else {
      pEVar5 = (ElectricCurrantFence *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      Sexy::Point::Point((Point *)&local_28,(TPoint *)aPStack_40);
      cVar2 = ElectricCurrantFence::HasNode(pEVar5,(Point *)&local_28);
      if (cVar2 == '\0') goto LAB_0419f404;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
      local_38 = removeFence(this,(Point *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::RecreateFencesAfterNodeRemoval(Sexy::Point&) */

void __thiscall
ElectricCurrantFenceSystem::RecreateFencesAfterNodeRemoval
          (ElectricCurrantFenceSystem *this,Point *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  PlantElectricCurrant *pPVar4;
  PlantElectricCurrant *pPVar5;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  getNearestPlants(this,param_1,(vector *)local_20);
  uVar3 = local_20[0];
  puVar2 = (undefined8 *)FUN_041987fc(local_20[0],0);
  pPVar4 = (PlantElectricCurrant *)*puVar2;
  if (pPVar4 != (PlantElectricCurrant *)0x0) {
    puVar2 = (undefined8 *)FUN_041987fc(uVar3,2);
    pPVar5 = (PlantElectricCurrant *)*puVar2;
    if (pPVar5 != (PlantElectricCurrant *)0x0) {
      cVar1 = FUN_041987e8(pPVar4[0x30]);
      if (cVar1 == '\0') {
        cVar1 = FUN_041987e8(pPVar5[0x30]);
      }
      addFence(this,pPVar4,pPVar5,(bool)cVar1);
      uVar3 = local_20[0];
    }
  }
  puVar2 = (undefined8 *)FUN_041987fc(uVar3,3);
  pPVar4 = (PlantElectricCurrant *)*puVar2;
  if (pPVar4 != (PlantElectricCurrant *)0x0) {
    puVar2 = (undefined8 *)FUN_041987fc(uVar3,1);
    pPVar5 = (PlantElectricCurrant *)*puVar2;
    if (pPVar5 != (PlantElectricCurrant *)0x0) {
      cVar1 = FUN_041987e8(pPVar4[0x30]);
      if (cVar1 == '\0') {
        cVar1 = FUN_041987e8(pPVar5[0x30]);
      }
      addFence(this,pPVar4,pPVar5,(bool)cVar1);
    }
  }
  std::vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>>::~vector
            ((vector<PlantElectricCurrant*,std::allocator<PlantElectricCurrant*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::RemoveOrphanedFences() */

void __thiscall ElectricCurrantFenceSystem::RemoveOrphanedFences(ElectricCurrantFenceSystem *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  TPoint *pTVar5;
  char *pcVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  while( true ) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_40);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,pRVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
    cVar2 = doEndNodesExistForFence(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40,amStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_48);
      local_50 = removeFence(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    else {
      FUN_0419a050((__normal_iterator *)&local_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  local_48 = std::set<Sexy::Point,point_compare,std::allocator<Sexy::Point>>::begin
                       ((set<Sexy::Point,point_compare,std::allocator<Sexy::Point>> *)amStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    pTVar5 = (TPoint *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    Sexy::Point::Point((Point *)&local_40,pTVar5);
    RecreateFencesAfterNodeRemoval(this,(Point *)&local_40);
    FUN_0419882c((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  if ((0 < iVar3) &&
     (iVar3 = FUN_04198804(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), iVar3 == 0))
  {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Plant_ElectricCurrant_Loop_End");
  }
  std::set<Sexy::Point,point_compare,std::allocator<Sexy::Point>>::~set
            ((set<Sexy::Point,point_compare,std::allocator<Sexy::Point>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::onRailcartMoved(GridItemRailcart*) */

void __thiscall
ElectricCurrantFenceSystem::onRailcartMoved
          (ElectricCurrantFenceSystem *this,GridItemRailcart *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_00;
  RtObject *this_01;
  PlantElectricCurrant *this_02;
  Board *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_04198758(*(undefined4 *)(param_1 + 0x130));
  iVar4 = FUN_0419875c(*(undefined4 *)(param_1 + 0x134));
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_03,iVar3,iVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    nop();
    bVar1 = Plant::IsSuspended(this_00);
    if ((bVar1 < (this_01 != (RtObject *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<PlantElectricCurrant>(this_01), bVar2)) {
      this_02 = Sexy::RtObject::Cast<PlantElectricCurrant>(this_01);
      RemoveOrphanedFences(this);
      PlantElectricCurrant::RemovePlantElectrifiedGlow(this_02);
      AddNode(this,this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricCurrantFenceSystem::onMechanismPlankMoved(GridItemMechanismPlank*) */

void __thiscall
ElectricCurrantFenceSystem::onMechanismPlankMoved
          (ElectricCurrantFenceSystem *this,GridItemMechanismPlank *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_00;
  RtObject *this_01;
  PlantElectricCurrant *this_02;
  Board *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_04198758(*(undefined4 *)(param_1 + 0x130));
  iVar4 = FUN_0419875c(*(undefined4 *)(param_1 + 0x134));
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_03,iVar3,iVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    nop();
    bVar1 = Plant::IsSuspended(this_00);
    if ((bVar1 < (this_01 != (RtObject *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<PlantElectricCurrant>(this_01), bVar2)) {
      this_02 = Sexy::RtObject::Cast<PlantElectricCurrant>(this_01);
      RemoveOrphanedFences(this);
      PlantElectricCurrant::RemovePlantElectrifiedGlow(this_02);
      AddNode(this,this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

