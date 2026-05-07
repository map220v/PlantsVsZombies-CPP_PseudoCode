// Class: PlantLotus


/* PlantLotus::StaticGetClass() */

long * PlantLotus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotus",uVar2,StaticNew);
  return sClass;
}


/* PlantLotus::GetClass() const */

long * PlantLotus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLotus",uVar2,StaticNew);
  return sClass;
}


/* PlantLotus::PlantLotus() */

void __thiscall PlantLotus::PlantLotus(PlantLotus *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b7a30;
  return;
}


/* PlantLotus::StaticNew() */

PlantLotus * PlantLotus::StaticNew(void)

{
  PlantLotus *this;
  
  this = ::operator_new(0x28);
  PlantLotus(this);
  return this;
}


/* PlantLotus::~PlantLotus() */

void __thiscall PlantLotus::~PlantLotus(PlantLotus *this)

{
  *(undefined ***)this = &PTR_GetClass_067b7a30;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLotus::~PlantLotus() */

void __thiscall PlantLotus::~PlantLotus(PlantLotus *this)

{
  ~PlantLotus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotus::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantLotus::FindTargetAndFire(PlantLotus *this,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  RtWeakPtr aRStack_20 [8];
  Plant aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  Plant::GetPlantAttackRect(aPStack_18,*(long *)(this + 0x10));
  (**(code **)(*(long *)this + 0x100))(aRStack_20,this,aPStack_18,param_2);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (pRVar3 == (ResourceInfo *)0x0) {
    local_28 = (**(code **)(*(long *)this + 0x3f8))(this,param_2);
    (**(code **)(*(long *)this + 0xe0))(aRStack_20,this,iVar1,param_2,auStack_2c,&local_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (!bVar2) {
      (**(code **)(*(long *)this + 0xe0))(aRStack_20,this,iVar1 + -1,param_2,auStack_2c,&local_28);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (!bVar2) {
        (**(code **)(*(long *)this + 0xe0))(aRStack_20,this,iVar1 + 1,param_2,auStack_2c,&local_28);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        if (!bVar2) goto LAB_040280b8;
      }
    }
  }
  bVar2 = true;
  (**(code **)(*(long *)this + 0x1a0))(this);
LAB_040280b8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* PlantLotus::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantLotus::LaunchProjectileAt
          (PlantLotus *this,Projectile *param_1,SexyVector3 *param_2,float param_3,float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04028238(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_04028238(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_04028238(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_04028238(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotus::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantLotus::Fire(undefined1 param_1 [16],float param_2,undefined4 param_3,PlantLotus *param_4,
                     RtWeakPtrBase *param_5,int param_6,undefined4 param_7)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ResourceInfo *this;
  Projectile *pPVar5;
  GridItemFlame *this_00;
  long lVar6;
  long *plVar7;
  int iVar8;
  RealObject *this_01;
  Plant *pPVar9;
  code *pcVar10;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  fVar1 = _FUN_04028620;
  if (cVar2 == '\0') {
    iVar8 = param_6 + -1;
    if (iVar8 <= param_6 + 1) {
      do {
        if ((-1 < iVar8) && (iVar8 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
          PlantFramework::FindTargetZombie(aRStack_38,param_4,param_7);
          (**(code **)(*(long *)param_4 + 0xf8))((RtWeakPtr *)&local_18,param_4,param_7);
          this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          bVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
          if ((this == (ResourceInfo *)0x0) <= bVar3) {
            pPVar9 = *(Plant **)(param_4 + 0x10);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
            pPVar5 = (Projectile *)Plant::Fire(pPVar9,(RtWeakPtr *)&local_18,iVar8,param_7);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            DVec3::DVec3((DVec3 *)&local_28);
            if (this == (ResourceInfo *)0x0) {
              cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
              if (cVar2 != '\0') {
LAB_040285cc:
                plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                pcVar10 = *(code **)(*plVar7 + 0x3b0);
                lVar6 = FUN_04028238(*(undefined8 *)(param_4 + 0x10));
                local_18 = (*pcVar10)(*(undefined4 *)(lVar6 + 0x2b8),plVar7);
                goto LAB_04028534;
              }
            }
            else {
              bVar4 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this);
              if (bVar4) {
                nop();
                lVar6 = FUN_04028238(*(undefined8 *)(param_4 + 0x10));
                local_18 = GridItemFlame::CalcProjectileTargetLocation
                                     (this_00,*(float *)(lVar6 + 0x2b8));
LAB_04028534:
                local_14 = param_2;
                local_10 = param_3;
                Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
              }
              else {
                cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
                if (cVar2 != '\0') goto LAB_040285cc;
                GridItem::GetGridLocation();
                BoardTransforms::GridToBoardSpace((Point *)&local_18);
                local_20 = 0x41c80000;
                local_28 = (float)local_30;
                local_24 = (float)local_2c;
              }
            }
            param_2 = fVar1;
            LaunchProjectileAt(param_4,pPVar5,(SexyVector3 *)&local_28,fVar1,fVar1);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= param_6 + 1);
    }
    this_01 = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLotus::DoSpecial(int) */

void PlantLotus::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ResourceInfo *pRVar5;
  Plant *this;
  long lVar6;
  int extraout_w1;
  int iVar7;
  int extraout_w1_00;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if ((cVar2 == '\0') ||
       (pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38),
       *(ResourceInfo **)(uVar3 + 0x10) == pRVar5)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar7 = extraout_w1;
    }
    else {
      this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      fVar9 = *(float *)(lVar6 + 0xe4);
      lVar6 = FUN_04028238(*(undefined8 *)(uVar3 + 0x10));
      fVar8 = *(float *)(lVar6 + 0x2c0);
      lVar6 = FUN_04028238(*(undefined8 *)(uVar3 + 0x10));
      Plant::ChangeSpeedModifier(this,fVar9 * fVar8,*(float *)(lVar6 + 0x38));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar7 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar7);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

