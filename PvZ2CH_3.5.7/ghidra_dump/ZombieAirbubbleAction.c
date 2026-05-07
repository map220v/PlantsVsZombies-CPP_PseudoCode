// Class: ZombieAirbubbleAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubbleAction::StaticClassInit() */

void ZombieAirbubbleAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAirbubbleAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04a71aa8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirbubbleAction::StaticGetClass() */

long * ZombieAirbubbleAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAirbubbleAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirbubbleAction::ZombieAirbubbleAction() */

void __thiscall ZombieAirbubbleAction::ZombieAirbubbleAction(ZombieAirbubbleAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06939cd0;
  return;
}


/* ZombieAirbubbleAction::StaticNew() */

ZombieAirbubbleAction * ZombieAirbubbleAction::StaticNew(void)

{
  ZombieAirbubbleAction *this;
  
  this = ::operator_new(0x18);
  ZombieAirbubbleAction(this);
  return this;
}


/* ZombieAirbubbleAction::~ZombieAirbubbleAction() */

void __thiscall ZombieAirbubbleAction::~ZombieAirbubbleAction(ZombieAirbubbleAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06939cd0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* ZombieAirbubbleAction::~ZombieAirbubbleAction() */

void __thiscall ZombieAirbubbleAction::~ZombieAirbubbleAction(ZombieAirbubbleAction *this)

{
  ~ZombieAirbubbleAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubbleAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void ZombieAirbubbleAction::WaveStart(WaveAction *param_1)

{
  int iVar1;
  int iVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  string *psVar8;
  SexyVector3 *this;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar4,uVar5);
  iVar1 = *(int *)(pFVar3 + 0x40);
  if (0 < iVar1) {
    do {
      uVar4 = local_20;
      uVar6 = FUN_04a71578(local_20,local_18);
      if (uVar9 < uVar6) {
        puVar7 = (undefined8 *)FUN_04a71584(uVar4,uVar9);
        if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)*puVar7 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)*puVar7);
          local_30 = *puVar7;
          plVar11 = *(long **)(gLawnApp + 0x9f0);
          local_28 = *(float *)(puVar7 + 1) + 400.0;
          pcVar10 = *(code **)(*plVar11 + 0x318);
          psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
          std::string::string(asStack_40,"wave_airbubble");
          ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
          (*pcVar10)(plVar11,aRStack_38,0xfffffffb,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          std::string::~string(asStack_40);
          nop();
          nop();
          puVar7 = (undefined8 *)FUN_04a71584(local_20,uVar9);
          std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)*puVar7);
          BoardEntity::PlaceOnBoard(this);
          FUN_04a71568(*(undefined4 *)(pFVar3 + 0x44),this + 0x284);
          Zombie::SetHitpoints((Zombie *)this,*(float *)(pFVar3 + 0x44));
          puVar7 = (undefined8 *)FUN_04a71584(local_20,uVar9);
          iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar7);
          puVar7 = (undefined8 *)FUN_04a71584(local_20,uVar9);
          iVar2 = SharkMinion::getRow((SharkMinion *)*puVar7);
          ZombieAirbubble::SetTargetColAndRow((ZombieAirbubble *)this,iVar1,iVar2);
          (**(code **)(*(long *)this + 0x78))(this,&local_30);
          fVar14 = *(float *)(pFVar3 + 0x48);
          fVar12 = (float)Sexy::Rand(*(float *)(pFVar3 + 0x4c) - fVar14);
          fVar13 = (float)Sexy::Rand(6.2831855);
          ZombieWaveAirbubble::SetFloatInfo((ZombieWaveAirbubble *)this,fVar12 + fVar14,fVar13);
          iVar1 = *(int *)(pFVar3 + 0x40);
        }
      }
      iVar2 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while (iVar2 + 1 < iVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirbubbleAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ZombieAirbubbleAction::AddResourceRequirements(ZombieAirbubbleAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieChildrenAirbubbleGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

