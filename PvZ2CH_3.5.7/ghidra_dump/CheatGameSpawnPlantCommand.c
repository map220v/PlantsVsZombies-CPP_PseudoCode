// Class: CheatGameSpawnPlantCommand


/* CheatGameSpawnPlantCommand::~CheatGameSpawnPlantCommand() */

void __thiscall
CheatGameSpawnPlantCommand::~CheatGameSpawnPlantCommand(CheatGameSpawnPlantCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846e80;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameSpawnPlantCommand::~CheatGameSpawnPlantCommand() */

void __thiscall
CheatGameSpawnPlantCommand::~CheatGameSpawnPlantCommand(CheatGameSpawnPlantCommand *this)

{
  ~CheatGameSpawnPlantCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameSpawnPlantCommand::StaticGetClass() */

long * CheatGameSpawnPlantCommand::StaticGetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameSpawnPlantCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnPlantCommand::GetClass() const */

long * CheatGameSpawnPlantCommand::GetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameSpawnPlantCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnPlantCommand::CheatGameSpawnPlantCommand() */

void __thiscall
CheatGameSpawnPlantCommand::CheatGameSpawnPlantCommand(CheatGameSpawnPlantCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846e80;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameSpawnPlantCommand::StaticNew() */

CheatGameSpawnPlantCommand * CheatGameSpawnPlantCommand::StaticNew(void)

{
  CheatGameSpawnPlantCommand *this;
  
  this = ::operator_new(0x40);
  CheatGameSpawnPlantCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameSpawnPlantCommand::spawnPlant() */

void __thiscall CheatGameSpawnPlantCommand::spawnPlant(CheatGameSpawnPlantCommand *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  int iVar4;
  Board *pBVar5;
  int iVar6;
  RtWeakPtr aRStack_20 [8];
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    iVar6 = 0;
    do {
      iVar4 = 0;
      do {
        pBVar5 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_18,iVar6,iVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
        cVar2 = Board::CanPlantAt(pBVar5,aPStack_18,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          Board::TestSpawnPlant(*(Board **)(gLawnApp + 0x9f0),(string *)(this + 0x38),iVar6,iVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          goto LAB_043da374;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 10);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 5);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
LAB_043da374:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

