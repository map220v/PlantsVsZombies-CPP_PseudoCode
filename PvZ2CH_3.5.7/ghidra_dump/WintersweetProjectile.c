// Class: WintersweetProjectile


/* WintersweetProjectile::~WintersweetProjectile() */

void __thiscall WintersweetProjectile::~WintersweetProjectile(WintersweetProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0990;
  *(undefined ***)(this + 0x10) = &PTR__WintersweetProjectile_067e0b80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WintersweetProjectile::~WintersweetProjectile() */

void __thiscall WintersweetProjectile::~WintersweetProjectile(WintersweetProjectile *this)

{
  ~WintersweetProjectile(this + -0x10);
  return;
}


/* WintersweetProjectile::~WintersweetProjectile() */

void __thiscall WintersweetProjectile::~WintersweetProjectile(WintersweetProjectile *this)

{
  ~WintersweetProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WintersweetProjectile::~WintersweetProjectile() */

void __thiscall WintersweetProjectile::~WintersweetProjectile(WintersweetProjectile *this)

{
  ~WintersweetProjectile(this + -0x10);
  return;
}


/* WintersweetProjectile::WintersweetProjectile() */

void __thiscall WintersweetProjectile::WintersweetProjectile(WintersweetProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e0990;
  *(undefined ***)(this + 0x10) = &PTR__WintersweetProjectile_067e0b80;
  return;
}


/* WintersweetProjectile::StaticNew() */

WintersweetProjectile * WintersweetProjectile::StaticNew(void)

{
  WintersweetProjectile *this;
  
  this = ::operator_new(0x1a8);
  WintersweetProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectile::StaticClassInit() */

void WintersweetProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WintersweetProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040f22d8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetProjectile::StaticGetClass() */

long * WintersweetProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetProjectile::GetClass() const */

long * WintersweetProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectile::setTinyProjectileVelocity(int, Projectile*) */

void __thiscall
WintersweetProjectile::setTinyProjectileVelocity
          (WintersweetProjectile *this,int param_1,Projectile *param_2)

{
  float fVar1;
  float fVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)Sexy::SexyMath::DegToRad(60.0);
  fVar2 = (float)Sexy::SexyMath::DegToRad(45.0);
  switch(param_1) {
  case 0:
    EATextSquish::Vec3::Vec3(aVStack_18,333.0,0.0,0.0);
    Projectile::SetVelocity(param_2,(SexyVector3 *)aVStack_18);
    break;
  case 1:
    fVar2 = cosf(fVar1);
    fVar1 = sinf(fVar1);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar2 * 333.0,fVar1 * -333.0,0.0);
    Projectile::SetVelocity(param_2,(SexyVector3 *)aVStack_18);
    break;
  case 2:
    fVar2 = cosf(fVar1);
    fVar1 = sinf(fVar1);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar2 * 333.0,fVar1 * 333.0,0.0);
    Projectile::SetVelocity(param_2,(SexyVector3 *)aVStack_18);
    break;
  case 3:
    fVar1 = sinf(fVar2);
    fVar2 = cosf(fVar2);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar1 * -333.0,fVar2 * -333.0,0.0);
    Projectile::SetVelocity(param_2,(SexyVector3 *)aVStack_18);
    break;
  case 4:
    fVar1 = sinf(fVar2);
    fVar2 = cosf(fVar2);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar1 * -333.0,fVar2 * 333.0,0.0);
    Projectile::SetVelocity(param_2,(SexyVector3 *)aVStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectile::setLevelAttackAnimColor(std::string const&) */

void __thiscall
WintersweetProjectile::setLevelAttackAnimColor(WintersweetProjectile *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  PopAnimRig *this_00;
  string *psVar3;
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("flower_%s_04",asStack_78,uVar2);
  psVar3 = (string *)&local_8;
  std::string::string(asStack_48,"flower_red_01");
  std::string::string(asStack_40,"flower_red_02");
  std::string::string(asStack_38,"flower_red_03");
  std::string::string(asStack_30,"flower_red_04");
  std::string::string(asStack_28,"flower_white_01");
  std::string::string(asStack_20,"flower_white_02");
  std::string::string(asStack_18,"flower_white_03");
  std::string::string(asStack_10,"flower_white_04");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60,asStack_48,8,
             (__normal_iterator *)&local_68);
  do {
    psVar3 = psVar3 + -8;
    std::string::~string(psVar3);
  } while (psVar3 != asStack_48);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  local_70 = FUN_040f2bc0(local_60);
  local_68 = FUN_040f2c10(local_58);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    bVar1 = (bool)std::operator==(psVar3,asStack_78);
    this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    PopAnimRig::SetLayerVisibility(this_00,psVar3,bVar1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectile::setLevelAttack(bool) */

void __thiscall WintersweetProjectile::setLevelAttack(WintersweetProjectile *this,bool param_1)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  this[0x1a5] = (WintersweetProjectile)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    __s = "white";
  }
  else {
    __s = "red";
  }
  std::string::string(asStack_10,__s);
  setLevelAttackAnimColor(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetProjectile::LaunchTinyProjectile(int) */

void __thiscall WintersweetProjectile::LaunchTinyProjectile(WintersweetProjectile *this,int param_1)

{
  long lVar1;
  RtObject *this_00;
  Plant *pPVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Projectile *pPVar5;
  WintersweetTinyProjectile *this_01;
  Board *pBVar8;
  undefined4 uVar6;
  float fVar7;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetInstigator((Projectile *)this);
  if (lVar1 == 0) {
    pPVar2 = (Plant *)0x0;
  }
  else {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
  }
  std::string::string(asStack_30,"WintersweetTinyProjectileDefault");
  fVar7 = 20.0;
  nop();
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar8._0_4_ = *puVar4;
  uVar6 = *(undefined4 *)((long)puVar4 + 4);
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  if (*(char *)(lVar1 + 0x119) != '\0') {
    fVar7 = *(float *)(puVar4 + 1) + 20.0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  pPVar5 = (Projectile *)Board::AddProjectile(pBVar8._0_4_,uVar6,fVar7,lVar1,aRStack_18,pPVar2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  setTinyProjectileVelocity(this,param_1,pPVar5);
  if (this[0x1a5] != (WintersweetProjectile)0x0) {
    nop();
    std::string::string((string *)aRStack_18,"white");
    WintersweetTinyProjectile::setLevelAttackAnimColor(this_01,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar5);
}


/* WintersweetProjectile::OnCollideRoof() */

void __thiscall WintersweetProjectile::OnCollideRoof(WintersweetProjectile *this)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  int iVar3;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  iVar2 = *(int *)(extraout_x0 + 0x1e0);
  Sexy::Rand(30.0);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar3 + 1;
      LaunchTinyProjectile(this,iVar3);
      iVar3 = iVar1;
    } while (iVar1 != iVar2);
  }
  Projectile::OnCollideRoof((Projectile *)this);
  return;
}


/* WintersweetProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
WintersweetProjectile::OnCollideEntity(WintersweetProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long extraout_x0;
  long lVar4;
  ZombossCrosshair *extraout_x0_00;
  int iVar5;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  if (param_1 != (BoardEntity *)0x0) {
    bVar3 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (!bVar3) {
      iVar2 = *(int *)(extraout_x0 + 0x1e0);
      Sexy::Rand(30.0);
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar1 = iVar5 + 1;
          lVar4 = LaunchTinyProjectile(this,iVar5);
          if (lVar4 != 0) {
            nop();
            BombProjectile::SetOwningRocket(extraout_x0_00);
          }
          iVar5 = iVar1;
        } while (iVar1 != iVar2);
      }
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

