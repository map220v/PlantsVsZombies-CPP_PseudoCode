// Class: CrazyOlafTest


/* CrazyOlafTest::onPlantDied(Plant*) */

void CrazyOlafTest::onPlantDied(Plant *param_1)

{
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return;
}


/* CrazyOlafTest::onZombieAddedToBoard(Zombie*) */

void CrazyOlafTest::onZombieAddedToBoard(Zombie *param_1)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


/* CrazyOlafTest::onZombieDied(Zombie*, DamageInfo const*) */

void CrazyOlafTest::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::StaticClassInit() */

void CrazyOlafTest::StaticClassInit(void)

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
    std::string::string(asStack_10,"CrazyOlafTest");
    (*pcVar2)(plVar1,asStack_10,FUN_03c8af70,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyOlafTest::StaticGetClass() */

long * CrazyOlafTest::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CrazyOlafTest",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::refreshDisplayText() */

void __thiscall CrazyOlafTest::refreshDisplayText(CrazyOlafTest *this)

{
  Effect_FloatingText *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::StrFormat("%d Planted",asStack_10,(ulong)*(uint *)(this + 0x50));
  Effect_FloatingText::SetText(pEVar1,asStack_10);
  std::string::~string(asStack_10);
  pEVar1 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::StrFormat("%d Dead Plants",asStack_10,(ulong)*(uint *)(this + 0x70));
  Effect_FloatingText::SetText(pEVar1,asStack_10);
  std::string::~string(asStack_10);
  pEVar1 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::StrFormat("%d Zombies Spawned",asStack_10,(ulong)*(uint *)(this + 0x60));
  Effect_FloatingText::SetText(pEVar1,asStack_10);
  std::string::~string(asStack_10);
  pEVar1 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  Sexy::StrFormat("%d Dead Zombies",asStack_10,(ulong)*(uint *)(this + 0x80));
  Effect_FloatingText::SetText(pEVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyOlafTest::CrazyOlafTest() */

void __thiscall CrazyOlafTest::CrazyOlafTest(CrazyOlafTest *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0675aca0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  return;
}


/* CrazyOlafTest::StaticNew() */

CrazyOlafTest * CrazyOlafTest::StaticNew(void)

{
  CrazyOlafTest *this;
  
  this = ::operator_new(0x90);
  CrazyOlafTest(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::destroyAllPlantsOfType(Sexy::RtWeakPtr<PlantType const>) */

void CrazyOlafTest::destroyAllPlantsOfType
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,RtWeakPtrBase *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtrBase aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar6 = local_20;
  lVar2 = FUN_03c88e48(local_20,local_18);
  if (lVar2 != 0) {
    do {
      FUN_03c88e54(uVar6,uVar5);
      nop();
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_28,param_3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (cVar1 != '\0') {
        FUN_03c88e54(local_20,uVar5);
        nop();
        BoardEntity::CalcGridPosition();
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,(Point *)aRStack_28);
        puVar4 = (undefined8 *)FUN_03c88e54(local_20,uVar5);
        (**(code **)(*(long *)*puVar4 + 0x48))((long *)*puVar4);
      }
      uVar6 = local_20;
      uVar5 = uVar5 + 1;
      uVar3 = FUN_03c88e48(local_20,local_18);
    } while (uVar5 < uVar3);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::pickRandomGridSquare(Sexy::RtWeakPtr<PlantType const>) */

void CrazyOlafTest::pickRandomGridSquare
               (Point *param_1,LevelModule *param_2,RtMixedPtrBase *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  int *piVar7;
  TPoint *pTVar8;
  int iVar9;
  Board *pBVar10;
  int local_34;
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(param_3);
  local_34 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_2);
  if (0 < *(int *)(pRVar6 + 0x8c)) {
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_2);
    piVar7 = eastl::min_alt<int>(&local_34,(int *)(pRVar6 + 0x8c));
    local_34 = *piVar7;
  }
  iVar5 = 0;
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
LAB_03c8a7a4:
    do {
      iVar2 = local_34;
      if (0 < local_34) {
        if (cVar3 != '\0') {
          iVar9 = 0;
          do {
            pBVar10 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::Point::Point(aPStack_30,iVar9,iVar5);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aPStack_28,(RtWeakPtrBase *)param_3);
            cVar4 = Board::CanPlantAt(pBVar10,aPStack_30,aPStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_28);
            if (cVar4 != '\0') {
              Sexy::Point::Point(aPStack_28,iVar9,iVar5);
              std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                        ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_28);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar2);
          iVar5 = iVar5 + 1;
          if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) <= iVar5) break;
          goto LAB_03c8a7a4;
        }
        iVar9 = 0;
        do {
          iVar1 = iVar9 + 1;
          Sexy::Point::Point(aPStack_28,iVar9,iVar5);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_28);
          iVar9 = iVar1;
        } while (iVar1 != iVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  cVar3 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (cVar3 == '\0') {
    iVar5 = FUN_03c88e70(local_20,local_18);
    iVar5 = Sexy::Rand(iVar5);
    pTVar8 = (TPoint *)FUN_03c88e7c(local_20,(long)iVar5);
    Sexy::Point::Point(param_1,pTVar8);
  }
  else {
    Sexy::Point::Point(param_1,-1,-1);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* CrazyOlafTest::~CrazyOlafTest() */

void __thiscall CrazyOlafTest::~CrazyOlafTest(CrazyOlafTest *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0675aca0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x38));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CrazyOlafTest::~CrazyOlafTest() */

void __thiscall CrazyOlafTest::~CrazyOlafTest(CrazyOlafTest *this)

{
  ~CrazyOlafTest(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::loadPlantType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall CrazyOlafTest::loadPlantType(CrazyOlafTest *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  long lVar3;
  Board *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x38);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_01 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)param_2);
      if (cVar1 != '\0') goto LAB_03c8aa1c;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Board::LoadResourceGroupForGameplay(this_02,(string *)(lVar3 + 0x10));
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)this_00,(RtWeakPtr *)param_2);
  }
