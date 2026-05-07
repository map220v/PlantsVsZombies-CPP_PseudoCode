// Class: BoardArtifactManager


/* BoardArtifactManager::GetBoardArtifact() */

void __thiscall BoardArtifactManager::GetBoardArtifact(BoardArtifactManager *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactManager::StaticClassInit() */

void BoardArtifactManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactManager");
    (*pcVar2)(plVar1,asStack_10,FUN_04dcd90c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactManager::StaticGetClass() */

long * BoardArtifactManager::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactManager::GetClass() const */

long * BoardArtifactManager::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactManager::BoardArtifactManager() */

void __thiscall BoardArtifactManager::BoardArtifactManager(BoardArtifactManager *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069c4120;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}


/* BoardArtifactManager::StaticNew() */

BoardArtifactManager * BoardArtifactManager::StaticNew(void)

{
  BoardArtifactManager *this;
  
  this = ::operator_new(0x20);
  BoardArtifactManager(this);
  return this;
}


/* BoardArtifactManager::~BoardArtifactManager() */

void __thiscall BoardArtifactManager::~BoardArtifactManager(BoardArtifactManager *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4120;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BoardArtifactManager::~BoardArtifactManager() */

void __thiscall BoardArtifactManager::~BoardArtifactManager(BoardArtifactManager *this)

{
  ~BoardArtifactManager(this);
  AK::FreeHook(this);
  return;
}


/* BoardArtifactManager::DestroyArtifact() */

void __thiscall BoardArtifactManager::DestroyArtifact(BoardArtifactManager *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactManager::AddArtifact(int, bool) */

void __thiscall
BoardArtifactManager::AddArtifact(BoardArtifactManager *this,int param_1,bool param_2)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  int iVar2;
  long *plVar3;
  NameMapperBase *pNVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 != '\0') {
    pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
    std::string::string(asStack_18,"artifact_prismtower");
    iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (iVar2 == param_1) {
      Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithPrismTower");
      UIWidget::CreateWidget(asStack_18,param_2);
      nop();
    }
    else {
      pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
      std::string::string(asStack_18,"artifact_beehive");
      iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
      std::string::~string(asStack_18);
      nop();
      if (param_1 == iVar2) {
        Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithBeehive");
        UIWidget::CreateWidget(asStack_18,param_2);
        nop();
      }
      else {
        pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
        std::string::string(asStack_18,"artifact_calabash");
        iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
        std::string::~string(asStack_18);
        nop();
        if (param_1 == iVar2) {
          Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithCalabash");
          UIWidget::CreateWidget(asStack_18,param_2);
          nop();
        }
        else {
          pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
          std::string::string(asStack_18,"artifact_camera");
          iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
          std::string::~string(asStack_18);
          nop();
          if (param_1 == iVar2) {
            Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithCamera");
            UIWidget::CreateWidget(asStack_18,param_2);
            nop();
          }
          else {
            pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
            std::string::string(asStack_18,"artifact_swarm");
            iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
            std::string::~string(asStack_18);
            nop();
            if (param_1 == iVar2) {
              Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithSwarm");
              UIWidget::CreateWidget(asStack_18,param_2);
              nop();
            }
            else {
              pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
              std::string::string(asStack_18,"artifact_holo");
              iVar2 = NameMapperBase::GetIdForName(pNVar4,asStack_18);
              std::string::~string(asStack_18);
              nop();
              if (param_1 == iVar2) {
                Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIconWithHolo");
                UIWidget::CreateWidget(asStack_18,param_2);
                nop();
              }
              else {
                Sexy::RtName::RtName((RtName *)asStack_18,L"UIArtifactIcon");
                UIWidget::CreateWidget(asStack_18,param_2);
                nop();
              }
            }
          }
        }
      }
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName((RtName *)asStack_18);
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar3 + 0x1a0))(plVar3,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactManager::AddArtifact(std::string, bool) */

void __thiscall
BoardArtifactManager::AddArtifact(BoardArtifactManager *this,string *param_2,bool param_3)

{
  int iVar1;
  NameMapperBase *this_00;
  undefined8 uVar2;
  
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,param_2);
  if (iVar1 != -1) {
    AddArtifact(this,iVar1,param_3);
    return;
  }
  uVar2 = FUN_0547429c(param_2);
  Sexy::OutputDebugStrF((wchar_t *)"BoardArtifactManager::AddArtifact() %s is invalid",uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactManager::InitialArtifactIcon() */

void __thiscall BoardArtifactManager::InitialArtifactIcon(BoardArtifactManager *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  cVar1 = ArtifactMgr::IsArtifactDisabled();
  if (cVar1 == '\0') {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      EntityComponent_GroundEffect::GetEffect();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      FUN_05475d88(asStack_10,lVar3 + 0x10);
      AddArtifact(this,asStack_10,1);
      std::string::~string(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactManager::GetAnimateArtifactMower() */

void __thiscall BoardArtifactManager::GetAnimateArtifactMower(BoardArtifactManager *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactManager::InitialArtifactMower(Sexy::RtWeakPtr<AnimationMgr>) */

void __thiscall
BoardArtifactManager::InitialArtifactMower(BoardArtifactManager *this,RtWeakPtr *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  AnimationController *pAVar4;
  long *plVar5;
  AnimationMgr *this_01;
  RtObject *this_02;
  code *pcVar6;
  float fVar7;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  cVar1 = ArtifactMgr::IsArtifactDisabled();
  if (cVar1 == '\0') {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      EntityComponent_GroundEffect::GetEffect();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_prismtower");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (bVar2) {
        AnimateArtifactMowerWithPrismTower::Create();
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        EntityComponent_GroundEffect::GetEffect();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_guitar");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (bVar2) {
          AnimateArtifactMowerGuitar::Create();
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          EntityComponent_GroundEffect::GetEffect();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_calabash");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (bVar2) {
            AnimateArtifactMowerWithCalabash::Create();
          }
          else {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            EntityComponent_GroundEffect::GetEffect();
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_swarm");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            if (bVar2) {
              AnimateArtifactMowerSwarm::Create();
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              EntityComponent_GroundEffect::GetEffect();
              lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_holo");
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              if (bVar2) {
                AnimateArtifactMowerHolo::Create();
              }
              else {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                EntityComponent_GroundEffect::GetEffect();
                lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                bVar2 = std::operator==((string *)(lVar3 + 0x10),"artifact_soulbell");
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                if (bVar2) {
                  AnimateArtifactMowerSoulBell::Create();
                }
                else {
                  AnimateArtifactMower::Create();
                }
              }
            }
          }
        }
      }
      this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pAVar4 = (AnimationController *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar7 = (float)PVZ_EOT();
      AnimationController::SetDuration(pAVar4,fVar7);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
      if (bVar2) {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
        if (bVar2) {
          this_01 = (AnimationMgr *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          this_02 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          pAVar4 = Sexy::RtObject::Cast<AnimationController>(this_02);
          AnimationMgr::Add(this_01,pAVar4);
        }
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pcVar6 = *(code **)(*plVar5 + 0xa0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        EntityComponent_GroundEffect::GetEffect();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        FUN_05475d88(aRStack_10,lVar3 + 0x10);
        (*pcVar6)(plVar5,aRStack_10);
        std::string::~string((string *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar5 + 0x98))(plVar5,0);
        plVar5 = (long *)FUN_04dcc45c();
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x80))(plVar5,1);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

