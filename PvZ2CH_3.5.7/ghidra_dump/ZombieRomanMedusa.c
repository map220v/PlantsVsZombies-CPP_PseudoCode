// Class: ZombieRomanMedusa


/* ZombieRomanMedusa::onApplyCondition(ZombieConditions) */

void __thiscall ZombieRomanMedusa::onApplyCondition(undefined8 param_1,int param_2)

{
  if ((((param_2 != 0x21) && (param_2 != 2)) && (param_2 != 0x2f)) && (param_2 != 0x19)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieRomanMedusa::~ZombieRomanMedusa() */

void __thiscall ZombieRomanMedusa::~ZombieRomanMedusa(ZombieRomanMedusa *this)

{
  *(undefined ***)this = &PTR_GetClass_06a089f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanMedusa_06a09468;
  ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite((ZombieIceAgeTroglobite *)this);
  return;
}


/* non-virtual thunk to ZombieRomanMedusa::~ZombieRomanMedusa() */

void __thiscall ZombieRomanMedusa::~ZombieRomanMedusa(ZombieRomanMedusa *this)

{
  ~ZombieRomanMedusa(this + -0x10);
  return;
}


/* ZombieRomanMedusa::~ZombieRomanMedusa() */

void __thiscall ZombieRomanMedusa::~ZombieRomanMedusa(ZombieRomanMedusa *this)

{
  ~ZombieRomanMedusa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanMedusa::~ZombieRomanMedusa() */

void __thiscall ZombieRomanMedusa::~ZombieRomanMedusa(ZombieRomanMedusa *this)

{
  ~ZombieRomanMedusa(this + -0x10);
  return;
}


/* ZombieRomanMedusa::ZombieRomanMedusa() */

void __thiscall ZombieRomanMedusa::ZombieRomanMedusa(ZombieRomanMedusa *this)

{
  ZombieIceAgeTroglobite::ZombieIceAgeTroglobite((ZombieIceAgeTroglobite *)this);
  *(undefined ***)this = &PTR_GetClass_06a089f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanMedusa_06a09468;
  return;
}


/* ZombieRomanMedusa::StaticNew() */

ZombieRomanMedusa * ZombieRomanMedusa::StaticNew(void)

{
  ZombieRomanMedusa *this;
  
  this = ::operator_new(0x868);
  ZombieRomanMedusa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusa::StaticClassInit() */

void ZombieRomanMedusa::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanMedusa");
    (*pcVar2)(plVar1,asStack_10,FUN_04efa998,0x868,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusa::StaticGetClass() */

long * ZombieRomanMedusa::StaticGetClass(void)

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
  uVar2 = ZombieIceAgeTroglobite::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanMedusa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanMedusa::GetClass() const */

long * ZombieRomanMedusa::GetClass(void)

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
  uVar2 = ZombieIceAgeTroglobite::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanMedusa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusa::tryPetrify() */

void __thiscall ZombieRomanMedusa::tryPetrify(ZombieRomanMedusa *this)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  ZombieRomanMedusaPetrifyActionDefinition *pZVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombieRomanMedusaPetrifyActionDefinition>();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    fVar6 = (float)PVZ_EOT();
    if (*(float *)(this + 0x864) == fVar6) {
      fVar6 = (float)PVZ_T();
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      pZVar4 = Sexy::RtObject::Cast<ZombieRomanMedusaPetrifyActionDefinition>(pRVar3);
      fVar7 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x38));
      *(float *)(this + 0x864) = fVar7 + fVar6;
      ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x864) < fVar6) goto LAB_04efbb38;
    }
    else {
      ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x864) < fVar6) {
LAB_04efbb38:
        fVar6 = (float)PVZ_T();
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pZVar4 = Sexy::RtObject::Cast<ZombieRomanMedusaPetrifyActionDefinition>(pRVar3);
        fVar7 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x40));
        *(float *)(this + 0x864) = fVar7 + fVar6;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
          uVar5 = 1;
          goto LAB_04efbb00;
        }
      }
    }
  }
  uVar5 = 0;
LAB_04efbb00:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusa::FindPetrifyTarget() */

