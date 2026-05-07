// Class: RailcartModule


/* RailcartModule::onClearBoard() */

void __thiscall RailcartModule::onClearBoard(RailcartModule *this)

{
  this[0x38] = (RailcartModule)0x0;
  return;
}


/* RailcartModule::StaticGetClass() */

long * RailcartModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RailcartModule",uVar2,StaticNew);
  return sClass;
}


/* RailcartModule::~RailcartModule() */

void __thiscall RailcartModule::~RailcartModule(RailcartModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06847e70;
  std::string::~string((string *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RailcartModule::~RailcartModule() */

void __thiscall RailcartModule::~RailcartModule(RailcartModule *this)

{
  ~RailcartModule(this);
  AK::FreeHook(this);
  return;
}


/* RailcartModule::RailcartModule() */

void __thiscall RailcartModule::RailcartModule(RailcartModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06847e70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  Set8BytesTo0(this + 0x30);
  this[0x38] = (RailcartModule)0x1;
  return;
}


/* RailcartModule::StaticNew() */

RailcartModule * RailcartModule::StaticNew(void)

{
  RailcartModule *this;
  
  this = ::operator_new(0x40);
  RailcartModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::renderRails(Sexy::Graphics*) */

void __thiscall RailcartModule::renderRails(RailcartModule *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  SalesProgressBar *this_00;
  ResourceInfo *pRVar7;
  RailcartModule *this_01;
  int iVar8;
  int iVar9;
  Board *this_02;
  float fVar10;
  int local_38 [2];
  int local_30 [2];
  int local_28 [2];
  float local_20;
  float local_1c;
  Point aPStack_18 [8];
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  lVar6 = LawnApp::GetImageInfoFromImageRef(gLawnApp);
  Sexy::Point::Point((Point *)local_38,(TPoint *)(lVar6 + 100));
  lVar6 = LawnApp::GetImageInfoFromImageRef(gLawnApp);
  Sexy::Point::Point((Point *)local_30,(TPoint *)(lVar6 + 100));
  lVar6 = LawnApp::GetImageInfoFromImageRef(gLawnApp);
  Sexy::Point::Point((Point *)local_28,(TPoint *)(lVar6 + 100));
  iVar8 = *(int *)(this_02 + 0xf8);
  if (0 < iVar8) {
    iVar5 = *(int *)(this_02 + 0xfc);
    iVar9 = 0;
    do {
      if (0 < iVar5) {
        iVar8 = 1;
        do {
          while( true ) {
            iVar4 = Board::GetGridSquareType(this_02,iVar9,iVar8 + -1);
            if (iVar4 != 4) break;
            ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                      ((ResistenceValueInfo *)&local_20);
            local_20 = (float)FUN_0440ff40((float)iVar2 * (float)iVar9 + 200.0);
            local_1c = (float)FUN_0440ff40((float)iVar3 * (float)(iVar8 + -1) + 160.0);
            Sexy::Point::Point(aPStack_18,0,0);
            if ((iVar8 + -2 == -1) ||
               (iVar5 = Board::GetGridSquareType(this_02,iVar9,iVar8 + -2), iVar5 != 4)) {
              fVar10 = (float)FUN_0440ff40((float)iVar3);
              this_00 = (SalesProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
              iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
              local_1c = (fVar10 + local_1c) - (float)iVar5;
              pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
            }
            else {
              if ((iVar8 < *(int *)(this_02 + 0xfc)) &&
                 (iVar5 = Board::GetGridSquareType(this_02,iVar9,iVar8), iVar5 == 4)) {
                iVar5 = thunk_FUN_0440f7fc(local_30[0] - local_38[0]);
                this_01 = this + 0x20;
              }
              else {
                iVar5 = thunk_FUN_0440f7fc(local_28[0] - local_38[0]);
                this_01 = this + 0x28;
              }
              local_20 = local_20 + (float)iVar5;
              pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
            }
            Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
            *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
            *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
            Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(int)local_20,(int)local_1c);
            Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
            iVar5 = *(int *)(this_02 + 0xfc);
            bVar1 = iVar5 <= iVar8;
            iVar8 = iVar8 + 1;
            if (bVar1) goto LAB_044105f8;
          }
          bVar1 = iVar8 < iVar5;
          iVar8 = iVar8 + 1;
        } while (bVar1);
LAB_044105f8:
        iVar8 = *(int *)(this_02 + 0xf8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::addToRenderQueue(RenderQueue*) */

void __thiscall RailcartModule::addToRenderQueue(RailcartModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] != (RailcartModule)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,renderRails);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<RailcartModule,void(RailcartModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,299999,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::placeRailsAndCarts() */

void __thiscall RailcartModule::placeRailsAndCarts(RailcartModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  LevelModuleManager *this_00;
  SingleHandedModule *pSVar7;
  int iVar8;
  Board *pBVar9;
  ulong uVar10;
  undefined8 uVar11;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RailcartProperties::GetDefaultRailcartTypeName();
  lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x112) == '\0')) {
    uVar11 = *(undefined8 *)(pRVar2 + 0x48);
    uVar10 = 0;
    uVar4 = FUN_0440fb7c(uVar11,*(undefined8 *)(pRVar2 + 0x50));
    if (uVar4 != 0) {
      do {
        puVar5 = (undefined4 *)FUN_0440fbac(uVar11,uVar10);
        iVar8 = puVar5[1];
        if ((int)puVar5[1] <= (int)puVar5[2]) {
          do {
            iVar1 = iVar8 + 1;
            Board::SetGridSquareType(pBVar9,*puVar5,iVar8,4);
            iVar8 = iVar1;
          } while (iVar1 <= (int)puVar5[2]);
          uVar11 = *(undefined8 *)(pRVar2 + 0x48);
          uVar4 = FUN_0440fb7c(uVar11,*(undefined8 *)(pRVar2 + 0x50));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
    uVar11 = *(undefined8 *)(pRVar2 + 0x60);
    uVar10 = 0;
    lVar3 = FUN_0440fbb8(uVar11,*(undefined8 *)(pRVar2 + 0x68));
    if (lVar3 != 0) {
      do {
        piVar6 = (int *)FUN_0440fbe0(uVar11,uVar10);
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        this_00 = (LevelModuleManager *)FUN_0440f85c(*(undefined8 *)(pBVar9 + 0xad8));
        if (this_00 == (LevelModuleManager *)0x0) {
LAB_04410a44:
          Board::AddGridItem(pBVar9,asStack_18,*piVar6,piVar6[1],1);
        }
        else {
          pSVar7 = LevelModuleManager::GetModuleByClass<SingleHandedModule>(this_00);
          if (pSVar7 == (SingleHandedModule *)0x0) {
            pBVar9 = *(Board **)(gLawnApp + 0x9f0);
            goto LAB_04410a44;
          }
          Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_18,*piVar6,piVar6[1],1);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(pSVar7 + 0x18),
                     (RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        uVar10 = uVar10 + 1;
        uVar11 = *(undefined8 *)(pRVar2 + 0x60);
        uVar4 = FUN_0440fbb8(uVar11,*(undefined8 *)(pRVar2 + 0x68));
      } while (uVar10 < uVar4);
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RailcartModule::AddResourceRequirements(RailcartModule *this,set *param_1)

{
  bool bVar1;
  string *psVar2;
  GridItemType *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RailcartProperties::GetDefaultRailcartTypeName();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this_00 = (GridItemType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    GridItemType::AddResourceRequirements(this_00,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::parseRailImages() */

void __thiscall RailcartModule::parseRailImages(RailcartModule *this)

{
  long lVar1;
  string *psVar2;
  EffectObjectType *this_00;
  long extraout_x0;
  undefined8 uVar3;
  InfoClass *pIVar4;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RailcartProperties::GetDefaultRailcartTypeName();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  this_00 = (EffectObjectType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  EffectObjectType::GetProps(this_00);
  nop();
  lVar1 = extraout_x0 + 0x98;
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_TOP",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_MID",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_BOTTOM",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::onPostLoad() */

void __thiscall RailcartModule::onPostLoad(RailcartModule *this)

{
  long lVar1;
  string *psVar2;
  EffectObjectType *this_00;
  long extraout_x0;
  undefined8 uVar3;
  InfoClass *pIVar4;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RailcartProperties::GetDefaultRailcartTypeName();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar2);
  this_00 = (EffectObjectType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  EffectObjectType::GetProps(this_00);
  nop();
  lVar1 = extraout_x0 + 0x98;
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_TOP",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_MID",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  uVar3 = FUN_0547429c(lVar1);
  Sexy::StrFormat("%s_BOTTOM",asStack_18,uVar3);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RailcartModule::onLoadComplete() */

void __thiscall RailcartModule::onLoadComplete(RailcartModule *this)

{
  parseRailImages(this);
  placeRailsAndCarts(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
RailcartModule::gatherPlantingRestrictions
          (RailcartModule *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  Board *this_00;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar2 = Board::GetGridSquareType(this_00,*(int *)param_1,*(int *)(param_1 + 4));
  if (iVar2 == 4) {
    LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    RailcartProperties::GetDefaultRailcartTypeName();
    lVar3 = Board::GetGridItemAt(this_00,asStack_10,*(int *)param_1,*(int *)(param_1 + 4));
    if (lVar3 == 0) {
      local_14 = 0x1d;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_14);
    }
    bVar1 = std::operator==((string *)(param_2 + 8),"bamboo");
    if ((bVar1) || (bVar1 = std::operator==((string *)(param_2 + 8),"sugarcane"), bVar1)) {
      local_14 = 0x20;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_14);
    }
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartModule::registerForEvents() */

void __thiscall RailcartModule::registerForEvents(RailcartModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<RailcartModule,void(RailcartModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<RailcartModule,void(RailcartModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<RailcartModule,void(RailcartModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClearBoard);
  Sexy::Delegate0::Delegate0<RailcartModule,void(RailcartModule::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearBoard,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

