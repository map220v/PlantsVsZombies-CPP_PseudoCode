// Class: MechanismPlankModule


/* MechanismPlankModule::StaticGetClass() */

long * MechanismPlankModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MechanismPlankModule",uVar2,StaticNew);
  return sClass;
}


/* MechanismPlankModule::MechanismPlankModule() */

void __thiscall MechanismPlankModule::MechanismPlankModule(MechanismPlankModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06792230;
  return;
}


/* MechanismPlankModule::StaticNew() */

MechanismPlankModule * MechanismPlankModule::StaticNew(void)

{
  MechanismPlankModule *this;
  
  this = ::operator_new(0x18);
  MechanismPlankModule(this);
  return this;
}


/* MechanismPlankModule::~MechanismPlankModule() */

void __thiscall MechanismPlankModule::~MechanismPlankModule(MechanismPlankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06792230;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* MechanismPlankModule::~MechanismPlankModule() */

void __thiscall MechanismPlankModule::~MechanismPlankModule(MechanismPlankModule *this)

{
  ~MechanismPlankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MechanismPlankModule::placeMechanismPlanksAndGears() */

void __thiscall MechanismPlankModule::placeMechanismPlanksAndGears(MechanismPlankModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Board *this_00;
  int iVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar8 = *(int *)(pRVar2 + 0x40);
  if (iVar8 < iVar8 + *(int *)(pRVar2 + 0x48)) {
    do {
      iVar5 = *(int *)(pRVar2 + 0x44);
      iVar6 = *(int *)(pRVar2 + 0x4c);
      iVar1 = iVar5;
      if (iVar5 < iVar5 + iVar6) {
        do {
          if (iVar1 != *(int *)(*(Board **)(gLawnApp + 0x9f0) + 0xfc) / 2) {
            Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar8,iVar1,6);
            iVar5 = *(int *)(pRVar2 + 0x44);
            iVar6 = *(int *)(pRVar2 + 0x4c);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar5 + iVar6);
      }
      uVar7 = 0;
      while( true ) {
        uVar4 = FUN_03ea8030(*(undefined8 *)(pRVar2 + 0x50),*(undefined8 *)(pRVar2 + 0x58));
        if (uVar4 <= uVar7) break;
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"mechanismplank");
        piVar3 = (int *)FUN_03ea803c(*(undefined8 *)(pRVar2 + 0x50),uVar7);
        Board::AddGridItem(this_00,asStack_10,iVar8,*piVar3,1);
        std::string::~string(asStack_10);
        nop();
        uVar7 = uVar7 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(pRVar2 + 0x40) + *(int *)(pRVar2 + 0x48));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MechanismPlankModule::registerForEvents() */

void __thiscall MechanismPlankModule::registerForEvents(MechanismPlankModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,placeMechanismPlanksAndGears);
  Sexy::Delegate0::Delegate0<MechanismPlankModule,void(MechanismPlankModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<MechanismPlankModule,void(MechanismPlankModule::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MechanismPlankModule::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
MechanismPlankModule::gatherPlantingRestrictions
          (MechanismPlankModule *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  Board *this_00;
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar3 = Board::GetGridSquareType(this_00,*(int *)param_1,*(int *)(param_1 + 4));
  if (iVar3 == 6) {
    std::string::string((string *)local_10,"mechanismplank");
    lVar4 = Board::GetGridItemAt(this_00,(string *)local_10,*(int *)param_1,*(int *)(param_1 + 4));
    std::string::~string((string *)local_10);
    nop();
    if (lVar4 == 0) {
      local_10[0] = 0x1d;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
    psVar1 = (string *)(param_2 + 8);
    bVar2 = std::operator==("cobcannon",psVar1);
    if (bVar2) {
      local_10[0] = 0x50;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
    bVar2 = std::operator==(psVar1,"bamboo");
    if ((bVar2) || (bVar2 = std::operator==(psVar1,"sugarcane"), bVar2)) {
      local_10[0] = 0x20;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

