// Class: SkatePlant_PinkStarFruit


/* SkatePlant_PinkStarFruit::GetDamageAmount() */

undefined4 SkatePlant_PinkStarFruit::GetDamageAmount(void)

{
  return 0x43160000;
}


/* SkatePlant_PinkStarFruit::~SkatePlant_PinkStarFruit() */

void __thiscall SkatePlant_PinkStarFruit::~SkatePlant_PinkStarFruit(SkatePlant_PinkStarFruit *this)

{
  *(undefined ***)this = &PTR__SkatePlant_PinkStarFruit_0669af80;
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_PinkStarFruit::~SkatePlant_PinkStarFruit() */

void __thiscall SkatePlant_PinkStarFruit::~SkatePlant_PinkStarFruit(SkatePlant_PinkStarFruit *this)

{
  ~SkatePlant_PinkStarFruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_PinkStarFruit::SkatePlant_PinkStarFruit(SkateBoardMower*) */

void __thiscall
SkatePlant_PinkStarFruit::SkatePlant_PinkStarFruit
          (SkatePlant_PinkStarFruit *this,SkateBoardMower *param_1)

{
  undefined4 uVar1;
  
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_PinkStarFruit_0669af80;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0x2d;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = _FUN_037dd618;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_PinkStarFruit::Fire() */

void __thiscall SkatePlant_PinkStarFruit::Fire(SkatePlant_PinkStarFruit *this)

{
  char *pcVar1;
  RtObject *this_00;
  PinkStarFruitProps *pPVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this_01;
  SexyVector3 *pSVar5;
  SexyTransform2D *pSVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  Board *pBVar14;
  float fVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  Vec3 aVStack_50 [16];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = 0;
  iVar9 = 1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_StarFruit_Attack");
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pPVar2 = Sexy::RtObject::Cast<PinkStarFruitProps_const>(this_00);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 8));
  lVar4 = FUN_037dbdbc(*(undefined8 *)(pPVar2 + 0x70),3);
  pBVar14._0_4_ = (Board *)(*pfVar3 + *(float *)(lVar4 + 0x68) + 30.0);
  fVar12 = pfVar3[1] + *(float *)(lVar4 + 0x6c) + -10.0;
  fVar13 = *(float *)(pPVar2 + 0x2c4);
  EATextSquish::Vec3::Vec3(aVStack_50,(float)pBVar14._0_4_,fVar12,fVar13);
  lVar4 = FUN_037dbdbc(*(undefined8 *)(pPVar2 + 0x70),3);
  do {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(lVar4 + 8));
    pfVar3 = (float *)FUN_037dbdcc(DAT_06ab1788,lVar8);
    pBVar14._0_4_ = (Board *)((float)pBVar14._0_4_ + *pfVar3);
    fVar12 = fVar12 + pfVar3[1];
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
    this_01 = (Projectile *)
              Board::AddProjectile
                        (pBVar14._0_4_,fVar12,fVar13,uVar7,
                         (RtWeakPtr<Sexy::SoundResource> *)&local_40,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    FUN_037dbe54(this_01 + 0x24);
    (**(code **)(*(long *)this + 0x40))(this);
    FUN_037dbd54(this_01 + 0xd8);
    switch((int)lVar8) {
    case 1:
      fVar10 = -225.0;
      break;
    case 2:
      fVar10 = 0.0;
      uVar11 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_40,-225.0,0.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
      goto LAB_037dfd94;
    case 3:
      fVar10 = 225.0;
      break;
    case 4:
      fVar12 = 100.0;
      uVar11 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_40,200.0,100.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
      pSVar5 = (SexyVector3 *)Projectile::GetVelocity(this_01);
      local_40 = Sexy::SexyVector3::operator*(pSVar5,0.8);
      local_3c = fVar12;
      local_38 = uVar11;
      pSVar6 = (SexyTransform2D *)Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
      Sexy::SexyTransform2D::CreateRotation(pSVar6,*(float *)(this + 0x48));
      Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
LAB_037dfe8c:
      *(float *)(this + 0x48) = *(float *)(this + 0x48) - 0.2;
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    default:
      uVar11 = 0;
      fVar10 = -100.0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_40,200.0,-100.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
      pSVar5 = (SexyVector3 *)Projectile::GetVelocity(this_01);
      local_40 = Sexy::SexyVector3::operator*(pSVar5,0.8);
      local_3c = fVar10;
      local_38 = uVar11;
      pSVar6 = (SexyTransform2D *)Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
      Sexy::SexyTransform2D::CreateRotation(pSVar6,*(float *)(this + 0x48));
      Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      if (iVar9 != 5) goto LAB_037dfddc;
      goto LAB_037dfe8c;
    }
    uVar11 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_40,0.0,fVar10,0.0);
    Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
LAB_037dfd94:
    pSVar5 = (SexyVector3 *)Projectile::GetVelocity(this_01);
    local_40 = Sexy::SexyVector3::operator*(pSVar5,0.8);
    local_3c = fVar10;
    local_38 = uVar11;
    pSVar6 = (SexyTransform2D *)Projectile::SetVelocity(this_01,(SexyVector3 *)&local_40);
    Sexy::SexyTransform2D::CreateRotation(pSVar6,*(float *)(this + 0x48));
    Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
LAB_037dfddc:
    lVar8 = lVar8 + 1;
    iVar9 = iVar9 + 1;
  } while( true );
}


/* SkatePlant_PinkStarFruit::UpdateAction() */

void __thiscall SkatePlant_PinkStarFruit::UpdateAction(SkatePlant_PinkStarFruit *this)

{
  float fVar1;
  
  SkatePlant::UpdateAction((SkatePlant *)this);
  if ((*(int *)(this + 0x40) < *(int *)(this + 0x44)) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar1)) {
    Fire(this);
    fVar1 = (float)PVZ_T();
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(float *)(this + 0x38) = fVar1 + *(float *)(this + 0x3c);
    return;
  }
  return;
}

