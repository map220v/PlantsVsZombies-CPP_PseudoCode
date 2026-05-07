// Class: ArtifactHydraulicSubSystem


/* ArtifactHydraulicSubSystem::InitHydraulic(std::vector<std::string, std::allocator<std::string >
   >, float) */

void __thiscall
ArtifactHydraulicSubSystem::InitHydraulic
          (undefined4 param_1,ArtifactHydraulicSubSystem *this,vector *param_3)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),param_3);
  *(undefined4 *)(this + 0x1c) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::StaticClassInit() */

void ArtifactHydraulicSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"swallZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_037f83c0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactHydraulicSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_037f85b8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHydraulicSubSystem::StaticGetClass() */

long * ArtifactHydraulicSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulicSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHydraulicSubSystem::GetClass() const */

long * ArtifactHydraulicSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulicSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHydraulicSubSystem::CanSpawnCollectable(std::string) */

bool __thiscall ArtifactHydraulicSubSystem::CanSpawnCollectable(undefined8 param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"frog");
  return !bVar1;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::canNotBeTargeted(Plant*) */

void __thiscall
ArtifactHydraulicSubSystem::canNotBeTargeted(ArtifactHydraulicSubSystem *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (Plant *)0x0) || (cVar1 = Plant::HasCondition(param_1,0x1d), cVar1 != '\0')) ||
     (cVar1 = Plant::HasCondition(param_1,2), cVar1 != '\0')) {
    uVar5 = true;
    goto LAB_037f7668;
  }
  Plant::GetType();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  bVar2 = std::operator==((string *)(lVar6 + 8),"smallChestnut");
  if (bVar2) {
    bVar3 = false;
    uVar8 = false;
    bVar2 = false;
    uVar9 = false;
    uVar10 = false;
    uVar11 = false;
LAB_037f76f8:
    uVar5 = true;
    uVar7 = bVar2;
    if (bVar3) {
LAB_037f7758:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      uVar7 = bVar2;
    }
  }
  else {
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    bVar3 = std::operator==((string *)(lVar6 + 8),"smallcactus");
    if (bVar3) {
      bVar3 = false;
      uVar8 = true;
      uVar9 = bVar2;
      uVar10 = bVar2;
      uVar11 = bVar2;
      goto LAB_037f76f8;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar2 = std::operator==((string *)(lVar6 + 8),"smallcherry");
    if (bVar2) {
      bVar3 = false;
      uVar10 = false;
      uVar11 = false;
      bVar2 = false;
      uVar8 = true;
      uVar9 = true;
      goto LAB_037f76f8;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar2 = std::operator==((string *)(lVar6 + 8),"dragonbabybruit");
    if (bVar2) {
      bVar3 = false;
      uVar10 = false;
      bVar2 = false;
      uVar8 = true;
      uVar9 = true;
      uVar11 = true;
      goto LAB_037f76f8;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    bVar2 = std::operator==((string *)(lVar6 + 8),"carrotmissile");
    if (bVar2) {
      bVar3 = false;
      bVar2 = false;
      uVar8 = true;
      uVar9 = true;
      uVar10 = true;
      uVar11 = true;
      goto LAB_037f76f8;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    bVar2 = std::operator==((string *)(lVar6 + 8),"hollybarrierleaf");
    if (bVar2) {
      bVar3 = false;
      uVar8 = true;
      bVar2 = true;
      uVar9 = true;
      uVar10 = true;
      uVar11 = true;
      goto LAB_037f76f8;
    }
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar4 = std::operator==((string *)(lVar6 + 8),"cobcannon");
    uVar8 = true;
    bVar2 = true;
    uVar9 = true;
    uVar10 = true;
    uVar11 = true;
    bVar3 = true;
    if (bVar4) goto LAB_037f76f8;
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar2 = std::operator==((string *)(lVar6 + 8),"imitater");
    uVar5 = bVar2;
    if (!bVar2) {
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      uVar5 = std::operator==((string *)(lVar6 + 8),"powerplant");
      if (!(bool)uVar5) {
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar5 = std::operator==((string *)(lVar6 + 8),"frog");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      bVar2 = true;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar7 = false;
    uVar11 = bVar2;
    uVar10 = bVar2;
    uVar9 = bVar2;
    uVar8 = bVar2;
    if (bVar2 != false) goto LAB_037f7758;
  }
  if ((bool)uVar7 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if ((bool)uVar10 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if ((bool)uVar11 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if ((bool)uVar9 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if ((bool)uVar8 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
LAB_037f7668:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* ArtifactHydraulicSubSystem::canNotBeTargeted(Zombie*) */

ulong __thiscall
ArtifactHydraulicSubSystem::canNotBeTargeted(ArtifactHydraulicSubSystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  string *psVar4;
  ZombieSwashbuckler *this_00;
  ulong uVar5;
  
  if ((param_1 != (Zombie *)0x0) &&
     ((cVar1 = FUN_037f7290(param_1[0x7e8]), cVar1 != '\0' ||
      ((((((cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0' &&
           (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)param_1), !bVar2))
          && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
         ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0' &&
          (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')))) &&
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0' &&
         ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0' &&
          (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0')))))) &&
       ((cVar1 = FUN_02fd3c5c(*(undefined4 *)(param_1 + 0x28)), cVar1 == '\0' &&
        (cVar1 = Zombie::HasCondition(param_1,0x3f), cVar1 == '\0')))))))) {
    psVar4 = (string *)Zombie::GetTypeName(param_1);
    bVar2 = std::operator==(psVar4,"radiated_small");
    if (!bVar2) {
      psVar4 = (string *)Zombie::GetTypeName(param_1);
      bVar2 = std::operator==(psVar4,"radiated_mid");
      if (!bVar2) {
        psVar4 = (string *)Zombie::GetTypeName(param_1);
        bVar2 = std::operator==(psVar4,"radiated_large");
        if ((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieBungee>((RtObject *)param_1), !bVar2)) {
          psVar4 = (string *)Zombie::GetTypeName(param_1);
          bVar2 = std::operator==(psVar4,"wave_elecshieldgenerator");
          if (!bVar2) {
            bVar2 = Sexy::RtObject::IsA<ZombieSwashbuckler>((RtObject *)param_1);
            if (!bVar2) {
              return 0;
            }
            this_00 = Sexy::RtObject::Cast<ZombieSwashbuckler>((RtObject *)param_1);
            if (*(code **)(*(long *)this_00 + 0x338) != ZombieSwashbuckler::IsSwingingIn) {
              bVar3 = (**(code **)(*(long *)this_00 + 0x338))();
              return (ulong)bVar3;
            }
            uVar5 = ZombieSwashbuckler::IsSwingingIn(this_00);
            return uVar5;
          }
        }
      }
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::ProductPlantPacket(Sexy::TRect<int>) */

void __thiscall
ArtifactHydraulicSubSystem::ProductPlantPacket(ArtifactHydraulicSubSystem *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Plant *this_00;
  float *pfVar5;
  long lVar6;
  Collectable *this_01;
  string *extraout_x0;
  string *psVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_88;
  undefined8 local_80;
  string asStack_78 [8];
  Vec3 aVStack_70 [16];
  Vec3 aVStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  DVec3 aDStack_40 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,param_2);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    nop();
    if (((this_00 != (Plant *)0x0) && (cVar2 = Plant::IsProtect(this_00), cVar2 == '\0')) &&
       (cVar2 = canNotBeTargeted(this,this_00), cVar2 == '\0')) {
      cVar2 = FUN_037f727c(this_00[0x568]);
      if (cVar2 == '\0') {
        uVar3 = FUN_037f7278(*(undefined4 *)(this_00 + 0x50));
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar11 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar8 = (float)Sexy::Rand(30.0);
        cVar2 = Plant::IsVine(this_00);
        fVar9 = 0.0;
        if (cVar2 != '\0') {
          iVar4 = Sexy::Rand(10);
          fVar9 = (float)(iVar4 + -0x23);
        }
        EATextSquish::Vec3::Vec3(aVStack_70,fVar8 + -15.0 + fVar11,fVar9 + fVar12,0.0);
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        FUN_05475d88(asStack_78,lVar6 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        (**(code **)(*(long *)this_00 + 0x1d8))(this_00);
        FUN_05475d88(aRStack_30,asStack_78);
        cVar2 = CanSpawnCollectable(this,aRStack_30);
        std::string::~string((string *)aRStack_30);
        if (cVar2 != '\0') {
          psVar7 = *(string **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_30,"artifacthydraulic_plant_packet");
          this_01 = (Collectable *)
                    Board::AddCollectableWithDefaultMotion(psVar7,(SexyVector3 *)aRStack_30);
          std::string::~string((string *)aRStack_30);
          nop();
          nop();
          CollectableSeedPacket::SetSeedType(extraout_x0);
          FUN_037f729c(extraout_x0 + 0x208,uVar3);
          FUN_037f7d38(*(undefined4 *)(this + 0x1c),extraout_x0 + 0x20c);
          uVar10 = 0;
          uVar3 = 0;
          EATextSquish::Vec3::Vec3(aVStack_60,0.0,0.0,0.0);
          local_50 = Sexy::SexyVector3::operator+
                               ((SexyVector3 *)aVStack_70,(SexyVector3 *)aVStack_60);
          local_4c = uVar3;
          local_48 = uVar10;
          DVec3::DVec3(aDStack_40);
          DVec3::DVec3((DVec3 *)aRStack_30);
          CalculateTossVelocity
                    ((SexyVector3 *)aVStack_70,(SexyVector3 *)&local_50,40.0,0.6,
                     (SexyVector3 *)aDStack_40,(SexyVector3 *)aRStack_30);
          Collectable::SetMotionNewtonian
                    (this_01,(SexyVector3 *)aDStack_40,(SexyVector3 *)aRStack_30,true);
          Collectable::SetKeepOnBoard(this_01,true);
        }
        std::string::~string(asStack_78);
      }
      else {
        (**(code **)(*(long *)this_00 + 0x48))(this_00);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::ProductZombiePacket(Sexy::TRect<int>) */

void ArtifactHydraulicSubSystem::ProductZombiePacket(long param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  Zombie *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  RtObject *this_02;
  Collectable *this_03;
  string *extraout_x0;
  ZombieCamelSubSystem *pZVar9;
  string *psVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
    if (cVar2 != '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      EATextSquish::Vec3::Vec3(aVStack_58,*pfVar4,pfVar4[1],0.0);
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      FUN_05475d88(asStack_60,lVar6 + 8);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      pZVar5 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar5,0,uVar7,0x9a,1);
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      (**(code **)(*plVar8 + 0x80))(plVar8,1);
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      Zombie::SetIsControlled(pZVar5,false);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      FUN_037f7288(lVar6 + 0x7e8,0);
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      Zombie::SetIgnoresAllDamage(pZVar5,true);
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      Zombie::SetIgnoresCollisions(pZVar5,true);
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      Zombie::SetIsTargetable(pZVar5,false);
      this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      bVar1 = Sexy::RtObject::IsA<ZombieCamel>(this_02);
      if (bVar1) {
        pZVar9 = Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
        ZombieCamelSubSystem::NotifyZombieLeftCamel(pZVar9,asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      psVar10 = *(string **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"artifacthydraulic_zombie_packet");
      this_03 = (Collectable *)
                Board::AddCollectableWithDefaultMotion(psVar10,(SexyVector3 *)asStack_18);
      std::string::~string(asStack_18);
      nop();
      nop();
      CollectableSeedRain::SetZombieSeedType(extraout_x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
      EffectAnimRig_FireWall::SetGridItemFireWall((EffectAnimRig_FireWall *)extraout_x0,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      uVar12 = 0;
      uVar11 = 0;
      EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
      local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_58,(SexyVector3 *)aVStack_48);
      local_34 = uVar11;
      local_30 = uVar12;
      DVec3::DVec3((DVec3 *)aRStack_28);
      DVec3::DVec3((DVec3 *)asStack_18);
      CalculateTossVelocity
                ((SexyVector3 *)aVStack_58,(SexyVector3 *)&local_38,40.0,0.6,
                 (SexyVector3 *)aRStack_28,(SexyVector3 *)asStack_18);
      Collectable::SetMotionNewtonian
                (this_03,(SexyVector3 *)aRStack_28,(SexyVector3 *)asStack_18,true);
      Collectable::SetKeepOnBoard(this_03,true);
      NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this_03);
      std::string::~string(asStack_60);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::SqueezeTarget() */

void __thiscall ArtifactHydraulicSubSystem::SqueezeTarget(ArtifactHydraulicSubSystem *this)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x14) + -1,*(int *)(this + 0x18) + -1,3,3);
  local_28 = local_18;
  uStack_20 = uStack_10;
  if (this[0x10] != (ArtifactHydraulicSubSystem)0x0) {
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    ProductZombiePacket(this,(Insets *)&local_18);
  }
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  ProductPlantPacket(this,(Insets *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::zombieIsBlacklisted(Zombie*) */

void __thiscall
ArtifactHydraulicSubSystem::zombieIsBlacklisted(ArtifactHydraulicSubSystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 == (Zombie *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar1)) ||
      (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar1)) ||
     (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)param_1), bVar1)) {
    bVar1 = true;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x38);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar2,uVar3,lVar4 + 8);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::ArtifactHydraulicSubSystem() */

void __thiscall
ArtifactHydraulicSubSystem::ArtifactHydraulicSubSystem(ArtifactHydraulicSubSystem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0669ccf0;
  Sexy::Point::Point((Point *)(this + 0x14));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<swallZombieData,std::allocator<swallZombieData>>::clear
            ((vector<swallZombieData,std::allocator<swallZombieData>> *)(this + 0x20));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  this[0x10] = (ArtifactHydraulicSubSystem)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x14) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHydraulicSubSystem::StaticNew() */

ArtifactHydraulicSubSystem * ArtifactHydraulicSubSystem::StaticNew(void)

{
  ArtifactHydraulicSubSystem *this;
  
  this = ::operator_new(0x68);
  ArtifactHydraulicSubSystem(this);
  return this;
}


/* ArtifactHydraulicSubSystem::~ArtifactHydraulicSubSystem() */

void __thiscall
ArtifactHydraulicSubSystem::~ArtifactHydraulicSubSystem(ArtifactHydraulicSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669ccf0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<swallZombieData,std::allocator<swallZombieData>>::~vector
            ((vector<swallZombieData,std::allocator<swallZombieData>> *)(this + 0x20));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactHydraulicSubSystem::~ArtifactHydraulicSubSystem() */

void __thiscall
ArtifactHydraulicSubSystem::~ArtifactHydraulicSubSystem(ArtifactHydraulicSubSystem *this)

{
  ~ArtifactHydraulicSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::Update() */

void __thiscall ArtifactHydraulicSubSystem::Update(ArtifactHydraulicSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      fVar4 = *(float *)(lVar2 + 8);
      fVar3 = (float)PVZ_T();
      if (fVar3 <= fVar4) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<swallZombieData,std::allocator<swallZombieData>>::erase
                           ((vector<swallZombieData,std::allocator<swallZombieData>> *)this_00,
                            local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::SqueezeZombie(Sexy::RtWeakPtr<Zombie>, float, float) */

void __thiscall
ArtifactHydraulicSubSystem::SqueezeZombie
          (DamageInfo *param_1,float param_2,ArtifactHydraulicSubSystem *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_4)

{
  char cVar1;
  bool bVar2;
  Zombie *this_00;
  SexyVector3 *pSVar3;
  RtObject *pRVar4;
  ZombiePirateBarrelPusher *pZVar5;
  code *pcVar6;
  Point aPStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  DamageInfo aDStack_70 [8];
  float local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
  if (((this_00 != (Zombie *)0x0) &&
      (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) {
    cVar1 = Zombie::IsInvisible(this_00);
    if (cVar1 == '\0') {
      pcVar6 = *(code **)(*(long *)this_00 + 0x110);
      Sexy::Point::Point(aPStack_80,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
      DamageInfo::DamageInfo(param_1._0_4_,local_78,local_74,aDStack_70,aPStack_80,0);
      (*pcVar6)(this_00,aDStack_70);
      DamageInfo::~DamageInfo(aDStack_70);
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      if (((((cVar1 == '\0') &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
           ((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
            ((cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0' &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')))))) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
         ((((cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0' &&
            (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
        Zombie::GetCurrentTitleStatus();
        if (((local_58 == '\0') && (cVar1 = Zombie::IsInWater(this_00), cVar1 == '\0')) &&
           (cVar1 = FUN_02fd3c5c(*(undefined4 *)(this_00 + 0x28)), cVar1 == '\0')) {
          cVar1 = zombieIsBlacklisted(this,this_00);
          TitleStatus::~TitleStatus((TitleStatus *)aDStack_70);
          if (cVar1 == '\0') {
            bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrelPusher>((RtObject *)this_00);
            if (bVar2) {
              pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>((RtObject *)this_00);
              ZombiePirateBarrelPusher::disconnectBarrel(pZVar5);
            }
            bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00);
            if (bVar2) {
              Sexy::RtObject::Cast<ZombiePirateBarrel>((RtObject *)this_00);
              ZombiePirateBarrel::GetPusherZombie();
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aDStack_70);
              if (bVar2) {
                pRVar4 = (RtObject *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_70);
                bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrelPusher>(pRVar4);
                if (bVar2) {
                  pRVar4 = (RtObject *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_70);
                  pZVar5 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>(pRVar4);
                  ZombiePirateBarrelPusher::disconnectBarrel(pZVar5);
                }
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_70);
            }
            Zombie::SetIsControlled(this_00,true);
            pSVar3 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            Zombie::StuckIntoGround_2(this_00,pSVar3,param_2,0.0,65.0,0.0,true);
            FishingZombieInitData::FishingZombieInitData((FishingZombieInitData *)aDStack_70);
            local_68 = (float)PVZ_T();
            local_68 = local_68 + param_2;
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aDStack_70,(RtWeakPtr *)param_4);
            std::vector<swallZombieData,std::allocator<swallZombieData>>::push_back
                      ((vector<swallZombieData,std::allocator<swallZombieData>> *)(this + 0x20),
                       (swallZombieData *)aDStack_70);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aDStack_70);
          }
        }
        else {
          TitleStatus::~TitleStatus((TitleStatus *)aDStack_70);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicSubSystem::SquishTarget() */

void __thiscall ArtifactHydraulicSubSystem::SquishTarget(ArtifactHydraulicSubSystem *this)

{
  bool bVar1;
  char cVar2;
  Plant *this_00;
  RtObject *this_01;
  ZombiePirateBarrelPusher *pZVar3;
  RtObject *pRVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  Sexy::Insets::Insets
            ((Insets *)&local_20,*(int *)(this + 0x14) + -1,*(int *)(this + 0x18) + -1,3,3);
  local_30 = local_20;
  uStack_28 = uStack_18;
  if (this[0x10] != (ArtifactHydraulicSubSystem)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,2,(Insets *)&local_30);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      nop();
      if ((this_01 != (RtObject *)0x0) &&
         (cVar2 = canNotBeTargeted(this,(Zombie *)this_01), cVar2 == '\0')) {
        bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrelPusher>(this_01);
        if (bVar1) {
          pZVar3 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>(this_01);
          ZombiePirateBarrelPusher::disconnectBarrel(pZVar3);
          bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrel>(this_01);
          if (bVar1) {
LAB_037f9b5c:
            Sexy::RtObject::Cast<ZombiePirateBarrel>(this_01);
            ZombiePirateBarrel::GetPusherZombie();
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_38);
            if (bVar1) {
              pRVar4 = (RtObject *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
              bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrelPusher>(pRVar4);
              if (bVar1) {
                pRVar4 = (RtObject *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
                pZVar3 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>(pRVar4);
                ZombiePirateBarrelPusher::disconnectBarrel(pZVar3);
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          }
        }
        else {
          bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrel>(this_01);
          if (bVar1) goto LAB_037f9b5c;
        }
        auVar5 = PVZ_EOT();
        Zombie::ApplyCondition((Zombie *)auVar5,0,this_01,0x18,1);
        Zombie::SetIsControlled((Zombie *)this_01,true);
        FUN_037f7288(this_01 + 0x7e8,1);
        Zombie::SetIgnoresAllDamage((Zombie *)this_01,true);
        Zombie::SetIsTargetable((Zombie *)this_01,false);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x50),(RtWeakPtr *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,1,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    if ((((this_00 != (Plant *)0x0) && (cVar2 = Plant::IsProtect(this_00), cVar2 == '\0')) &&
        (cVar2 = canNotBeTargeted(this,this_00), cVar2 == '\0')) &&
       (cVar2 = Plant::HasCondition(this_00,2), cVar2 == '\0')) {
      *(undefined4 *)(this_00 + 200) = 4;
      this_00[0x14d] = (Plant)0x1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

