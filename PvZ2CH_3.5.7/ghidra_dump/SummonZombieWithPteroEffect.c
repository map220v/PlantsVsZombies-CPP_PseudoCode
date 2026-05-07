// Class: SummonZombieWithPteroEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieWithPteroEffect::DoEffect() */

void __thiscall SummonZombieWithPteroEffect::DoEffect(SummonZombieWithPteroEffect *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  SummonZombieEffectProperty *pSVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  ZombieType *this_01;
  GridTargetAdaptor *this_02;
  ZombieTargetAdaptor *pZVar6;
  long lVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  int iStack_30;
  int iStack_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  float fStack_20;
  float fStack_1c;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar10 = 0;
  *(undefined4 *)(this + 0x20) = 2;
  iVar1 = SummonZombieEffect::GetZombieSpawnRate();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pSVar3 = Sexy::RtObject::Cast<SummonZombieEffectProperty>(this_00);
  uVar11 = *(undefined8 *)(pSVar3 + 0x10);
  lVar4 = FUN_0360be18(uVar11,*(undefined8 *)(pSVar3 + 0x18));
  if (lVar4 != 0) {
    do {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360be48(uVar11,uVar10);
      this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      ZombieType::EnsureResourceGroupsLoaded(this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      this_02 = Sexy::RtObject::Cast<GridTargetAdaptor>(*(RtObject **)(lVar4 + 0x18));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      pZVar6 = Sexy::RtObject::Cast<ZombieTargetAdaptor>(*(RtObject **)(lVar4 + 0x18));
      if (this_02 == (GridTargetAdaptor *)0x0) {
        uVar8 = 0;
        if (pZVar6 == (ZombieTargetAdaptor *)0x0) {
          while( true ) {
            uVar11 = *(undefined8 *)(pSVar3 + 0x10);
            lVar4 = FUN_0360be48(uVar11,uVar10);
            if ((ulong)(long)(iVar1 * *(int *)(lVar4 + 8)) <= uVar8) break;
            uVar8 = uVar8 + 1;
            pcVar12 = *(code **)(*(long *)this + 0x90);
            EATextSquish::Vec3::Vec3((Vec3 *)&fStack_20,0.0,0.0,0.0);
            (*pcVar12)(aRStack_28,this,lVar4,(Vec3 *)&fStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          }
        }
        else {
          ZombieTargetAdaptor::GetTargetList();
          uVar11 = CONCAT44(fStack_1c,fStack_20);
          lVar4 = FUN_0360be54(uVar11,uStack_18);
          uVar8 = 0;
          if (lVar4 != 0) {
            do {
              for (uVar9 = 0; lVar4 = FUN_0360be48(*(undefined8 *)(pSVar3 + 0x10),uVar10),
                  uVar9 < (ulong)(long)(iVar1 * *(int *)(lVar4 + 8)); uVar9 = uVar9 + 1) {
                pcVar12 = *(code **)(*(long *)this + 0x90);
                pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360be60(uVar11,uVar8);
                this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
                uVar11 = std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this_03);
                (*pcVar12)(aRStack_28,this,lVar4,uVar11);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                uVar11 = CONCAT44(fStack_1c,fStack_20);
              }
              uVar8 = uVar8 + 1;
              uVar9 = FUN_0360be54(uVar11,uStack_18);
            } while (uVar8 < uVar9);
          }
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     &fStack_20);
          uVar11 = *(undefined8 *)(pSVar3 + 0x10);
        }
      }
      else {
        uVar11 = *(undefined8 *)(pSVar3 + 0x10);
        if ((long)iVar1 != 0) {
          lVar4 = 0;
          lVar7 = FUN_0360be48(uVar11,uVar10);
          uVar8 = (ulong)*(int *)(lVar7 + 8);
          do {
            for (uVar9 = 0; uVar9 < uVar8; uVar9 = uVar9 + 1) {
              if (*(char *)(lVar7 + 0x14) == '\0') {
                GridTargetAdaptor::GetRandomGrid(this_02);
              }
              else {
                GridTargetAdaptor::GetRegularGrid((int)this_02);
              }
              EATextSquish::Vec3::Vec3((Vec3 *)&fStack_20,0.0,0.0,0.0);
              iVar2 = BoardTransforms::GridToBoardSpaceX(iStack_30);
              fStack_20 = (float)iVar2;
              iVar2 = BoardTransforms::GridToBoardSpaceY(iStack_2c);
              fStack_1c = (float)iVar2;
              uVar11 = FUN_0360be48(*(undefined8 *)(pSVar3 + 0x10),uVar10);
              (**(code **)(*(long *)this + 0x90))(aRStack_28,this,uVar11,(Vec3 *)&fStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              uVar11 = *(undefined8 *)(pSVar3 + 0x10);
              lVar7 = FUN_0360be48(uVar11,uVar10);
              uVar8 = (ulong)*(int *)(lVar7 + 8);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 != iVar1);
        }
      }
      uVar10 = uVar10 + 1;
      uVar8 = FUN_0360be18(uVar11,*(undefined8 *)(pSVar3 + 0x18));
    } while (uVar10 < uVar8);
  }
  SummonZombieEffect::SummonEffectFinish();
  *(undefined4 *)(this + 0x20) = 3;
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SummonZombieWithPteroEffect::SummonZombieWithPteroEffect() */

void __thiscall
SummonZombieWithPteroEffect::SummonZombieWithPteroEffect(SummonZombieWithPteroEffect *this)

{
  SummonZombieEffect::SummonZombieEffect((SummonZombieEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_06667f70;
  return;
}


/* SummonZombieWithPteroEffect::StaticNew() */

SummonZombieWithPteroEffect * SummonZombieWithPteroEffect::StaticNew(void)

{
  SummonZombieWithPteroEffect *this;
  
  this = ::operator_new(0x28);
  SummonZombieWithPteroEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieWithPteroEffect::StaticClassInit() */

void SummonZombieWithPteroEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"SummonZombieWithPteroEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03611518,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieWithPteroEffect::StaticGetClass() */

long * SummonZombieWithPteroEffect::StaticGetClass(void)

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
  uVar2 = SummonZombieEffect::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieWithPteroEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieWithPteroEffect::~SummonZombieWithPteroEffect() */

void __thiscall
SummonZombieWithPteroEffect::~SummonZombieWithPteroEffect(SummonZombieWithPteroEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_06667f70;
  SummonZombieEffect::~SummonZombieEffect((SummonZombieEffect *)this);
  return;
}


/* SummonZombieWithPteroEffect::~SummonZombieWithPteroEffect() */

void __thiscall
SummonZombieWithPteroEffect::~SummonZombieWithPteroEffect(SummonZombieWithPteroEffect *this)

{
  ~SummonZombieWithPteroEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieWithPteroEffect::SpawnZombie(ZombieSummonPacket&, Sexy::SexyVector3 const&) */

void SummonZombieWithPteroEffect::SpawnZombie(ZombieSummonPacket *param_1,SexyVector3 *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  RtObject *this;
  SummonZombieWithPteroEffectProperty *pSVar4;
  PteroFlyWithZombieEntity *this_00;
  long in_x2;
  RtWeakPtr<Sexy::ResourceInfo> *in_x8;
  code *pcVar5;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SummonZombieEffect::SpawnZombie(param_1,param_2);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x8);
  pcVar5 = *(code **)(*plVar3 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_18,200.0,*(float *)(in_x2 + 4),*(float *)(in_x2 + 8));
  (*pcVar5)(plVar3,aVStack_18);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x18))
  ;
  pSVar4 = Sexy::RtObject::Cast<SummonZombieWithPteroEffectProperty>(this);
  this_00 = GameObject::Create<PteroFlyWithZombieEntity>();
  iVar1 = RandRangeInt(*(int *)(pSVar4 + 0x28),*(int *)(pSVar4 + 0x2c));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  PteroFlyWithZombieEntity::initialize(this_00,(float)(iVar1 * iVar2));
  pcVar5 = *(code **)(*(long *)this_00 + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_18,200.0,*(float *)(in_x2 + 4),*(float *)(in_x2 + 8));
  (*pcVar5)(this_00,aVStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)in_x8);
  PteroFlyWithZombieEntity::SetTargetZombie(this_00,aVStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