LAB_03c8aa1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyOlafTest::pushFreeQueue(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall CrazyOlafTest::pushFreeQueue(CrazyOlafTest *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)(this + 0x20),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::plantAt(std::vector<Sexy::Point, std::allocator<Sexy::Point> > const&,
   Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
CrazyOlafTest::plantAt(CrazyOlafTest *this,undefined8 *param_1,RtWeakPtrBase *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  string *psVar10;
  undefined4 *puVar11;
  PlantPeapod *this_00;
  undefined8 uVar12;
  ulong uVar13;
  Board *pBVar14;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar12 = *param_1;
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  lVar6 = FUN_03c88e70(uVar12,param_1[1]);
  if (lVar6 != 0) {
    do {
      pBVar14 = *(Board **)(gLawnApp + 0x9f0);
      piVar7 = (int *)FUN_03c88e98(uVar12,uVar13);
      Sexy::Point::Point(aPStack_18,*piVar7,piVar7[1]);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
      cVar5 = Board::CanPlantAt(pBVar14,aPStack_18,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar5 != '\0') {
        pBVar14 = *(Board **)(gLawnApp + 0x9f0);
        piVar7 = (int *)FUN_03c88e98(*param_1,uVar13);
        iVar1 = *piVar7;
        iVar2 = piVar7[1];
        std::string::string((string *)aRStack_10,"");
        plVar9 = (long *)Board::GetPlantAt(pBVar14,iVar1,iVar2,(string *)aRStack_10);
        std::string::~string((string *)aRStack_10);
        nop();
        if (plVar9 != (long *)0x0) {
          Plant::GetType();
          cVar5 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_10,param_3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          if (cVar5 != '\0') {
            (**(code **)(*plVar9 + 0x48))(plVar9);
          }
        }
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_28,"wallnut");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        cVar5 = Sexy::RtWeakPtrBase::operator==(param_3,(RtWeakPtrBase *)aRStack_20);
        if (cVar5 == '\0') {
          psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string((string *)aPStack_18,"tallnut");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
          cVar5 = Sexy::RtWeakPtrBase::operator==(param_3,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          std::string::~string((string *)aPStack_18);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          std::string::~string(asStack_28);
          nop();
          if (cVar5 != '\0') goto LAB_03c8b5bc;
          psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string((string *)aRStack_10,"peapod");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
          std::string::~string((string *)aRStack_10);
          nop();
          if (plVar9 != (long *)0x0) {
            cVar5 = Sexy::RtWeakPtrBase::operator==(param_3,(RtWeakPtrBase *)aPStack_18);
            goto joined_r0x03c8b7a8;
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          std::string::~string(asStack_28);
          nop();
LAB_03c8b5bc:
          if (plVar9 == (long *)0x0) {
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            std::string::string((string *)aRStack_10,"peapod");
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            std::string::~string((string *)aRStack_10);
            nop();
          }
          else {
            Plant::GetType();
            cVar5 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_10,param_3);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            if (cVar5 == '\0') {
              psVar10 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              std::string::string((string *)aRStack_10,"peapod");
            }
            else {
              (**(code **)(*plVar9 + 0x48))(plVar9);
              psVar10 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              std::string::string((string *)aRStack_10,"peapod");
            }
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            std::string::~string((string *)aRStack_10);
            nop();
            cVar5 = Sexy::RtWeakPtrBase::operator==(param_3,(RtWeakPtrBase *)aPStack_18);
joined_r0x03c8b7a8:
            if (cVar5 != '\0') {
              nop();
              PlantPeapod::Upgrade(this_00);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
              break;
            }
          }
        }
        uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
        puVar11 = (undefined4 *)FUN_03c88e98(*param_1,uVar13);
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
        Board::AddPlant((Board *)0x0,uVar12,uVar3,uVar4,aRStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18)
        ;
      }
      uVar13 = uVar13 + 1;
      uVar12 = *param_1;
      uVar8 = FUN_03c88e70(uVar12,param_1[1]);
    } while (uVar13 < uVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::plantAt(Sexy::Point const&, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall CrazyOlafTest::plantAt(CrazyOlafTest *this,Point *param_1,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_3);
  plantAt(this,avStack_20,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::unloadPlantType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall CrazyOlafTest::unloadPlantType(CrazyOlafTest *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  long lVar3;
  Board *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x38);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_01 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)param_2);
      if (cVar1 != '\0') break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      Board::DeleteResourceGroupForGameplay(this_02,(string *)(lVar3 + 0x10));
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::erase((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)this_00,local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::popFreeQueue() */

void CrazyOlafTest::popFreeQueue(void)

{
  vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *this;
  char cVar1;
  long in_x0;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          *)(in_x0 + 0x20);
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::empty(this);
  if (cVar1 == '\0') {
    pRVar2 = (RtWeakPtrBase *)
             std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                       ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    erase(this,local_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::pickRandomPlantGroup() */

void CrazyOlafTest::pickRandomPlantGroup(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  LevelModule *in_x0;
  undefined8 *puVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Board::GetAllActivePlantGroups(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_34 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  if (0 < *(int *)(pRVar5 + 0x8c)) {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    piVar6 = eastl::min_alt<int>(&local_34,(int *)(pRVar5 + 0x8c));
    local_34 = *piVar6;
  }
  local_30 = FUN_03c89880(*puVar4);
  local_28 = FUN_03c898d0(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar3 = FUN_03c88dec(*(undefined4 *)(lVar7 + 0xa4));
    if (iVar3 < local_34) {
      std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::
      push_back((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
                &local_20,(RtWeakPtr *)this);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  cVar2 = std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::
          empty((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
                &local_20);
  if (cVar2 == '\0') {
    iVar3 = FUN_03c88ea0(local_20,local_18);
    iVar3 = Sexy::Rand(iVar3);
    pRVar8 = (RtWeakPtrBase *)FUN_03c88eac(local_20,(long)iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar8);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             &local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::pickValidPlantType() */

void CrazyOlafTest::pickValidPlantType(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  RtWeakPtrBase *pRVar9;
  RtWeakPtrBase *pRVar10;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          *)&local_68,(vector *)(in_x0 + 0x38));
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  if (0 < *(int *)(pRVar4 + 0x94)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,1);
    for (uVar11 = 0; uVar12 = local_50, uVar6 = FUN_03c88e48(local_50,local_48), uVar11 < uVar6;
        uVar11 = uVar11 + 1) {
      FUN_03c88e54(uVar12,uVar11);
      nop();
      Plant::GetType();
      local_78 = std::
                 map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                 ::find((map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                         *)amStack_38,(RtWeakPtr *)&local_80);
      local_70 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      cVar1 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_78,(exception_ptr *)&local_70);
      if (cVar1 == '\0') {
        piVar7 = (int *)std::
                        map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                        ::operator[]((map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                                      *)amStack_38,(RtWeakPtr *)&local_80);
        *piVar7 = *piVar7 + 1;
      }
      else {
        puVar5 = (undefined4 *)
                 std::
                 map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                 ::operator[]((map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                               *)amStack_38,(RtWeakPtr *)&local_80);
        *puVar5 = 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    }
    local_88 = std::
               map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
               ::begin((map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
                        *)amStack_38);
    while( true ) {
      local_70 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)&local_70);
      if (!bVar2) break;
      lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
      iVar3 = *(int *)(lVar8 + 8);
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
      uVar12 = local_68;
      if (*(int *)(pRVar4 + 0x94) <= iVar3) {
        uVar6 = 0;
        uVar11 = FUN_03c88e5c(local_68,local_60);
        if (uVar11 != 0) {
          do {
            pRVar9 = (RtWeakPtrBase *)FUN_03c88e68(uVar12,uVar6);
            pRVar10 = (RtWeakPtrBase *)
                      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
            cVar1 = Sexy::RtWeakPtrBase::operator==(pRVar9,pRVar10);
            if (cVar1 != '\0') {
              local_80 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)&local_68);
              local_78 = __gnu_cxx::
                         __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                      *)&local_80,uVar6);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_70,(__normal_iterator *)&local_78);
              std::
              vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
              ::erase((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)&local_68,local_70);
              uVar12 = local_68;
              uVar11 = FUN_03c88e5c(local_68,local_60);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar11);
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    std::
    map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
    ::~map((map<Sexy::RtWeakPtr<PlantType_const>,int,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType_const>const,int>>>
            *)amStack_38);
  }
  cVar1 = std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::empty((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)&local_68);
  if (cVar1 == '\0') {
    iVar3 = FUN_03c88e5c(local_68,local_60);
    iVar3 = Sexy::Rand(iVar3);
    pRVar9 = (RtWeakPtrBase *)FUN_03c88e68(local_68,(long)iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar9);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)&local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::registerForEvents() */

void __thiscall CrazyOlafTest::registerForEvents(CrazyOlafTest *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CrazyOlafTest,void(CrazyOlafTest::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<CrazyOlafTest,void(CrazyOlafTest::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CrazyOlafTest,void(CrazyOlafTest::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<CrazyOlafTest,void(CrazyOlafTest::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::initializeModule() */

void __thiscall CrazyOlafTest::initializeModule(CrazyOlafTest *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_02;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_03;
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  StandaloneEffect *pSVar8;
  long *plVar9;
  Effect_FloatingText *pEVar10;
  ResourceInfo *pRVar11;
  code *pcVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar15 = (float)PVZ_T();
  *(float *)(this + 0x18) = fVar15 + *(float *)(pRVar2 + 0x88);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  uVar3 = FUN_03c88dfc(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
  if (uVar3 == 0) {
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
              ((LevelEditorCardPlantInterface *)local_48);
    while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)local_48), bVar1) {
      ObjectTypeDirectoryIterator<PlantType>::operator*
                ((ObjectTypeDirectoryIterator<PlantType> *)local_48);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      if (pRVar11[0x30] == (ResourceInfo)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      }
      else {
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)avStack_38,(RtWeakPtr *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      }
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)local_48);
    }
  }
  else {
    for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      FUN_03c88e08(*(undefined8 *)(pRVar2 + 0x40),uVar13);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (*(char *)(lVar5 + 0x30) != '\0') {
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)avStack_38,(RtWeakPtr *)&local_20);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      uVar3 = FUN_03c88dfc(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
    }
  }
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(pRVar2 + 0x58))
  ;
  std::string::string((string *)local_48,"imitater");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  uVar3 = 0;
  while( true ) {
    uVar13 = FUN_03c88dfc(local_20,local_18);
    if (uVar13 <= uVar3) break;
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_03c88e10(local_20,uVar3);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    local_60 = std::
               remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>,Sexy::RtWeakPtr<PlantType_const>>
                         (uVar6,uVar7,aRStack_68);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_50,(__normal_iterator *)&local_60);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_48,(__normal_iterator *)&local_58);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    erase((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)avStack_38,local_50,local_48[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    uVar3 = uVar3 + 1;
  }
  iVar14 = 0;
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar6,uVar7);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  operator=((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)(this + 0x20),(vector *)avStack_38);
  if (0 < *(int *)(pRVar2 + 0x90)) {
    do {
      iVar14 = iVar14 + 1;
      popFreeQueue();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)&local_50);
      loadPlantType(this,(string *)local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    } while (iVar14 < *(int *)(pRVar2 + 0x90));
  }
  *(undefined4 *)(this + 0x80) = 0;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
  *(undefined4 *)(this + 0x70) = 0;
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78);
  *(undefined4 *)(this + 0x60) = 0;
  this_02 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68);
  *(undefined4 *)(this + 0x50) = 0;
  this_03 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_50)
  ;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_48,(float)*(int *)(gLawnApp + 0xd4) * 0.15,
             (float)*(int *)(gLawnApp + 0xd8) * 0.2);
  local_50 = local_48[0];
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)&local_50,900000);
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar12 = *(code **)(*plVar9 + 0x78);
  Sexy::Color::Color((Color *)local_48,5);
  (*pcVar12)(plVar9,(string *)local_48);
  pEVar10 = (Effect_FloatingText *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetStyle(pEVar10,8);
  local_50._4_4_ = local_50._4_4_ + (float)*(int *)(gLawnApp + 0xd8) * 0.08;
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)&local_50,900000);
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  pcVar12 = *(code **)(*plVar9 + 0x78);
  Sexy::Color::Color((Color *)local_48,0x80,0xff,0x80);
  (*pcVar12)(plVar9,(string *)local_48);
  pEVar10 = (Effect_FloatingText *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_FloatingText::SetStyle(pEVar10,8);
  local_50._4_4_ = local_50._4_4_ + (float)*(int *)(gLawnApp + 0xd8) * 0.08;
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_02,(RtWeakPtrBase *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)&local_50,900000);
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  pcVar12 = *(code **)(*plVar9 + 0x78);
  Sexy::Color::Color((Color *)local_48,7);
  (*pcVar12)(plVar9,(string *)local_48);
  pEVar10 = (Effect_FloatingText *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Effect_FloatingText::SetStyle(pEVar10,8);
  local_50 = CONCAT44(local_50._4_4_ + (float)*(int *)(gLawnApp + 0xd8) * 0.08,(undefined4)local_50)
  ;
  Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_03,(RtWeakPtrBase *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)&local_50,900000);
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  pcVar12 = *(code **)(*plVar9 + 0x78);
  Sexy::Color::Color((Color *)local_48,0xff,0x80,0xff);
  (*pcVar12)(plVar9,(string *)local_48);
  pEVar10 = (Effect_FloatingText *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  Effect_FloatingText::SetStyle(pEVar10,8);
  refreshDisplayText(this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::pickRandomPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall CrazyOlafTest::pickRandomPlant(CrazyOlafTest *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_4c;
  Plant *local_48;
  int local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,1);
  local_4c = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar3 + 0x8c)) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    piVar4 = eastl::min_alt<int>(&local_4c,(int *)(pRVar3 + 0x8c));
    local_4c = *piVar4;
  }
  uVar9 = local_38;
  uVar8 = 0;
  if (cVar1 == '\0') {
    lVar5 = FUN_03c88e48(local_38,local_30);
    if (lVar5 != 0) {
      do {
        FUN_03c88e54(uVar9,uVar8);
        nop();
        BoardEntity::CalcGridPosition();
        if (local_40[0] < local_4c) {
          std::vector<Plant*,std::allocator<Plant*>>::push_back
                    ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_48);
        }
        uVar9 = local_38;
        uVar8 = uVar8 + 1;
        uVar6 = FUN_03c88e48(local_38,local_30);
      } while (uVar8 < uVar6);
    }
  }
  else {
    while (uVar9 = local_38, uVar6 = FUN_03c88e48(local_38,local_30), uVar8 < uVar6) {
      FUN_03c88e54(uVar9,uVar8);
      nop();
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)local_40,(RtWeakPtrBase *)param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      if ((cVar1 == '\0') || (BoardEntity::CalcGridPosition(), local_4c <= local_40[0])) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
        std::vector<Plant*,std::allocator<Plant*>>::push_back
                  ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_48);
      }
    }
  }
  cVar1 = std::vector<Plant*,std::allocator<Plant*>>::empty
                    ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  if (cVar1 == '\0') {
    iVar2 = FUN_03c88e84(local_20,local_18);
    iVar2 = Sexy::Rand(iVar2);
    puVar7 = (undefined8 *)FUN_03c88e90(local_20,(long)iVar2);
    uVar9 = *puVar7;
  }
  else {
    uVar9 = 0;
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyOlafTest::pickAndPerformAction() */

void __thiscall CrazyOlafTest::pickAndPerformAction(CrazyOlafTest *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ResourceInfo *this_00;
  PowerTileSubsystem *pPVar9;
  GridIcelotusDropwater *pGVar10;
  long *plVar11;
  PlantGroup *pPVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  RtWeakPtr aRStack_58 [8];
  int local_50 [2];
  Point aPStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar13 = 0;
  while( true ) {
    uVar14 = *(undefined8 *)(pRVar5 + 0x70);
    uVar7 = FUN_03c88e18(uVar14,*(undefined8 *)(pRVar5 + 0x78));
    if (uVar7 <= uVar13) break;
    puVar6 = (undefined4 *)FUN_03c88e40(uVar14,uVar13);
    ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::AddItem
              ((ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *)aPStack_38,
               *puVar6,puVar6[1]);
    uVar13 = uVar13 + 1;
  }
  lVar8 = ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::GetSize
                    ((ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *)
                     aPStack_38);
  if (lVar8 != 0) {
    uVar2 = ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::PickItem
                      ((ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *)
                       aPStack_38);
    switch(uVar2) {
    case 0:
      pickRandomPlantGroup();
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      if (this_00 != (ResourceInfo *)0x0) {
        pPVar9 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
        pcVar15 = *(code **)(*(long *)pPVar9 + 0x88);
        FUN_03c893f0(aRStack_40,*(undefined4 *)(this_00 + 0xa4),*(undefined4 *)(this_00 + 0xa8));
        (*pcVar15)(pPVar9,aRStack_40);
        iVar3 = FUN_03c88dec(*(undefined4 *)(this_00 + 0xa4));
        iVar4 = FUN_03c88df0(*(undefined4 *)(this_00 + 0xa8));
        pGVar10 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar3,iVar4);
        if (pGVar10 != (GridIcelotusDropwater *)0x0) {
          (**(code **)(*(long *)pGVar10 + 0x48))();
        }
      }
      PlantGroup::FindValidPlantToShovel((PlantGroup *)this_00);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
      if (bVar1) {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        (**(code **)(*plVar11 + 0x150))();
        *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      break;
    case 1:
      pickValidPlantType();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_50);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)local_50);
        pickRandomGridSquare(aPStack_48,this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)local_50);
        plantAt(this,aPStack_48,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      break;
    case 2:
      pickValidPlantType();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_58);
        pickRandomGridSquare(local_50,this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        if ((-1 < local_50[0]) && (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 1;
            Sexy::Point::Point(aPStack_48,local_50[0],iVar3);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_58);
            plantAt(this,aPStack_48,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            iVar3 = iVar4;
          } while (iVar4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      break;
    case 3:
      pickRandomPlantGroup();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
      if (bVar1) {
        pPVar12 = (PlantGroup *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        ApplyPlantFoodToPlantGroup(pPVar12);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
  }
  ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle>::~ProbabilitySet
            ((ProbabilitySet<CrazyOlafTestProperties::TestActionsCrazyOlafStyle> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CrazyOlafTest::onUpdate() */

void __thiscall CrazyOlafTest::onUpdate(CrazyOlafTest *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x18) < fVar2) {
    pickAndPerformAction(this);
    fVar2 = (float)PVZ_T();
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(float *)(this + 0x18) = fVar2 + *(float *)(pRVar1 + 0x88);
  }
  refreshDisplayText(this);
  return;
}