void ZombieRomanMedusa::FindPetrifyTarget(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  SharkMinion *in_x0;
  long lVar5;
  Zombie *this;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombieRomanMedusaPetrifyActionDefinition>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
  if (bVar1) {
    uVar9 = 0;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(lVar5 + 0x70));
    fVar11 = *(float *)(in_x0 + 0x1c);
    fVar10 = (float)FUN_04efa430(*(undefined4 *)(in_x0 + 0x18),fVar11,*(undefined4 *)(in_x0 + 0x20))
    ;
    local_30 = (int)(((float)local_30 + fVar10) - (float)local_28);
    local_2c = (int)(((float)local_2c + fVar11) - (float)local_24);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    iVar3 = SharkMinion::getRow(in_x0);
    (**(code **)(*(long *)in_x0 + 0xd0))(aRStack_38);
    EntityFinder::GetEntitiesTouchingRectangle
              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,2,(Insets *)&local_30,iVar3,
               iVar3 + local_34 + -1);
    uVar6 = local_20;
    lVar5 = FUN_04efa36c(local_20,local_18);
    if (lVar5 != 0) {
      do {
        FUN_04efa378(uVar6,uVar9);
        nop();
        uVar6 = operator|(1,0x200);
        uVar4 = operator|(uVar6,8);
        cVar2 = Zombie::MatchesAny(this,uVar4);
        if (((((in_x0 != (SharkMinion *)this) && (cVar2 == '\0')) &&
             (cVar2 = FUN_04efb0a4(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')) &&
            ((cVar2 = Zombie::CanTakeFatalDamage(this), cVar2 != '\0' &&
             (cVar2 = Zombie::HasCondition(this,3), cVar2 == '\0')))) &&
           ((cVar2 = Zombie::HasCondition(this,4), cVar2 == '\0' &&
            ((cVar2 = Zombie::HasCondition(this,0x25), cVar2 == '\0' &&
             (cVar2 = Zombie::HasCondition(this,0x27), cVar2 == '\0')))))) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          cVar2 = ClassRestrictionSet::IsIncluded
                            ((ClassRestrictionSet *)(lVar5 + 0x48),(GameObject *)this);
          if ((cVar2 != '\0') && (iVar3 = Zombie::GetFacing(this), iVar3 == 1)) {
            cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
            if (cVar2 == '\0') {
              pfVar8 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this);
              fVar10 = *pfVar8;
              this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)in_x8);
              pfVar8 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost(this_00);
              if (*pfVar8 <= fVar10) goto LAB_04efbde0;
            }
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          }
        }
LAB_04efbde0:
        uVar6 = local_20;
        uVar9 = uVar9 + 1;
        uVar7 = FUN_04efa36c(local_20,local_18);
      } while (uVar9 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusa::spawnGridItemThatZombiePushes(int) */

void __thiscall
ZombieRomanMedusa::spawnGridItemThatZombiePushes(ZombieRomanMedusa *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  string *psVar4;
  SexyVector3 *pSVar5;
  ZombieIceAgeTroglobiteProps *pZVar6;
  PlantWarsNetworkMgr *this_00;
  TRefNamedSymbolCollection<Reflection::REnum> *this_01;
  ZombieType *this_02;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_03;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  Zombie *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [12];
  int local_5c;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)local_30,"roman_armor4");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::string::~string((string *)local_30);
  nop();
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = FUN_04efa35c(*(undefined4 *)(this + 0x50));
  plVar9 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar9 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_68);
  pSVar5 = (SexyVector3 *)(*pcVar8)(plVar9,aRStack_40,0xfffffffb,(string *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(local_5c);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)iVar1,(float)iVar2,0.0);
  BoardEntity::PlaceOnBoard(pSVar5);
  pZVar6 = Zombie::GetProps<ZombieIceAgeTroglobiteProps>((Zombie *)this);
  FUN_05475d88(asStack_58,pZVar6 + 0x230);
  this_00 = (PlantWarsNetworkMgr *)Reflection::CRefSymbolDb::GetManualReflection();
  this_01 = (TRefNamedSymbolCollection<Reflection::REnum> *)
            PlantWarsNetworkMgr::GetEndPlayData(this_00);
  std::string::string(asStack_48,"ZombieConditions");
  this_02 = (ZombieType *)
            Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetNamed
                      (this_01,asStack_48,true);
  this_03 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)ZombieType::GetAudioGroups(this_02);
  lVar7 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(this_03,asStack_58)
  ;
  std::string::~string(asStack_48);
  nop();
  if (lVar7 == 0) {
    uVar3 = 0x25;
  }
  else {
    uVar3 = FUN_04efa2ec(*(undefined4 *)(lVar7 + 0x68));
  }
  pZVar10._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar10._0_4_,0,pSVar5,uVar3,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_48,(RtWeakPtrBase *)aRStack_50);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x848),(RtWeakPtr *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  uVar3 = ZombieIceAgeTroglobite::CalcRenderOrder((ZombieIceAgeTroglobite *)this);
  *(undefined4 *)(this + 0x844) = uVar3;
  std::string::~string(asStack_58);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanMedusa::onZombieInitialize() */

void __thiscall ZombieRomanMedusa::onZombieInitialize(ZombieRomanMedusa *this)

{
  undefined4 uVar1;
  
  ZombieIceAgeTroglobite::onZombieInitialize((ZombieIceAgeTroglobite *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x864) = uVar1;
  return;
}


/* ZombieRomanMedusa::updateState_Walk() */

void __thiscall ZombieRomanMedusa::updateState_Walk(ZombieRomanMedusa *this)

{
  char cVar1;
  
  cVar1 = tryPetrify(this);
  if (cVar1 != '\0') {
    return;
  }
  ZombieIceAgeTroglobite::updateState_Walk((ZombieIceAgeTroglobite *)this);
  return;
}

