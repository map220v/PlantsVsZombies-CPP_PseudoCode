// Class: SkatePlant_StarFruit


/* SkatePlant_StarFruit::OnAnimStoppedCallback(std::string const&) */

void SkatePlant_StarFruit::OnAnimStoppedCallback(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x80))(0x3f800000,*(long **)(param_1 + 0x20));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x118))(*(long **)(param_1 + 0x20));
  return;
}


/* SkatePlant_StarFruit::~SkatePlant_StarFruit() */

void __thiscall SkatePlant_StarFruit::~SkatePlant_StarFruit(SkatePlant_StarFruit *this)

{
  *(undefined ***)this = &PTR__SkatePlant_StarFruit_0669af20;
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_StarFruit::~SkatePlant_StarFruit() */

void __thiscall SkatePlant_StarFruit::~SkatePlant_StarFruit(SkatePlant_StarFruit *this)

{
  ~SkatePlant_StarFruit(this);
  AK::FreeHook(this);
  return;
}


/* SkatePlant_StarFruit::SkatePlant_StarFruit(SkateBoardMower*) */

void __thiscall
SkatePlant_StarFruit::SkatePlant_StarFruit(SkatePlant_StarFruit *this,SkateBoardMower *param_1)

{
  undefined4 uVar1;
  
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_StarFruit_0669af20;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x44) = 10;
  *(undefined4 *)(this + 0x3c) = 0x3f000000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_StarFruit::UpdateAction() */

void __thiscall SkatePlant_StarFruit::UpdateAction(SkatePlant_StarFruit *this)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::UpdateAction((SkatePlant *)this);
  if ((*(int *)(this + 0x40) < *(int *)(this + 0x44)) &&
     (fVar3 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar3)) {
    (**(code **)(**(long **)(this + 0x20) + 0x80))(0x40000000,*(long **)(this + 0x20));
    plVar1 = *(long **)(this + 0x20);
    pcVar2 = *(code **)(*plVar1 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"OnAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar2)(plVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    fVar3 = (float)PVZ_T();
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(float *)(this + 0x38) = fVar3 + *(float *)(this + 0x3c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_StarFruit::Fire() */

void __thiscall SkatePlant_StarFruit::Fire(SkatePlant_StarFruit *this)

{
  char *pcVar1;
  RtObject *this_00;
  StarFruitProps *pSVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this_01;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_StarFruit_Attack");
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pSVar2 = Sexy::RtObject::Cast<StarFruitProps_const>(this_00);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 8));
  lVar4 = FUN_037dbdbc(*(undefined8 *)(pSVar2 + 0x70),5);
  fVar11 = *(float *)(lVar4 + 0x68);
  fVar10 = *(float *)(lVar4 + 0x6c);
  fVar8 = *pfVar3;
  fVar7 = pfVar3[1];
  uVar12 = *(undefined4 *)(pSVar2 + 700);
  do {
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
    this_01 = (Projectile *)
              Board::AddProjectile
                        ((Board *)(fVar8 + fVar11 + 18.0),fVar7 + fVar10 + -35.0,uVar12,uVar6,
                         aRStack_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_037dbe54(this_01 + 0x24);
    (**(code **)(*(long *)this + 0x40))(this);
    FUN_037dbd54(this_01 + 0xd8);
    switch(iVar5) {
    case 2:
      fVar9 = -225.0;
      goto LAB_037dfae4;
    case 3:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-225.0,0.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_18);
      break;
    case 4:
      fVar9 = 225.0;
LAB_037dfae4:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,fVar9,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_18);
      break;
    case 5:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,100.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_18);
LAB_037dfb34:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    default:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,-100.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_18);
      if (iVar5 == 5) goto LAB_037dfb34;
    }
    iVar5 = iVar5 + 1;
    lVar4 = FUN_037dbdbc(*(undefined8 *)(pSVar2 + 0x70),5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_StarFruit::OnUseActionAnimCommand(float) */

void SkatePlant_StarFruit::OnUseActionAnimCommand(float param_1)

{
  char *pcVar1;
  RtObject *this;
  StarFruitProps *pSVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this_00;
  long *in_x0;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar5 = 1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_StarFruit_Attack");
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 3));
  pSVar2 = Sexy::RtObject::Cast<StarFruitProps_const>(this);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)in_x0[1]);
  lVar4 = FUN_037dbdbc(*(undefined8 *)(pSVar2 + 0x70),5);
  fVar11 = *(float *)(lVar4 + 0x68);
  fVar10 = *(float *)(lVar4 + 0x6c);
  fVar8 = *pfVar3;
  fVar7 = pfVar3[1];
  uVar12 = *(undefined4 *)(pSVar2 + 700);
  do {
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 8));
    this_00 = (Projectile *)
              Board::AddProjectile
                        ((Board *)(fVar8 + fVar11 + 18.0),fVar7 + fVar10 + -35.0,uVar12,uVar6,
                         aRStack_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_037dbe54(this_00 + 0x24);
    (**(code **)(*in_x0 + 0x40))();
    FUN_037dbd54(this_00 + 0xd8);
    switch(iVar5) {
    case 2:
      fVar9 = -225.0;
      goto LAB_037dfae4;
    case 3:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-225.0,0.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      break;
    case 4:
      fVar9 = 225.0;
LAB_037dfae4:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,fVar9,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      break;
    case 5:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,100.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
LAB_037dfb34:
      if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    default:
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,200.0,-100.0,0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
      if (iVar5 == 5) goto LAB_037dfb34;
    }
    iVar5 = iVar5 + 1;
    lVar4 = FUN_037dbdbc(*(undefined8 *)(pSVar2 + 0x70),5);
  } while( true );
}


/* SkatePlant_StarFruit::Initialize(std::string const&) */

void SkatePlant_StarFruit::Initialize(string *param_1)

{
  SkatePlant::Initialize(param_1);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x118))(*(long **)(param_1 + 0x20));
  return;
}

