// Class: PlantHypnoShroom


/* PlantHypnoShroom::ApplyPlantfood() */

void __thiscall PlantHypnoShroom::ApplyPlantfood(PlantHypnoShroom *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantHypnoShroom::PlantHypnoShroom() */

void __thiscall PlantHypnoShroom::PlantHypnoShroom(PlantHypnoShroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06809840;
  return;
}


/* PlantHypnoShroom::StaticNew() */

PlantHypnoShroom * PlantHypnoShroom::StaticNew(void)

{
  PlantHypnoShroom *this;
  
  this = ::operator_new(0x28);
  PlantHypnoShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHypnoShroom::StaticClassInit() */

void PlantHypnoShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHypnoShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_04209d50,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHypnoShroom::StaticGetClass() */

long * PlantHypnoShroom::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHypnoShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHypnoShroom::GetClass() const */

long * PlantHypnoShroom::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantHypnoShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHypnoShroom::~PlantHypnoShroom() */

void __thiscall PlantHypnoShroom::~PlantHypnoShroom(PlantHypnoShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06809840;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHypnoShroom::~PlantHypnoShroom() */

void __thiscall PlantHypnoShroom::~PlantHypnoShroom(PlantHypnoShroom *this)

{
  ~PlantHypnoShroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantHypnoShroom::ChangeZombieTeam(Zombie*) const */

void __thiscall PlantHypnoShroom::ChangeZombieTeam(PlantHypnoShroom *this,Zombie *param_1)

{
  long lVar1;
  float fVar2;
  Zombie *pZVar3;
  
  Zombie::SetFacing(param_1,1);
  pZVar3._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,0x19,1);
  (**(code **)(*(long *)param_1 + 0x2f0))(param_1);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,param_1);
  MessageRouter::Broadcast<Plant*,Zombie*,Plant*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::PlantHypnoZombie,*(Plant **)(this + 0x10),
             param_1);
  RealObject::JoinTeam((RealObject *)param_1,1);
  lVar1 = FUN_0420a4f4(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar1 + 0x2b8) == '\0') {
    return;
  }
  fVar2 = (float)FUN_04209bb8(*(undefined4 *)(param_1 + 0x284));
  Zombie::SetHitpoints(param_1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHypnoShroom::isZombieBlacklisted(Zombie*) */

void __thiscall PlantHypnoShroom::isZombieBlacklisted(PlantHypnoShroom *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0420a4f4(*(undefined8 *)(this + 0x10));
  uVar3 = FUN_0420a1fc(*(undefined8 *)(lVar2 + 0x2c0));
  uVar4 = FUN_0420a24c(*(undefined8 *)(lVar2 + 0x2c8));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_0420a24c(*(undefined8 *)(lVar2 + 0x2c8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHypnoShroom::createFriendlyZombieFrom(Zombie*) */

void __thiscall PlantHypnoShroom::createFriendlyZombieFrom(PlantHypnoShroom *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  ZombieType *this_00;
  SexyVector3 *pSVar4;
  undefined8 uVar5;
  string *psVar6;
  char *__s;
  code *pcVar7;
  Zombie *pZVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a8);
  plVar3 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    if (plVar3 == (long *)0x0) {
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      __s = "tutorial_armor2";
      bVar1 = false;
      goto LAB_0420a97c;
    }
    StageModule::GetArmor2ZombieType();
    bVar1 = false;
  }
  else {
    if (plVar3 == (long *)0x0) {
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      __s = "tutorial_gargantuar";
      bVar1 = true;
LAB_0420a97c:
      std::string::string((string *)&local_90,__s);
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a8,(RtWeakPtr *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string((string *)&local_90);
      nop();
      goto LAB_0420a7a0;
    }
    bVar1 = true;
    (**(code **)(*plVar3 + 0xa8))(aRStack_68,plVar3);
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a8,(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
LAB_0420a7a0:
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_90);
  local_90 = FUN_04209b9c(*(undefined4 *)(param_1 + 0x50));
  local_8c = 0;
  local_8b = 1;
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)a_Stack_a8);
  pSVar4 = (SexyVector3 *)
           (*pcVar7)(plVar3,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68,0xfffffffb,
                     (SpawnZombieParams *)&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  RealObject::JoinTeam((RealObject *)pSVar4,1);
  Zombie::SetFacing((Zombie *)pSVar4,1);
  MessageRouter::Broadcast<Plant*,Zombie*,Plant*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::PlantHypnoZombie,*(Plant **)(this + 0x10),
             param_1);
  uVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  (**(code **)(*(long *)pSVar4 + 0x78))(pSVar4,uVar5);
  BoardEntity::PlaceOnBoard(pSVar4);
  pZVar8._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar8._0_4_,0,pSVar4,0x19,1);
  if (bVar1) {
    Zombie::ApplyCondition(pZVar8._0_4_,0,pSVar4,0x1c,1);
  }
  pcVar7 = *(code **)(*(long *)param_1 + 0x120);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)0x0,local_98,local_94,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68,4,
             aPStack_a0,0);
  (*pcVar7)(param_1,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHypnoShroom::TakeDamage(DamageInfo const&) */

void PlantHypnoShroom::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  Zombie *this;
  long lVar5;
  char *pcVar6;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if (*(RtObject **)in_x1 == (RtObject *)0x0) {
    Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17);
  }
  else {
    this = Sexy::RtObject::Cast<Zombie>(*(RtObject **)in_x1);
    cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17);
    if (((((cVar1 == '\0') && (this != (Zombie *)0x0)) &&
         (cVar1 = isZombieBlacklisted((PlantHypnoShroom *)param_1,this), cVar1 == '\0')) &&
        ((cVar1 = Zombie::IsBerserk(this), cVar1 == '\0' &&
         (cVar1 = Zombie::HasFogImmune(this), cVar1 == '\0')))) &&
       ((cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 == '\0' &&
        ((cVar1 = (**(code **)(*(long *)this + 0x508))(this), cVar1 == '\0' &&
         (cVar1 = Zombie::CanTakeFatalDamage(this), cVar1 != '\0')))))) {
      uVar7 = *(undefined8 *)(in_x1 + 0x10);
      bVar2 = TestFlag<DamageTypeFlags>(uVar7,0x40000);
      if ((bVar2) || (bVar2 = TestFlag<DamageTypeFlags>(uVar7,0x100000), bVar2)) {
        fVar8 = *(float *)(*(long *)(param_1 + 0x10) + 0xd8);
        if ((0.0 <= fVar8) && (fVar8 - *(float *)(in_x1 + 8) < 0.0)) {
          if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
            createFriendlyZombieFrom((PlantHypnoShroom *)param_1,this);
            pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar6,"Play_Plant_DarkAges_HypnoShroom_Transform_PlantFood");
          }
          else {
            fVar8 = 1.0;
            ChangeZombieTeam((PlantHypnoShroom *)param_1,this);
            uVar3 = FUN_04209b9c(*(undefined4 *)(this + 0x50));
            (**(code **)(*(long *)this + 0x198))(this,uVar3);
            iVar4 = FUN_04209ba4(*(undefined8 *)(param_1 + 0x10));
            if (iVar4 - 2U < 4) {
              fVar8 = *(float *)(&DAT_057533a0 + (ulong)(iVar4 - 2U) * 4);
            }
            fVar9 = (float)Zombie::GetExtraHitPointsmodifier(this);
            lVar5 = FUN_04209bac(*(undefined8 *)(this + 0x550));
            FUN_04209bb0(fVar8 * fVar9 * *(float *)(lVar5 + 0x18),this + 0x284);
            fVar9 = (float)Zombie::GetExtraHitPointsmodifier(this);
            lVar5 = FUN_04209bac(*(undefined8 *)(this + 0x550));
            Zombie::SetHitpoints(this,fVar8 * fVar9 * *(float *)(lVar5 + 0x18));
            uVar3 = FUN_04209bbc(*(undefined4 *)(this + 0xb0));
            fVar9 = (float)Zombie::GetExtraHitPointsmodifier(this);
            lVar5 = FUN_04209bac(*(undefined8 *)(this + 0x550));
            Zombie::setHelm((Zombie *)(fVar8 * fVar9 * *(float *)(lVar5 + 0x60)),this,uVar3);
            iVar4 = FUN_04209b9c(*(undefined4 *)(this + 0x50));
            if (1 < iVar4) {
              (**(code **)(*(long *)this + 0x430))(this,0);
            }
            pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar6,"Play_Plant_DarkAges_HypnoShroom_Transform");
          }
        }
      }
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}

