// Class: GravestoneModule


/* GravestoneModule::initializeModule() */

void __thiscall GravestoneModule::initializeModule(GravestoneModule *this)

{
  this[0x1c] = (GravestoneModule)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* GravestoneModule::areAllZombieSpawnersDestroyed() */

bool __thiscall GravestoneModule::areAllZombieSpawnersDestroyed(GravestoneModule *this)

{
  return *(int *)(this + 0x18) == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneModule::StaticClassInit() */

void GravestoneModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GravestoneModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03dd8a40,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GravestoneModule::StaticGetClass() */

long * GravestoneModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GravestoneModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneModule::addGraveStones(std::string const&, int, int, int, Sexy::MTRand&) */

GravestoneModule * __thiscall
GravestoneModule::addGraveStones
          (GravestoneModule *this,string *param_1,int param_2,int param_3,int param_4,
          MTRand *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  for (iVar6 = param_2 + -1; iVar6 < param_3; iVar6 = iVar6 + 1) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      bVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar3,false);
      this = (GravestoneModule *)(ulong)bVar1;
      if (bVar1 != 0) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar4;
    } while (iVar4 != 10);
  }
  iVar6 = 0;
  if (param_4 < iVar5) {
    iVar5 = param_4;
  }
  for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    do {
      iVar3 = Sexy::MTRand::Next(param_5,(long)((param_3 - param_2) + 1));
      iVar4 = Sexy::MTRand::Next(param_5,10);
      cVar2 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),param_2 + iVar3,iVar4,false);
    } while (cVar2 == '\0');
    this = (GravestoneModule *)
           Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),param_1,param_2 + iVar3,iVar4,1);
  }
  return this;
}


/* GravestoneModule::GravestoneModule() */

void __thiscall GravestoneModule::GravestoneModule(GravestoneModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677df40;
  return;
}


/* GravestoneModule::StaticNew() */

GravestoneModule * GravestoneModule::StaticNew(void)

{
  GravestoneModule *this;
  
  this = ::operator_new(0x20);
  GravestoneModule(this);
  return this;
}


/* GravestoneModule::~GravestoneModule() */

void __thiscall GravestoneModule::~GravestoneModule(GravestoneModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677df40;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* GravestoneModule::~GravestoneModule() */

void __thiscall GravestoneModule::~GravestoneModule(GravestoneModule *this)

{
  ~GravestoneModule(this);
  AK::FreeHook(this);
  return;
}


/* GravestoneModule::onGravestoneDestroyed(GridItemGravestone*) */

void __thiscall
GravestoneModule::onGravestoneDestroyed(GravestoneModule *this,GridItemGravestone *param_1)

{
  bool bVar1;
  
  if ((param_1 != (GridItemGravestone *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<GridItemGravestoneZombieTimeSpawner>((RtObject *)param_1), bVar1))
  {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  }
  return;
}


/* GravestoneModule::GetDefaultGravestoneTypeName() const */

void GravestoneModule::GetDefaultGravestoneTypeName(void)

{
  LevelModule *in_x0;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  GravestoneProperties::GetDefaultGravestoneTypeName();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneModule::spawnGravestones() */

void __thiscall GravestoneModule::spawnGravestones(GravestoneModule *this)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *this_00;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *__s;
  ulong uVar7;
  string asStack_13b8 [8];
  string asStack_13b0 [8];
  string asStack_13a8 [8];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = 0;
  GetDefaultGravestoneTypeName();
  cVar1 = std::vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>>::empty
                    ((vector<GravestoneForceSpawnData,std::allocator<GravestoneForceSpawnData>> *)
                     (this_00 + 0x58));
  if (cVar1 == '\0') {
    uVar7 = 0;
    lVar3 = FUN_03dd8358(*(undefined8 *)(this_00 + 0x58),*(undefined8 *)(this_00 + 0x60));
    if (lVar3 != 0) {
      do {
        FUN_05475d88(asStack_13b0,asStack_13b8);
        lVar3 = FUN_03dd8380(*(undefined8 *)(this_00 + 0x58),uVar7);
        cVar1 = Board::CanAddGraveStoneAt
                          (*(Board **)(gLawnApp + 0x9f0),*(int *)(lVar3 + 8),*(int *)(lVar3 + 0xc),
                           false);
        if (cVar1 == '\0') {
          Sexy::StrFormat("Failed to add gravestone at [%d,%d]",asStack_13a8,
                          (ulong)*(uint *)(lVar3 + 8),(ulong)*(uint *)(lVar3 + 0xc));
          __s = (char *)FUN_0547429c(asStack_13a8);
          fputs(__s,(FILE *)getaddrinfo);
          std::string::~string(asStack_13a8);
          std::string::~string(asStack_13b0);
        }
        else {
          lVar4 = FUN_05474184(lVar3);
          if (lVar4 != 0) {
            thunk_FUN_05475e00(asStack_13b0,lVar3);
          }
          iVar2 = iVar2 + 1;
          Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_13b0,*(int *)(lVar3 + 8),
                             *(int *)(lVar3 + 0xc),1);
          std::string::~string(asStack_13b0);
        }
        uVar7 = uVar7 + 1;
        uVar5 = FUN_03dd8358(*(undefined8 *)(this_00 + 0x58),*(undefined8 *)(this_00 + 0x60));
      } while (uVar7 < uVar5);
    }
  }
  if (0 < *(int *)(this_00 + 0x48)) {
    uVar6 = operator|(4,8);
    operator|(uVar6,0x10);
    uVar7 = CalcRandomSeed();
    Sexy::MTRand::MTRand(aMStack_13a0,uVar7 & 0xffffffff);
    iVar2 = GravestoneProperties::GetRemainingGravestonesToSpawn
                      ((GravestoneProperties *)this_00,iVar2);
    if (0 < iVar2) {
      addGraveStones(this,asStack_13b8,*(int *)(this_00 + 0x50) + -1,*(int *)(this_00 + 0x54) + -1,
                     iVar2,aMStack_13a0);
    }
  }
  std::string::~string(asStack_13b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneModule::registerForEvents() */

void __thiscall GravestoneModule::registerForEvents(GravestoneModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnGravestones);
  Sexy::Delegate0::Delegate0<GravestoneModule,void(GravestoneModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneModule::onGravestoneCreated(GridItemGravestone*) */

void __thiscall
GravestoneModule::onGravestoneCreated(GravestoneModule *this,GridItemGravestone *param_1)

{
  bool bVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (GridItemGravestone *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<GridItemGravestoneZombieTimeSpawner>((RtObject *)param_1), bVar1)
      ) && (*(int *)(this + 0x18) = *(int *)(this + 0x18) + 1, this[0x1c] == (GravestoneModule)0x0))
  {
    pLVar2 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,areAllZombieSpawnersDestroyed);
    Sexy::Delegate0wRet<bool>::Delegate0wRet<GravestoneModule,bool(GravestoneModule::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
    this[0x1c] = (GravestoneModule)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

