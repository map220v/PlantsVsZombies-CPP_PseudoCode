// Class: ArmrackModule


/* ArmrackModule::StaticGetClass() */

long * ArmrackModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArmrackModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmrackModule::addArmrack(int, int, int, Sexy::MTRand&) */

void __thiscall
ArmrackModule::addArmrack(ArmrackModule *this,int param_1,int param_2,int param_3,MTRand *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Board *this_00;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  for (iVar5 = param_1 + -1; iVar5 < param_2; iVar5 = iVar5 + 1) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      cVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),iVar5,iVar2,false);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar3;
    } while (iVar3 != 10);
  }
  if (param_3 < iVar4) {
    iVar4 = param_3;
  }
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    do {
      iVar2 = Sexy::MTRand::Next(param_4,(long)((param_2 - param_1) + 1));
      iVar3 = Sexy::MTRand::Next(param_4,10);
      cVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),param_1 + iVar2,iVar3,false);
    } while (cVar1 == '\0');
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"armrack");
    Board::AddGridItem(this_00,asStack_10,param_1 + iVar2,iVar3,1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArmrackModule::ArmrackModule() */

void __thiscall ArmrackModule::ArmrackModule(ArmrackModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677e0d0;
  return;
}


/* ArmrackModule::StaticNew() */

ArmrackModule * ArmrackModule::StaticNew(void)

{
  ArmrackModule *this;
  
  this = ::operator_new(0x18);
  ArmrackModule(this);
  return this;
}


/* ArmrackModule::~ArmrackModule() */

void __thiscall ArmrackModule::~ArmrackModule(ArmrackModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677e0d0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ArmrackModule::~ArmrackModule() */

void __thiscall ArmrackModule::~ArmrackModule(ArmrackModule *this)

{
  ~ArmrackModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmrackModule::spawnArmrack(int) */

void __thiscall ArmrackModule::spawnArmrack(ArmrackModule *this,int param_1)

{
  uint uVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ulong uVar4;
  int *piVar5;
  char *__s;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  Board *this_00;
  uint local_18;
  uint local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar2 = std::vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>>
          ::empty((vector<ArmrackProperties::ArmrackData,std::allocator<ArmrackProperties::ArmrackData>>
                   *)(pRVar3 + 0x50));
  if (cVar2 == '\0') {
    uVar10 = *(undefined8 *)(pRVar3 + 0x50);
    uVar11 = 0;
    uVar4 = FUN_03dda198(uVar10,*(undefined8 *)(pRVar3 + 0x58));
    if (uVar4 != 0) {
      do {
        piVar5 = (int *)FUN_03dda1c0(uVar10,uVar11);
        if (*piVar5 == param_1) {
          uVar12 = *(undefined8 *)(piVar5 + 2);
          for (uVar4 = 0; uVar6 = FUN_03dda1c8(uVar12,*(undefined8 *)(piVar5 + 4)), uVar4 < uVar6;
              uVar4 = uVar4 + 1) {
            Sexy::Point::Point((Point *)&local_18);
            lVar7 = FUN_03dda1c0(*(undefined8 *)(pRVar3 + 0x50),uVar11);
            puVar8 = (uint *)FUN_03dda1f0(*(undefined8 *)(lVar7 + 8),uVar4);
            local_18 = *puVar8;
            local_14 = puVar8[1];
            uVar1 = puVar8[3];
            cVar2 = Board::CanAddArmrackAt(*(Board **)(gLawnApp + 0x9f0),local_18,local_14);
            if (cVar2 == '\0') {
              Sexy::StrFormat("Failed to add armrack at [%d,%d]",asStack_10,(ulong)local_18,
                              (ulong)local_14);
              __s = (char *)FUN_0547429c(asStack_10);
              fputs(__s,(FILE *)getaddrinfo);
              std::string::~string(asStack_10);
              uVar10 = *(undefined8 *)(pRVar3 + 0x50);
              lVar7 = FUN_03dda1c0(uVar10,uVar11);
              uVar12 = *(undefined8 *)(lVar7 + 8);
            }
            else {
              this_00 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string(asStack_10,"armrack");
              lVar7 = Board::AddGridItem(this_00,asStack_10,local_18,local_14,uVar1);
              std::string::~string(asStack_10);
              nop();
              uVar10 = *(undefined8 *)(pRVar3 + 0x50);
              if (lVar7 == 0) {
                lVar7 = FUN_03dda1c0(uVar10,uVar11);
                uVar12 = *(undefined8 *)(lVar7 + 8);
              }
              else {
                lVar9 = FUN_03dda1c0(uVar10,uVar11);
                uVar12 = *(undefined8 *)(lVar9 + 8);
                lVar9 = FUN_03dda1f0(uVar12,uVar4);
                *(undefined4 *)(lVar7 + 0x194) = *(undefined4 *)(lVar9 + 8);
              }
            }
            piVar5 = (int *)FUN_03dda1c0(uVar10,uVar11);
          }
          uVar4 = FUN_03dda198(uVar10,*(undefined8 *)(pRVar3 + 0x58));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArmrackModule::finishLoad() */

void __thiscall ArmrackModule::finishLoad(ArmrackModule *this)

{
  spawnArmrack(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArmrackModule::registerForEvents() */

void __thiscall ArmrackModule::registerForEvents(ArmrackModule *this)

{
  LevelModuleManager *pLVar1;
  Board *this_00;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,finishLoad);
  Sexy::Delegate0::Delegate0<ArmrackModule,void(ArmrackModule::*)()>(aDStack_38,asStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_50,"KONGFU_ARMRACK");
  Board::LoadResourceGroupForGameplay(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

