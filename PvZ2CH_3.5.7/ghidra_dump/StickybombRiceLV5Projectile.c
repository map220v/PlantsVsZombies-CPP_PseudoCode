// Class: StickybombRiceLV5Projectile


/* StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile() */

void __thiscall
StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile(StickybombRiceLV5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06823090;
  *(undefined ***)(this + 0x10) = &PTR__StickybombRiceLV5Projectile_06823280;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile() */

void __thiscall
StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile(StickybombRiceLV5Projectile *this)

{
  ~StickybombRiceLV5Projectile(this + -0x10);
  return;
}


/* StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile() */

void __thiscall
StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile(StickybombRiceLV5Projectile *this)

{
  ~StickybombRiceLV5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile() */

void __thiscall
StickybombRiceLV5Projectile::~StickybombRiceLV5Projectile(StickybombRiceLV5Projectile *this)

{
  ~StickybombRiceLV5Projectile(this + -0x10);
  return;
}


/* StickybombRiceLV5Projectile::Initialize(float, float, float, float) */

void __thiscall
StickybombRiceLV5Projectile::Initialize
          (StickybombRiceLV5Projectile *this,float param_1,float param_2,float param_3,float param_4
          )

{
  *(float *)(this + 0x1c0) = param_1;
  *(float *)(this + 0x1c4) = param_2;
  *(float *)(this + 0x1c8) = param_3;
  *(float *)(this + 0x1cc) = param_4;
  return;
}


/* StickybombRiceLV5Projectile::StickybombRiceLV5Projectile() */

void __thiscall
StickybombRiceLV5Projectile::StickybombRiceLV5Projectile(StickybombRiceLV5Projectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06823090;
  *(undefined ***)(this + 0x10) = &PTR__StickybombRiceLV5Projectile_06823280;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  this[0x1bc] = (StickybombRiceLV5Projectile)0x0;
  this[0x1bd] = (StickybombRiceLV5Projectile)0x0;
  this[0x1be] = (StickybombRiceLV5Projectile)0x0;
  this[0x1bf] = (StickybombRiceLV5Projectile)0x0;
  *(undefined4 *)(this + 0x1c0) = 0x40a00000;
  *(undefined4 *)(this + 0x1c8) = 0x42c80000;
  *(undefined4 *)(this + 0x1c4) = 0x3f800000;
  *(undefined4 *)(this + 0x1cc) = 0x3dcccccd;
  return;
}


/* StickybombRiceLV5Projectile::StaticNew() */

StickybombRiceLV5Projectile * StickybombRiceLV5Projectile::StaticNew(void)

{
  StickybombRiceLV5Projectile *this;
  
  this = ::operator_new(0x1d0);
  StickybombRiceLV5Projectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombRiceLV5Projectile::StaticClassInit() */

void StickybombRiceLV5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StickybombRiceLV5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0427991c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StickybombRiceLV5Projectile::StaticGetClass() */

long * StickybombRiceLV5Projectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"StickybombRiceLV5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StickybombRiceLV5Projectile::GetClass() const */

long * StickybombRiceLV5Projectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"StickybombRiceLV5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StickybombRiceLV5Projectile::setFlyTotalTime(float, Sexy::SexyVector3 const&, bool, bool) */

void __thiscall
StickybombRiceLV5Projectile::setFlyTotalTime
          (StickybombRiceLV5Projectile *this,float param_1,SexyVector3 *param_2,bool param_3,
          bool param_4)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),param_2);
  this[0x1bc] = (StickybombRiceLV5Projectile)param_3;
  this[0x1bd] = (StickybombRiceLV5Projectile)param_4;
  this[0x1bf] = (StickybombRiceLV5Projectile)0x0;
  this[0x1be] = (StickybombRiceLV5Projectile)0x1;
  *(float *)(this + 0x1b4) = param_1;
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* StickybombRiceLV5Projectile::onAnimStopped(std::string const&) */

void __thiscall
StickybombRiceLV5Projectile::onAnimStopped(StickybombRiceLV5Projectile *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"effects");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombRiceLV5Projectile::doSplit() */

void __thiscall StickybombRiceLV5Projectile::doSplit(StickybombRiceLV5Projectile *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  BoardEntity **ppBVar8;
  ulong uVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  Projectile *this_00;
  StickybombRiceProjectile *this_01;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  Board *pBVar17;
  undefined4 uVar15;
  undefined4 uVar16;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  RtMixedPtr aRStack_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1bf] = (StickybombRiceLV5Projectile)0x1;
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string((string *)&local_68,"effects");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
  std::string::string((string *)&local_80,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtId *)&local_90,(string *)&local_80);
  PopAnimRig::PlayAndStop(pPVar3,(string *)&local_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  std::string::~string((string *)&local_68);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)aRStack_98,"StickybombRiceDefault");
  Sexy::ToWString((string *)aRStack_98);
  Sexy::RtName::RtName((RtName *)&local_68,(wstring *)&local_90);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>((string *)&local_80,uVar4,0xc,(string *)&local_68);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  Sexy::RtName::~RtName((RtName *)&local_68);
  FUN_05476c50((RtId *)&local_90);
  std::string::~string((string *)aRStack_98);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_90,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar2 * 1.2247449,(string *)&local_68,2,(RtId *)&local_90,0xffffffff,0xffffffff)
  ;
  lVar5 = (**(code **)(*(long *)this + 0x1a0))(this);
  if (lVar5 != 0) {
    local_90 = (**(code **)(*(long *)this + 0x1a0))(this);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,
               (BoardEntity **)&local_90);
  }
  uVar4 = local_68;
  uVar6 = FUN_04277eb4(local_68,local_60);
  if (uVar6 < 4) {
    if (uVar6 == 2) {
      lVar5 = (**(code **)(*(long *)this + 0x1a0))(this);
      if (lVar5 == 0) {
        ppBVar8 = (BoardEntity **)FUN_04277ec8(local_68,0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
      }
      ppBVar8 = (BoardEntity **)FUN_04277ec8(local_68,0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
      ppBVar8 = (BoardEntity **)FUN_04277ec8(local_68,1);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
    }
    else if (uVar6 == 1) {
      lVar5 = 3;
      do {
        ppBVar8 = (BoardEntity **)FUN_04277ec8(uVar4,0);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
        uVar6 = FUN_04277eb4(local_80,local_78);
        if (2 < uVar6) break;
        lVar5 = lVar5 + -1;
        uVar4 = local_68;
      } while (lVar5 != 0);
    }
    else if (uVar6 == 0) goto LAB_0427c044;
  }
  else {
    uVar6 = 0;
    do {
      plVar7 = (long *)FUN_04277ec8(uVar4,uVar6);
      lVar12 = *plVar7;
      lVar5 = (**(code **)(*(long *)this + 0x1a0))(this);
      if (lVar12 != lVar5) {
        ppBVar8 = (BoardEntity **)FUN_04277ec8(local_68,uVar6);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
      }
      uVar9 = FUN_04277eb4(local_80,local_78);
      uVar4 = local_68;
      if (2 < uVar9) break;
      uVar6 = uVar6 + 1;
      uVar9 = FUN_04277eb4(local_68,local_60);
    } while (uVar6 < uVar9);
  }
  uVar6 = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_a0);
  uVar4 = local_80;
  if ((cVar1 != '\0') && (lVar5 = FUN_04277eb4(local_80,local_78), lVar5 != 0)) {
    do {
      puVar10 = (undefined8 *)FUN_04277ec8(uVar4,uVar6);
      pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      if (pZVar11 != (Zombie *)0x0) {
        uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
        puVar10 = (undefined8 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this);
                    /* WARNING: Load size is inaccurate */
        pBVar17._0_4_ = *puVar10;
        uVar15 = *(undefined4 *)((long)puVar10 + 4);
        uVar16 = *(undefined4 *)(puVar10 + 1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)a_Stack_a0);
        uVar4 = Projectile::GetInstigator((Projectile *)this);
        this_00 = (Projectile *)Board::AddProjectile(pBVar17._0_4_,uVar13,(RtId *)&local_90,uVar4,0)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        uVar14 = (**(code **)(*(long *)pZVar11 + 0x3b0))(0x3f000000,pZVar11);
        local_90 = CONCAT44(uVar15,uVar14);
        local_88 = uVar16;
        Projectile::LaunchAt(this_00,(SexyVector3 *)&local_90,*(float *)(puVar10 + 1) + 10.0,0.5);
        FUN_04277ec8(local_80,uVar6);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_98);
        Projectile::SetTarget(this_00,(RtWeakPtr *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        this_01 = Sexy::RtObject::Cast<StickybombRiceProjectile>((RtObject *)this_00);
        StickybombRiceProjectile::Initialize
                  (this_01,*(float *)(this + 0x1c0),*(float *)(this + 0x1c4),
                   *(float *)(this + 0x1c8),*(float *)(this + 0x1cc));
      }
      uVar4 = local_80;
      uVar6 = uVar6 + 1;
      uVar9 = FUN_04277eb4(local_80,local_78);
    } while (uVar6 < uVar9);
  }
LAB_0427c044:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StickybombRiceLV5Projectile::onUpdate(float) */

void __thiscall
StickybombRiceLV5Projectile::onUpdate(StickybombRiceLV5Projectile *this,float param_1)

{
  float fVar1;
  
  if (((this[0x1be] != (StickybombRiceLV5Projectile)0x0) &&
      (this[0x1bf] == (StickybombRiceLV5Projectile)0x0)) &&
     (fVar1 = *(float *)(this + 0x1b8), *(float *)(this + 0x1b8) = param_1 + fVar1,
     *(float *)(this + 0x1b4) * 0.5 <= param_1 + fVar1)) {
    doSplit(this);
    return;
  }
  return;
}

